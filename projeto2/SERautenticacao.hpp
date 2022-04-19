#ifndef CONTROLADORASVCAUTENTICACAO_H_INCLUDED
#define CONTROLADORASVCAUTENTICACAO_H_INCLUDED

#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
#include <vector>
#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"
#include "bancodedados.hpp"

using namespace std;


class CntrServicoAutenticacao: public IServicoAutenticacao {
public:
    bool autenticar(Email, Senha);
};



#endif