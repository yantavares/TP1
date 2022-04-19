#include "SERautenticacao.hpp"

using namespace std;

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha) {
    BD bd;
    if(bd.autenticar(email, senha, BD::emails, BD::usuarios)){
        return true;
    }else{
        return true;
    }

}
