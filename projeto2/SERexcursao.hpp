#ifndef CONTROLADORASVCIMOVEL_H_INCLUDED
#define CONTROLADORASVCIMOVEL_H_INCLUDED

#include <iostream>
#include <string.h>
#include <vector>

#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"

#include "bancodedados.hpp"

class CntrServicoExcursao: public IServicoExcursao {
public:
    vector<Excursao> recuperarExcursoes();
    bool cadastrarExcursao(Excursao, Email);
    Excursao recuperarExcursao(Codigo);
    Email recuperarDonoExcursao(Codigo);
    bool alterar(Excursao);
    bool deletarExcursao(Codigo);

    bool deletarSessao(Codigo);
    bool cadastrarSessao(Sessao, Email, Codigo);
    vector<Sessao> recuperarSessoes();
    Sessao recuperarSessao(Codigo);
};

#endif