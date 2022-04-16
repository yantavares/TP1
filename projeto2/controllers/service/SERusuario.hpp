#ifndef CONTROLADORASVCUSUARIO_H_INCLUDED
#define CONTROLADORASVCUSUARIO_H_INCLUDED

#include <iostream>
#include <algorithm>
#include <string.h>
#include <list>
#include "../projeto1/dominios.hpp"
#include "../projeto1/entidades.hpp"
#include "../interfaces.hpp"

using namespace std;

class CntrServicoUsuario: public IServicoUsuario {
private:
    list<Excursao> recuperarExcursao(Email);
    vector<string> emails;
    vector<string> nomes;
    vector<string> senhas;
    vector<Usuario> usuarios;
public:
    bool cadastrar(Usuario);
    Usuario recuperar(Email);
    bool alterar(Usuario);
    bool descadastrar(Email);
    int acharIndice(vector<string> emails, string email);
};

#endif