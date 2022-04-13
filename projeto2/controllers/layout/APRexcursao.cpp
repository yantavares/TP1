#include "APRexcursao.hpp"

using namespace std;

void CntrApresentacaoExcursao::executar() {
    int campo;
    while(true) {
        CLR_SCR;

        cout << "SERVICOS - IMOVEIS" << endl;
        cout << "1 - Listar todos os imoveis." << endl;
        cout << "2 - Pesquisar um Excursao pelo codigo." << endl;
        cout << "3 - Retorne para tela inicial." << endl;

        cin >> campo;

        switch(campo){
            case 1:
                listarImoveis();
                break;
            case 2:
                listarExcursao();
                break;
            case 3:
                return;
        }
    }
}

void CntrApresentacaoExcursao::executar(Email email) {
 int campo;
    while(true) {
        CLR_SCR;

        cout << "---------SERVICOS IMOVEIS---------" << endl;
        cout << "1 - Listar todos os imoveis." << endl;        
        cout << "2 - Pesquisar um Excursao pelo codigo." << endl;
        cout << "3 - Cadastrar um Excursao." << endl;            
        cout << "4 - Editar um Excursao." << endl;               
        cout << "5 - Descadastrar um Excursao." << endl;         
        cout << "6 - Listar meus imoveis. " << endl;           
        cout << "7 - Servicos de propostas." << endl;          
        cout << "8 - Retorne para tela inicial." << endl;      

        cin >> campo;

        switch(campo){
            case 1:
                listarImoveis();
                break;
            case 2:
                listarExcursao();
                break;
            case 3:
                cadastrarExcursao(email);
                break;
            case 4:
                editarExcursao(email);
                break;
            case 5:
                descadastrarExcursao(email);
                break;
            case 6:
                listarImoveis(email);
                break;
            case 7:
                telaSessao(email);
                break;
            case 8:
                return;
        }
    }
}

