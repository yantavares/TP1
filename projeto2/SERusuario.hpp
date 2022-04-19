#ifndef CONTROLADORASVCUSUARIO_H_INCLUDED
#define CONTROLADORASVCUSUARIO_H_INCLUDED

#include <iostream>
#include <algorithm>
#include <string.h>
#include <list>
#include <vector>
#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"
#include "bancodedados.hpp"

using namespace std;

class CntrServicoUsuario: public IServicoUsuario {

public:
    bool cadastrar(Usuario);
    Usuario recuperar(Email);
    bool alterar(Usuario);
    bool descadastrar(Email);

};

#endif