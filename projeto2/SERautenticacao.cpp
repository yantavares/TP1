#include "SERautenticacao.hpp"

using namespace std;

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha) {
    BD bd;
    try{
        bd.autenticar(email, senha);
    }catch(...){
        cout << "Usuario nao encontrado";
        return 0;
    }
    cout << "Autenticação realizada com sucesso";
    return 1;
}
