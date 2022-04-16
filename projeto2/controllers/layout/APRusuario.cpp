#include "APRusuario.hpp"

bool CntrApresentacaoUsuario::executar(Email email) {
    char texto1[] = "Selecione um dos servicos : ";
    char texto2[] = "1 - Consultar dados pessoais.";
    char texto3[] = "2 - Editar dados pessoais.";
    char texto4[] = "3 - Excluir meu usuario.";
    char texto5[] = "4 - Retornar.";

    int campo;

    bool apresentar = true;


    while(apresentar) {

        CLR_SCR;
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;
        cout << texto5 << endl;

        cin >> campo;
         switch(campo){
            case 1:
                consultarDadosUsuario(email);
                break;
            case 2:
                editarDadosUsuario(email);
                break;
            case 3:
                if(excluirUsuario(email)){
                    cout << "Usuario excluido com sucesso. Voce nao ira conseguir logar novamente." << endl;
                    return false;
                }
                break;
            case 4:
                apresentar = false;
                break;
        }
    }
    return true;
}

bool CntrApresentacaoUsuario::excluirUsuario(Email email) {
    int campo;
    CLR_SCR;
    cout << "Tem certeza que deseja excluir seu usuario?" << endl;
    cout << "1 - Sim, quero excluir." << endl;
    cout << "2 - Nao tenho certeza." << endl;
    cin >> campo;
    if (campo == 2){
        cout << "Processo cancelado." << endl;
        return false;
    }
    if(cntr->descadastrar(email))
        return true;

    cout << "Falha na exclusao. Tente novamente." << endl;
    return false;
}

void CntrApresentacaoUsuario::cadastrar() {
    char texto1[] = "Preencha os seguintes campos:";
    char texto2[] = "Nome            :";
    char texto3[] = "Email           :";
    char texto4[] = "Senha           :";
    char texto5[] = "Telefone        :";
    char texto6[] = "Dados em formato incorreto. Digite algo.";
    char texto7[] = "Sucesso no cadastramento. Digite algo.";
    char texto8[] = "Falha no cadastramento. Digite algo.";
    int campo;
    string campo1, campo2, campo3, campo4;

    Nome nome;
    Email email;
    Senha senha;

    bool apresentar = true;

    while(apresentar){
        CLR_SCR;
        cout << "-----CADASTRO DE USUARIO-----" << endl;
        cout << texto1 << endl;
        cout << texto2 << " ";
        getline(cin, campo1);
        cout << texto3 << " ";
        getline(cin, campo2);
        cout << texto4 << " ";
        getline(cin, campo3);
        cout << texto5 << " ";
        getline(cin, campo4);

        try {
            nome.setValor(campo1);
            email.setValor(campo2);
            senha.setValor(campo3);

            apresentar = false;
        } catch(invalid_argument &exp) {
            cout << texto6 << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }

    Usuario usuario;

    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(senha);


    if(cntr->cadastrar(usuario)) {
        cout << texto7 << endl;
        return;
    }

    cout << texto8 << endl;

    return;
}

void CntrApresentacaoUsuario::consultarDadosUsuario(Email email) {
    Usuario usuario;
    usuario = cntr->recuperar(email);

    CLR_SCR;
    cout << "DADOS DO USUARIO" << endl;
    cout << "Nome    : " << usuario.getNome().getValor() << endl;
    cout << "Email   : " << usuario.getEmail().getValor() << endl;
    cout << "Senha   : " << usuario.getSenha().getValor() << endl;

    cout << "Digite algo para retornar." << endl;
}

void CntrApresentacaoUsuario::editarDadosUsuario(Email email) {
    Nome nome;
    Senha senha;
    Usuario usuario;
    usuario = cntr->recuperar(email);

    int campo;
    string campo1, campo2, campo3;
    bool apresentar = true;

    while(apresentar){
        try {
            CLR_SCR;
            cout << "-----ATUALIZACAO DE DADOS-----" << endl;
            cout << "---------DADOS ATUAIS---------" << endl;
            cout << "Nome    : " << usuario.getNome().getValor() << endl;
            cout << "Email   : " << usuario.getEmail().getValor() << endl;
            cout << "Senha   : " << usuario.getSenha().getValor() << endl;
            cout << "------------------------------" << endl;
            cout << "---------NOVOS DADOS----------" << endl;

            cout << "Alterar nome: ";
            getline(cin, campo1);

            cout << "Alterar senha: ";
            getline(cin, campo2);

            cout << "Alterar telefone: ";
            getline(cin, campo3);

            nome.setValor(campo1);
            senha.setValor(campo2);
            usuario.setNome(nome);
            usuario.setSenha(senha);
    

            apresentar = false;
        } catch(invalid_argument &exp){
            cout << "Novos dados invalidos. Insira novamente." << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }


    if (cntr->alterar(usuario))
        cout << "Dados atualizados com sucesso!" << endl;
    else
        cout << "Falha na atualizacao dos dados!" << endl;
    cout << "Digite algo para retornar." << endl;
}