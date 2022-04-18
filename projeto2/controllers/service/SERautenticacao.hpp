#ifndef CONTROLADORASVCAUTENTICACAO_H_INCLUDED
#define CONTROLADORASVCAUTENTICACAO_H_INCLUDED

#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
#include <vector>
#include "../../../projeto1/dominios.hpp"
#include "../../../projeto1/entidades.hpp"
#include "../../interfaces.hpp"
#include "../../bancodedados.hpp"

using namespace std;


class CntrServicoAutenticacao: public IServicoAutenticacao {
public:
    bool autenticar(Email, Senha);
};



#endif