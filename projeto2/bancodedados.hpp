#ifndef BANCODEDADOS_HPP_INCLUDED
#define BANCODEDADOS_HPP_INCLUDED

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
    Usuario acessar(Email);

    static vector<string> emails;
    static vector<Usuario> usuarios;

    static list<Excursao> excursoes;
    static list<Sessao> sessoes;

    int acharIndice(string);
    bool removerUsuario(Email);
    bool cadastrarUsuario(Usuario);
    bool alterarUsuario(Usuario);
    bool autenticar(Email, Senha);

};

#endif