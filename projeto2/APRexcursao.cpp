#include "APRexcursao.hpp"

using namespace std;

void CntrApresentacaoExcursao::executar() {
    int campo;
    while(true) {

        cout << "SERVICOS - EXCURSAO" << endl;
        cout << "1 - Listar todas as excursoes." << endl;
        cout << "2 - Pesquisar uma Excursao pelo codigo." << endl;
        cout << "3 - Retorne para tela inicial." << endl;

        cin >> campo;

        switch(campo){
            case 1:
                listarExcursoes();
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

        cout << "---------SERVICOS EXCURSAO---------" << endl;
        cout << "1 - Listar todas as excursoes." << endl;        
        cout << "2 - Pesquisar um Excursao pelo codigo." << endl;
        cout << "3 - Cadastrar um Excursao." << endl;            
        cout << "4 - Editar um Excursao." << endl;               
        cout << "5 - Descadastrar um Excursao." << endl;         
        cout << "6 - Listar minhas excursoes. " << endl;                  
        cout << "7 - Retorne para tela inicial." << endl;      

        cin >> campo;

        switch(campo){
            case 1:
                listarExcursoes();
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
                listarExcursoes(email);
                break;

            case 7:
                break;
        }
    }
}

void CntrApresentacaoExcursao::descadastrarExcursao(Email email) {
    list<Excursao> excursao = cntr->recuperarExcursoes(email);
    list<Excursao> :: iterator Excursao;
    Codigo codigo;
    string entrada;
    int campo;
    bool apresentar = true;

    while(apresentar) {
        cout << "Digite o codigo do Excursao que deseja deletar: ";
        try {
            getline(cin, entrada);
            codigo.setValor(entrada);
            for(Excursao = excursao.begin(); Excursao!= excursao.end(); ++Excursao) {
                if((*Excursao).getCodigo().getValor() == codigo.getValor()){
                    cntr->deletarExcursao(*Excursao);
                    apresentar = false;
                    cout << "Excursao deletado com sucesso." << endl;
                    cout << "Digite algo para retornar." << endl;
                    return;
                }
            }
            if(Excursao == excursao.end()){
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
void CntrApresentacaoExcursao::listarExcursoes(Email email) {
    list<Excursao>excursoes = cntr->recuperarExcursoes(email);
    list<Excursao> :: iterator Excursao;
    cout << "-------------------------LISTA DE EXCURSOES-------------------------" << endl;
    for(Excursao =excursoes.begin(); Excursao!=excursoes.end(); ++Excursao) {
        mostrarExcursao(*Excursao);
    }
    cout << "Digite algo para retornar." << endl;
}