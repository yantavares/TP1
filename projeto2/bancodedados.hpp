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
    
public:
    Usuario acessar(Email, vector<string>&, vector<Usuario>& );

    static vector<string> emails;
    static vector<Usuario> usuarios;

    int acharIndice(string);
    bool removerUsuario(Email, vector<string>&, vector<Usuario>& );
    bool cadastrarUsuario(Usuario, vector<string>&, vector<Usuario>& );
    bool alterarUsuario(Usuario, vector<string>&, vector<Usuario>& );
    bool autenticar(Email, Senha, vector<string>&, vector<Usuario>& );

};

#endif