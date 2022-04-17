#include <iostream>
#include <algorithm>
#include <string.h>
#include <list>
#include <vector>
#include "../projeto1/dominios.hpp"
#include "../projeto1/entidades.hpp"

using namespace std;

class BD{
private:
    vector<string> emails;
    vector<string> nomes;
    vector<string> senhas;
    vector<Usuario> usuarios;
public:
    Usuario acessar(Email email);

    int acharIndice(vector<string> emails, string email);
    bool removerUsuario(Email email);
    bool cadastrarUsuario(Usuario usuario);
    bool alterarUsuario(Usuario usuario);
    bool autenticar(Email, Senha);

};