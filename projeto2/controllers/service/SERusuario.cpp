#include "SERusuario.hpp"
#include "bancodedados.hpp"

using namespace std;

bool CntrServicoUsuario::cadastrar(Usuario usuario) {
    BD bd;
    try{
      bd.cadastrarUsuario(usuario);
    }catch(...){
        cout << "Usuario ja cadastrado!";
        throw;
    }
    cout << "Usuario cadastrado com sucesso";
    
}
Usuario CntrServicoUsuario::recuperar(Email email) {
    BD bd;
    Usuario user;
    try{
      user = bd.acessar(email);
      cout << user.getEmail().getValor() << endl;
      cout << user.getNome().getValor() << endl;
      cout << user.getSenha().getValor() << endl;
    }catch(...){
        cout << "Usuario nao encontrado!";
        throw;
    }

}

bool CntrServicoUsuario::alterar(Usuario usuario) {
    BD bd;
    try{
      bd.alterarUsuario(usuario);
    }catch(...){
        cout << "Não foi possivel alterar seu usuario";
        throw;
    }
    cout << "Usuario alterado com sucesso";
}

bool CntrServicoUsuario::descadastrar(Email email) {
    BD bd;
    try{
      bd.removerUsuario(email);
    }catch(...){
        cout << "Nao foi possivel apagar o usuario!";
        throw;
    }
    cout << "Usuario apagado com sucesso";
}