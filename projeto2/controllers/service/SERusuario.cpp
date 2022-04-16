#include "SERusuario.hpp"

using namespace std;

bool CntrServicoUsuario::cadastrar(Usuario usuario) {
    string email, nome, senha;
    email = usuario.getEmail().getValor();
    if(std::find(email.begin(), email.end(), email) != email.end()) {
        cout << "Usuario ja cadastrado!";
    } else {
        usuarios.push_back(usuario);
        emails.push_back(email);
        cout << "Usuario cadastrado com sucesso!";
    
}
   
}

int CntrServicoUsuario::acharIndice(vector<string> emails, string email){
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

Usuario CntrServicoUsuario::recuperar(Email email) {
    if (acharIndice(emails, email.getValor())){
        return usuarios[acharIndice(emails, email.getValor())];
    }
    cout << "Usuario nao encontrado!";
}

bool CntrServicoUsuario::alterar(Usuario usuario) {
    int index;
    index = acharIndice(emails, usuario.getEmail().getValor());
    usuarios.erase(usuarios.begin() + index);
    emails.erase(emails.begin() + index);

    usuarios.push_back(usuario);
    emails.push_back(usuario.getEmail().getValor());
}

bool CntrServicoUsuario::descadastrar(Email email) {
    int index;
    index = acharIndice(emails, email.getValor());
    usuarios.erase(usuarios.begin() + index);
    emails.erase(emails.begin() + index);

}