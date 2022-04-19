#include "bancodedados.hpp"

using namespace std;

std::vector<string> BD::emails;
std::vector<Usuario> BD::usuarios;

bool BD::cadastrarUsuario(Usuario usuario){
    string email, nome, senha;
    email = usuario.getEmail().getValor();
    if(find(emails.begin(), emails.end(), email) != emails.end()) {
        return 1;
    } else {
        usuarios.push_back(usuario);
        emails.push_back(email);
        return 0;
}
}

int BD::acharIndice(string email){
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
    if (acharIndice(email.getValor())){
        return usuarios[acharIndice(email.getValor())];
    }
    else{
        return usuarios[0];
    }
}

bool BD::alterarUsuario(Usuario usuario){
    int index;
    index = acharIndice(usuario.getEmail().getValor());
    usuarios.erase(usuarios.begin() + index);
    emails.erase(emails.begin() + index);

    usuarios.push_back(usuario);
    emails.push_back(usuario.getEmail().getValor());
    return 1;
}

bool BD::removerUsuario(Email email){
    int index;
    index = acharIndice(email.getValor());
    usuarios.erase(usuarios.begin() + index);
    emails.erase(emails.begin() + index);
    return 1;

}
bool BD::autenticar(Email email, Senha senha){
    string emailUser = email.getValor();
    string senhaUser = senha.getValor();
    int index;
    if(find(emails.begin(), emails.end(), emailUser) != emails.end()) {
        index = acharIndice(emailUser);
        if(usuarios[index].getEmail().getValor() == emailUser && usuarios[index].getSenha().getValor() == senhaUser){
            return 1;
        }
        return 0;
    } else {
        return 0;
    }
}