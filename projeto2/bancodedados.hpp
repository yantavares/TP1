#ifndef AAAABBB
#define AAAABBB

#include <iostream>
#include <algorithm>
#include <string.h>
#include <list>
#include <vector>
#include "dominios.hpp"
#include "entidades.hpp"

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