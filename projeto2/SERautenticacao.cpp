#include "SERautenticacao.hpp"

using namespace std;

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha) {
    BD bd;
    if(bd.autenticar(email, senha)){
        return true;
    }else{
        return false;
    }

}
