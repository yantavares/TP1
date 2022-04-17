#include "bancodedados.hpp"

bool BD::cadastrarUsuario(Usuario usuario){
    string email, nome, senha;
    email = usuario.getEmail().getValor();
    if(std::find(email.begin(), email.end(), email) != email.end()) {
        return 1;
    } else {
        usuarios.push_back(usuario);
        emails.push_back(email);
        return 0;
}
}

int BD::acharIndice(vector<string> emails, string email){
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

Usuario BD::acessar(Email email){
    if (acharIndice(emails, email.getValor())){
        return usuarios[acharIndice(emails, email.getValor())];
    }
    return;
}

bool BD::alterarUsuario(Usuario usuario){
    int index;
    index = acharIndice(emails, usuario.getEmail().getValor());
    usuarios.erase(usuarios.begin() + index);
    emails.erase(emails.begin() + index);

    usuarios.push_back(usuario);
    emails.push_back(usuario.getEmail().getValor());
}

bool BD::removerUsuario(Email email){
    int index;
    index = acharIndice(emails, email.getValor());
    usuarios.erase(usuarios.begin() + index);
    emails.erase(emails.begin() + index);

}