#include "SERautenticacao.hpp"
#include "SERusuario.hpp"

int CntrServicoAutenticacao::acharIndice(vector<string> emails, string email){
    auto it = find(emails.begin(), emails.end(), email);
 
    if (it != emails.end())
    {
        int index = it - emails.begin();
        return index;
    }
    else {
        return -1;
    }
    return -1;
}


bool CntrServicoAutenticacao::autenticar(Email email, Senha senha) {
    if (acharIndice(CntrServicoUsuario::emails, email.getValor())){
        return CntrServicoUsuario::usuarios[acharIndice(emails, email.getValor())];
    }
    cout << "Usuario nao encontrado!";

}
