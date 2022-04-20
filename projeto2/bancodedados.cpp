#include "bancodedados.hpp"

using namespace std;

std::vector<string> BD::emails;
std::vector<Usuario> BD::usuarios;
// std::vector<Excursao> BD::excursoes;
// std::vector<Sessao> BD::sessoes;

bool BD::cadastrarUsuario(Usuario usuario){
    string email, nome, senha;
    email = usuario.getEmail().getValor();
    if(find(emails.begin(), emails.end(), email) != emails.end()) {
        return false;
    } else {
        usuarios.push_back(usuario);
        emails.push_back(email);
        return true;
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

// Codigo BD::gerarCodigo(){
//     Codigo codigo;
//     string tentando = "";
//     random_device isso_mesmo;
//     mt19937 oi(isso_mesmo());
//     uniform_int_distribution<> distr(0, 9);
//     for(int n=0; n<7; ++n)
//         tentando = tentando + to_string(distr(oi));
//     codigo.setValor(tentando);
//     return codigo; 

// }

// bool BD::cadastrarExcursao(Excursao excursao){
//     Codigo codigo;
//     codigo = gerarCodigo();
//     excursao.setCodigo(codigo);

//     if(find(excursoes.begin(), excursoes.end(), excursao) != excursoes.end()) {
//         return false;
//     } else {
//         excursoes.push_back(excursao);
//         return true;
// }
// }
// Excursao BD::pesquisarExcursao(Codigo codigo){
//     for(int i = 0; i < excursoes.size(); i++){
//         if (excursoes[i].getCodigo().getValor() == codigo.getValor()){
//             return excursoes[i];
//             break;
//         }
//     }throw invalid_argument("Excursao nao encontrada");
// }

// bool BD::deletarExcursao(Codigo codigo){

//    for(int i = 0; i < excursoes.size(); i++){
//         if (excursoes[i].getCodigo().getValor() == codigo.getValor()){
//             excursoes.erase(excursoes.begin() + i);
//             return true;
//             break;
//         }
//     }throw invalid_argument("Excursao nao encontrada");
//     return false;
// }

// Sessao BD::pesquisarSessao(Codigo codigo){
//     for(int i = 0; i < sessoes.size(); i++){
//         if (sessoes[i].getCodigo().getValor() == codigo.getValor()){
//             return sessoes[i];
//             break;
//         }
//     }throw invalid_argument("Sessao nao encontrada");
// }

// bool BD::deletarSessao(Codigo codigo){

//    for(int i = 0; i < sessoes.size(); i++){
//         if (sessoes[i].getCodigo().getValor() == codigo.getValor()){
//             sessoes.erase(sessoes.begin() + i);
//             return true;
//             break;
//         }
//     }throw invalid_argument("SessaodeletarSessao nao encontrada");
//     return false;
// }

// bool BD::cadastrarSessao(Sessao sessao){
//     Codigo codigo;
//     codigo = gerarCodigo();
//     sessao.setCodigo(codigo);

//     if(find(sessoes.begin(), sessoes.end(), sessao) != sessoes.end()) {
//         return false;
//     } else {
//         sessoes.push_back(sessao);
//         return true;
// }
// }
// vector<Excursao> BD::recuperarExcursoes(){
//     return excursoes;
// }

// vector<Sessao> BD::recuperarSessoes(){
//     return sessoes;
// }