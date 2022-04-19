#include "SERusuario.hpp"

using namespace std;

bool CntrServicoUsuario::cadastrar(Usuario usuario) {
    BD bd;
    try{
      bd.cadastrarUsuario(usuario);
    }catch(...){
        //cout << "Usuario ja cadastrado!";
        return false;
    }
    //cout << "Usuario cadastrado com sucesso";
    return true;
    
}
Usuario CntrServicoUsuario::recuperar(Email email) {
    BD bd;
    Usuario user;
    try{
      user = bd.acessar(email);
      cout << user.getEmail().getValor() << endl;
      cout << user.getNome().getValor() << endl;
      cout << user.getSenha().getValor() << endl;
      return user;
    }catch(...){
      cout << "Usuario nao encontrado!";
    }

}

bool CntrServicoUsuario::alterar(Usuario usuario) {
    BD bd;
    try{
      bd.alterarUsuario(usuario);
    }catch(...){
        //cout << "Não foi possivel alterar seu usuario";
        return false;
    }
    //cout << "Usuario alterado com sucesso";
    return true;
}

bool CntrServicoUsuario::descadastrar(Email email) {
    BD bd;
    try{
      bd.removerUsuario(email);
    }catch(...){
        //cout << "Nao foi possivel apagar o usuario!";
        return false;
    }
    //cout << "Usuario apagado com sucesso";
    return true;
}

