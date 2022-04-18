#ifndef aaaaaaaaaaaaaaaaa
#define aaaaaaaaaaaaaaaaa

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
    vector<Usuario> usuarios;
public:
    Usuario acessar(Email);

    int acharIndice(string);
    bool removerUsuario(Email);
    bool cadastrarUsuario(Usuario);
    bool alterarUsuario(Usuario);
    bool autenticar(Email, Senha);

};

#endif