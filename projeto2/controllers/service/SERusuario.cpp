#include "SERusuario.hpp"
#include "bancodedados.hpp"

using namespace std;

bool CntrServicoUsuario::cadastrar(Usuario usuario) {
    BD bd;
    try{
      bd.cadastrarUsuario(usuario);
    }catch(...){
        cout << "Usuario ja cadastrado!";
        return 0;
    }
    cout << "Usuario cadastrado com sucesso";
    return 1;
    
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
        return;
    }

}

bool CntrServicoUsuario::alterar(Usuario usuario) {
    BD bd;
    try{
      bd.alterarUsuario(usuario);
    }catch(...){
        cout << "Não foi possivel alterar seu usuario";
        return 0;
    }
    cout << "Usuario alterado com sucesso";
    return 1;
}

bool CntrServicoUsuario::descadastrar(Email email) {
    BD bd;
    try{
      bd.removerUsuario(email);
    }catch(...){
        cout << "Nao foi possivel apagar o usuario!";
        return 0;
    }
    cout << "Usuario apagado com sucesso";
    return 1;
}