void CntrApresentacaoExcursao::descadastrarExcursao(Email email) {
    list<Excursao> imoveis = cntr->recuperarImoveis(email);
    list<Excursao> :: iterator Excursao;
    Codigo codigo;
    string entrada;
    int campo;
    bool apresentar = true;

    while(apresentar) {
        CLR_SCR;
        cout << "Digite o codigo do Excursao que deseja deletar: ";
        try {
            getline(cin, entrada);
            codigo.setValor(entrada);
            for(Excursao = imoveis.begin(); Excursao!= imoveis.end(); ++Excursao) {
                if((*Excursao).getCodigo().getValor() == codigo.getValor()){
                    cntr->deletarExcursao(*Excursao);
                    apresentar = false;
                    cout << "Excursao deletado com sucesso." << endl;
                    cout << "Digite algo para retornar." << endl;
                    return;
                }
            }
            if(Excursao == imoveis.end()){
                cout << "Excursao nao encontrado." << endl;
                cout << "Digite algo para retornar." << endl;
                return;
            }

        } catch(...) {
            cout << "Codigo invalido ou Excursao inexistente." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }
}

void CntrApresentacaoExcursao::listarImoveis(Email email) {
    list<Excursao> imoveis = cntr->recuperarImoveis(email);
    list<Excursao> :: iterator Excursao;
    CLR_SCR;
    cout << "-------------------------LISTA DE IMOVEIS-------------------------" << endl;
    for(Excursao = imoveis.begin(); Excursao!= imoveis.end(); ++Excursao) {
        mostrarExcursao(*Excursao);
    }
    cout << "Digite algo para retornar." << en
}

void CntrApresentacaoExcursao::descadastrarProposta(Email email) {
    list<Proposta> propostas = cntr->recuperarPropostas(email);
    list<Proposta> :: iterator proposta;
    Codigo codigo;
    string entrada;
    int campo;
    bool apresentar = true;

    while(apresentar) {
        CLR_SCR;
        cout << "Digite o codigo da proposta que deseja deletar: ";
        try {
            getline(cin, entrada);
            codigo.setCodigo(entrada);
            for(proposta = propostas.begin(); proposta!= propostas.end(); ++proposta) {
                if((*proposta).getCodigo().getCodigo() == codigo.getCodigo()){
                    cntr->deletarProposta(codigo);
                    apresentar = false;
                    cout << "Proposta deletada com sucesso." << endl;
                    cout << "Digite algo para retornar." << endl;

                    return;
                }
            }
            if(proposta == propostas.end()){
                cout << "Proposta nao encontrada." << endl;
                cout << "Digite algo para retornar." << endl;
                return;
            }

        } catch(...) {
            cout << "Codigo invalido ou proposta inexistente." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }
}

void CntrApresentacaoExcursao::listarProposta(Email email){
    list<Proposta> propostas = cntr->recuperarPropostas(email);
    list<Proposta> :: iterator proposta;
    Codigo codigo;
    string entrada;
    int campo;
    bool apresentar = true;

    while(apresentar) {
        CLR_SCR;
        cout << "Digite o codigo da proposta que deseja visualizar: ";
        try {
            getline(cin, entrada);
            codigo.setCodigo(entrada);
            for(proposta = propostas.begin(); proposta!= propostas.end(); ++proposta) {
                if((*proposta).getCodigo().getCodigo() == codigo.getCodigo()){
                    cout << "-------------------------PROPOSTA ENCONTRADA-------------------------" << endl;
                    mostrarProposta(*proposta);
                    apresentar = false;
                    cout << "Digite algo para retornar" << endl;

                    return;
                }
            }
            if(proposta == propostas.end()){
                cout << "Proposta nao encontrada" << endl;
                cout << "Digite algo para retornar" << endl;
                return;
            }

        } catch(...) {
            cout << "Codigo invalido ou proposta inexistente." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }
}


void CntrApresentacaoExcursao::listarPropostas(Email email) {
    list<Proposta> propostas = cntr->recuperarPropostas(email);
    list<Proposta> :: iterator proposta;
    CLR_SCR;
    cout << "-------------------------LISTA DE MINHAS PROPOSTAS-------------------------" << endl;
    for(proposta = propostas.begin(); proposta!= propostas.end(); ++proposta) {
        mostrarProposta(*proposta);
    }
    cout << "Digite algo para retornar." << en
}

void CntrApresentacaoExcursao::mostrarProposta(Proposta proposta) {
    cout << "Codigo            : " << proposta.getCodigo().getCodigo() << endl;
    cout << "Data Inicial      : " << proposta.getDataInicial().getData() << endl;
    cout << "Data Final        : " << proposta.getDataFinal().getData() << endl;
    cout << "Numero de Hospedes: " << proposta.getHospedes().getNumero() << endl;
    cout << "Valor R$          : " << proposta.getValor().getMoeda() << endl;
    cout << "---------------------------------------------------------------------"<< endl;
}

void CntrApresentacaoExcursao::cadastrarProposta(Email email) {
    int campo;
    string campo1, campo2, campo3, campo4, campo5;
    Data dataInicial, dataFinal;
    Numero hospedes;
    Moeda valor;
    Codigo codigoExcursao, codigoProposta;
    Proposta proposta;
    Excursao Excursao;

    list<Codigo> codigos = cntr->recuperarCodigosPropostas(email);
    list<Codigo> :: iterator codigo;

    bool apresentar = true;

    while(apresentar) {
        CLR_SCR;
        cout << "----------CADASTRO DE PROPOSTA----------" << endl;
        cout << "Codigo do Excursao: ";
        getline(cin, campo2);
        cout << "Data inicial: ";
        getline(cin, campo3);
        cout << "Data final: ";
        getline(cin, campo4);
        cout << "Numero de hospedes: ";
        getline(cin, campo1);
        cout << "Valor proposto: ";
        getline(cin, campo5);


        try {
            codigoExcursao.setCodigo(campo2);
            Excursao = cntr->recuperarExcursao(codigoExcursao);

            for(codigo = codigos.begin(); codigo!= codigos.end(); ++codigo) {
                if((*codigo).getCodigo() == codigoExcursao.getCodigo()){
                    cout << "Voce ja tem uma proposta cadastrada para esse Excursao." << endl;
                    apresentar = false;
                    cout << "Digite algo para retornar" << endl;

                    return;
                }
            }

            dataInicial.setData(campo3);
            dataFinal.setData(campo4);

            int anoFp = stoi(dataFinal.getData().substr(6,2))*365;
            int mesFp = stoi(dataFinal.getData().substr(3,2))*30;
            int diaFp = stoi(dataFinal.getData().substr(0,2));
            int anoIp = stoi(dataInicial.getData().substr(6,2))*365;
            int mesIp = stoi(dataInicial.getData().substr(3,2))*30;
            int diaIp = stoi(dataInicial.getData().substr(0,2));
            int data = (anoFp+mesFp+diaFp) - (anoIp+mesIp+diaIp);
            if(data <= 0){
                throw "Data invalida.";
            }

            int anoFi = stoi(Excursao.getDataFinal().getData().substr(6,2))*365;
            int mesFi = stoi(Excursao.getDataFinal().getData().substr(3,2))*30;
            int diaFi = stoi(Excursao.getDataFinal().getData().substr(0,2));
            int anoIi = stoi(Excursao.getDataInicial().getData().substr(6,2))*365;
            int mesIi = stoi(Excursao.getDataInicial().getData().substr(3,2))*30;
            int diaIi = stoi(Excursao.getDataInicial().getData().substr(0,2));
            if((anoFi+mesFi+diaFi) < (anoFp+mesFp+diaFp))
                throw "Data invalida.";
            if((anoIi+mesIi+diaIi) > (anoIp+mesIp+diaIp))
                throw "Data invalida.";

            hospedes.setNumero(stoi(campo1));
            if(hospedes.getNumero() > Excursao.getHospedes().getNumero())
                throw "Quantidade de hospedes invalida.";

            valor.setMoeda(campo5);
            string valorString = valor.getMoeda();
            valorString.erase(remove(valorString.begin(), valorString.end(), '.'), valorString.end());
            int valorCentavos = (stoi(valorString.substr(0, valorString.length()-3))*100);
            valorCentavos += stoi(valorString.substr(valorString.length()-2, 2));

            string valorExcursaoString = Excursao.getValor().getMoeda();
            valorExcursaoString.erase(remove(valorExcursaoString.begin(), valorExcursaoString.end(), '.'), valorExcursaoString.end());
            int valorExcursaoCentavos = (stoi(valorExcursaoString.substr(0, valorExcursaoString.length()-3))*100);
            valorExcursaoCentavos += stoi(valorExcursaoString.substr(valorExcursaoString.length()-2, 2));

            if(valorExcursaoCentavos > valorCentavos)
                throw "Valor informado insuficiente.";

            apresentar = false;

            codigoProposta.setCodigo(propostaGeradorCodigo().getCodigo());
        } catch(...) {
            cout << "Algum dado esta em formato invalido ou Excursao nao existe." << endl;
            cout << "Atente-se para os requisitos do Excursao." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar" << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }

    proposta.setCodigo(codigoProposta);
    proposta.setDataInicial(dataInicial);
    proposta.setDataFinal(dataFinal);
    proposta.setHospedes(hospedes);
    proposta.setValor(valor);

    if (cntr->cadastrarProposta(proposta, email, codigoExcursao)){
        cout << "Proposta cadastrado com sucesso." << endl;
        cout << "Codigo da proposta: " << proposta.getCodigo().getCodigo() << end
        return;
    }
    cout << "Falha no cadastramento da proposta. Tente novamente." << endl;
    cout << "Digite para retornar." << en
}

Codigo CntrApresentacaoExcursao::propostaGeradorCodigo() {
    list<Proposta> propostas = cntr->recuperarPropostas();
    Codigo codigo;
    string novo_codigo = "P0000", id;
    id = to_string(stoi(propostas.back().getCodigo().getCodigo().substr(1, 4)) + 1);
    int tam1 = id.length(), tam2 = novo_codigo.length();
    novo_codigo = novo_codigo.substr(0, tam2-tam1)+id;
    codigo.setCodigo(novo_codigo);

    return codigo;
}

void CntrApresentacaoExcursao::telaPropostas(Email email) {
    bool apresentar = true;
    int campo_proposta;
    while(apresentar){
        CLR_SCR;
        cout << "---------SERVICOS PROPOSTAS---------" << endl;
        cout << "1 - Listar minhas propostas." << endl;            
        cout << "2 - Visualizar proposta." << endl;                
        cout << "3 - Efetuar proposta." << endl;                   
        cout << "4 - Descadastrar proposta." << endl;              
        cout << "5 - Propostas a todos os meus imoveis." << endl;  
        cout << "6 - Visualizar propostas de apenas um Excursao." << 
        cout << "7 - Retorne para tela de imoveis." << endl;       
        campo_proposta = getch() - 48;

        switch(campo_proposta) {
            case 1:
                listarPropostas(email);
                break;
            case 2:
                listarProposta(email);
                break;
            case 3:
                cadastrarProposta(email);
                break;
            case 4:
                descadastrarProposta(email);
                break;
            case 5:
                imoveisPropostas(email);
                break;
            case 6:
                ExcursaoPropostas(email);
                break;
            case 7:
                apresentar = false;
                break;
        }
    }
}

void CntrApresentacaoExcursao::imoveisPropostas(Email email) {
    list<Excursao> imoveis = cntr->recuperarImoveis(email);
    list<Excursao> :: iterator Excursao;
    Codigo codigo;

    CLR_SCR;
    cout << "-------------------------TODAS AS PROPOSTAS ENCONTRADAS-------------------------" << endl;
    try {
        for(Excursao = imoveis.begin(); Excursao!= imoveis.end(); ++Excursao) {
            codigo = (*Excursao).getCodigo();
            cout << "Propostas para o Excursao: " << codigo.getCodigo() << endl;
            list<Proposta> propostas = cntr->recuperarPropostas(codigo);
            list<Proposta> :: iterator proposta;
            for(proposta = propostas.begin(); proposta!= propostas.end(); ++proposta) {
                mostrarProposta(*proposta);
            }
        }
    } catch(...) {
        cout << "Codigo invalido ou Excursao inexistente." << endl;
    }
    cout << "Digite algo para retornar" << en
}

void CntrApresentacaoExcursao::ExcursaoPropostas(Email email) {
    list<Excursao> imoveis = cntr->recuperarImoveis(email);
    list<Excursao> :: iterator Excursao;
    Codigo codigo;
    string entrada;
    int campo;
    bool apresentar = true;

    while(apresentar) {
        CLR_SCR;
        cout << "Digite o codigo do Excursao que deseja visualizar as propostas: ";
        try {
            getline(cin, entrada);
            codigo.setCodigo(entrada);
            for(Excursao = imoveis.begin(); Excursao!= imoveis.end(); ++Excursao) {
                if((*Excursao).getCodigo().getCodigo() == codigo.getCodigo()){
                    list<Proposta> propostas = cntr->recuperarPropostas(codigo);
                    list<Proposta> :: iterator proposta;
                    for(proposta = propostas.begin(); proposta!= propostas.end(); ++proposta) {
                        cout << "-------------------------PROPOSTAS ENCONTRADAS-------------------------" << endl;
                        mostrarProposta(*proposta);
                    }
                    apresentar = false;
                    cout << "Digite algo para retornar" << endl;

                    return;
                }
            }
            if(Excursao == imoveis.end()){
                cout << "Excursao nao encontrado" << endl;
                cout << "Digite algo para retornar" << endl;
                return;
            }

        } catch(...) {
            cout << "Codigo invalido ou Excursao inexistente." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }
}

void CntrApresentacaoExcursao::editarExcursao(Email email) {
    Codigo codigo;
    Classe classe;
    Descricao descricao;
    Endereco endereco;
    Data dataInicial, dataFinal;
    Numero hospedes;
    Moeda valor;
    Excursao Excursao;
    Email email_autenticacao;

    int campo;
    string campo1;
    bool apresentar = true;

    while(apresentar){
        try {
            CLR_SCR;
            cout << "-----ATUALIZACAO DE DADOS DE Excursao-----" << endl;
            cout << " Codigo do Excursao a ser alterado:" << endl;
            getline(cin, campo1);
            codigo.setCodigo(campo1);
            Excursao = cntr->recuperarExcursao(codigo);
            email_autenticacao = cntr->recuperarDonoExcursao(codigo);
            if (email.getEmail() != email_autenticacao.getEmail()){
                cout << "Voce nao tem permissao para editar esse Excursao." << endl;
                return;
            }

            cout << "-----Excursao A SER EDITADO-----" << endl;
            mostrarExcursao(Excursao);

            string campo2, campo3, campo4, campo5, campo6, campo7, campo8, campo9;

            cout << "Alterar classe: ";
            getline(cin, campo2);

            cout << "Alterar descricao: ";
            getline(cin, campo3);

            cout << "Alterar endereco: ";
            getline(cin, campo4);

            cout << "Alterar data inicial: ";
            getline(cin, campo5);

            cout << "Alterar data final: ";
            getline(cin, campo6);

            cout << "Alterar hospedes: ";
            getline(cin, campo7);

            cout << "Alterar valor: ";
            getline(cin, campo8);

            classe.setClasse(stoi(campo2));
            descricao.setDescricao(campo3);
            endereco.setEndereco(campo4);
            dataInicial.setData(campo5);
            dataFinal.setData(campo6);
            hospedes.setNumero(stoi(campo7));
            valor.setMoeda(campo8);

            Excursao.setClasse(classe);
            Excursao.setDescricao(descricao);
            Excursao.setEndereco(endereco);
            Excursao.setDataInicial(dataInicial);
            Excursao.setDataFinal(dataFinal);
            Excursao.setHospedes(hospedes);
            Excursao.setValor(valor);

            apresentar = false;
        } catch(...){
            cout << "Excursao nao existe ou dados invalidos. Insira novamente." << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }

    if (cntr->alterar(Excursao))
        cout << "Dados atualizados com sucesso!" << endl;
    else
        cout << "Falha na atualizacao dos dados!" << endl;
    cout << "Digite algo para retornar." << en
}

void CntrApresentacaoExcursao::cadastrarExcursao(Email email) {
    int campo;
    string campo1, campo2, campo3, campo4, campo5, campo6, campo7;
    Codigo codigo;
    Classe classe;
    Descricao descricao;
    Endereco endereco;
    Data dataInicial, dataFinal;
    Numero hospedes;
    Moeda valor;
    Excursao Excursao;

    list<Excursao> imoveis = cntr->recuperarImoveis(email);

    if(imoveis.size() > 5){
        cout << "Ja existe 5 imoveis cadastrados no seu email." << end
        return;
    }

    bool apresentar = true;
    while(apresentar) {
        CLR_SCR;
        cout << "----------CADASTRO DE Excursao----------" << endl;
        cout << "Classe do Excursao:" << endl;
        cout << "1 - Apartamento." << endl;
        cout << "2 - Casa." << endl;
        cout << "3 - Quarto." << endl;
        getline(cin, campo1);
        cout << "Descricao do Excursao: ";
        getline(cin, campo2);
        cout << "Endereco do Excursao: ";
        getline(cin, campo3);
        cout << "Numero maximo de hospedes: ";
        getline(cin, campo4);
        cout << "Data inicial de disponibilidade: ";
        getline(cin, campo5);
        cout << "Data final de disponibilidade: ";
        getline(cin, campo6);
        cout << "Valor minimo de diaria: ";
        getline(cin, campo7);
        try {
            classe.setClasse(stoi(campo1));
            descricao.setDescricao(campo2);
            endereco.setEndereco(campo3);
            hospedes.setNumero(stoi(campo4));
            dataInicial.setData(campo5);
            dataFinal.setData(campo6);
            valor.setMoeda(campo7);

            int anoF = stoi(dataFinal.getData().substr(6,2))*365;
            int mesF = stoi(dataFinal.getData().substr(3,2))*30;
            int diaF = stoi(dataFinal.getData().substr(0,2));
            int anoI = stoi(dataInicial.getData().substr(6,2))*365;
            int mesI = stoi(dataInicial.getData().substr(3,2))*30;
            int diaI = stoi(dataInicial.getData().substr(0,2));
            int data = (anoF+mesF+diaF) - (anoI+mesI+diaI);
            if(data <= 0){
                throw "Data invalida";
            }

            apresentar = false;

            codigo.setCodigo(ExcursaoGeradorCodigo().getCodigo());
        } catch(...) {
            cout << "Algum dado esta em formato invalido." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar" << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }

    Excursao.setCodigo(codigo);
    Excursao.setClasse(classe);
    Excursao.setDescricao(descricao);
    Excursao.setEndereco(endereco);
    Excursao.setDataInicial(dataInicial);
    Excursao.setDataFinal(dataFinal);
    Excursao.setHospedes(hospedes);
    Excursao.setValor(valor);
    if (cntr->cadastrarExcursao(Excursao, email)){
        cout << "Excursao cadastrado com sucesso." << endl;
        cout << "Codigo do Excursao: " <<Excursao.getCodigo().getCodigo() << end
        return;
    }
    cout << "Falha no cadastramento do Excursao. Tente novamente." << endl;
    cout << "Digite para retornar." << en
}

Codigo CntrApresentacaoExcursao::ExcursaoGeradorCodigo(){
    list<Excursao> imoveis = cntr->recuperarImoveis();
    Codigo codigo;
    string novo_codigo = "I0000", id;
    id = to_string(stoi(imoveis.back().getCodigo().getCodigo().substr(1, 4)) + 1);
    int tam1 = id.length(), tam2 = novo_codigo.length();
    novo_codigo = novo_codigo.substr(0, tam2-tam1)+id;
    codigo.setCodigo(novo_codigo);

    return codigo;
}

void CntrApresentacaoExcursao::listarImoveis() {
    list<Excursao> imoveis = cntr->recuperarImoveis();
    list<Excursao> :: iterator Excursao;
    CLR_SCR;
    cout << "-------------------------LISTA DE IMOVEIS-------------------------" << endl;
    for(Excursao = imoveis.begin(); Excursao!= imoveis.end(); ++Excursao) {
        mostrarExcursao(*Excursao);
    }
    cout << "Digite algo para retornar." << en
}

void CntrApresentacaoExcursao::listarExcursao(){
    Excursao Excursao;
    Codigo codigo;
    string entrada;
    int campo;
    bool apresentar = true;

    while(apresentar) {
        CLR_SCR;
        cout << "Digite o codigo do Excursao que deseja visualizar: ";
        try {
            getline(cin, entrada);
            codigo.setCodigo(entrada);
            Excursao = cntr->recuperarExcursao(codigo);
            apresentar = false;

        } catch(...) {
            cout << "Codigo invalido ou Excursao nao registrado." << endl;
            cout << "Pressione:" << endl;
            cout << "1 - Para tentar novamente." << endl;
            cout << "2 - Para retornar." << endl;
            cin >> campo;
            if (campo == 2)
                return;
        }
    }
    cout << "-------------------------Excursao ENCONTRADO-------------------------" << endl;
    mostrarExcursao(Excursao);
    cout << "Digite algo para retornar" << en
}

void CntrApresentacaoExcursao::mostrarExcursao(Excursao Excursao) {
    cout << "Codigo            : " <<Excursao.getCodigo().getCodigo() << endl;
    cout << "Classe            : ";
    switch(Excursao.getClasse().getClasse()){
        case 1:
            cout << "Apartamento." << endl;
            break;
        case 2:
            cout << "Casa." << endl;
            break;
        case 3:
            cout << "Quarto." << endl;
            break;
    }
    cout << "Descricao         : " << Excursao.getDescricao().getDescricao() << endl;
    cout << "Endereco          : " << Excursao.getEndereco().getEndereco() << endl;
    cout << "Data Inicial      : " << Excursao.getDataInicial().getData() << endl;
    cout << "Data Final        : " << Excursao.getDataFinal().getData() << endl;
    cout << "Numero de Hospedes: " << Excursao.getHospedes().getNumero() << endl;
    cout << "Valor R$          : " << Excursao.getValor().getMoeda() << endl;
    cout << "---------------------------------------------------------------------"<< endl;
}