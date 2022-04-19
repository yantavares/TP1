#ifndef CONTROLADORASVCIMOVEL_H_INCLUDED
#define CONTROLADORASVCIMOVEL_H_INCLUDED

#include <iostream>
#include <string.h>
#include <list>

#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"

#include "bancodedados/acessoDB.hpp"

class CntrServicoExcursao: public IServicoExcursao {
public:
    list<Excursao> recuperarExcursoes();
    list<Excursao> recuperarExcursoes(Email);
    bool cadastrarExcursao(Excursao, Email);
    Excursao recuperarExcursao(Codigo);
    Email recuperarDonoExcursao(Codigo);
    bool alterar(Excursao);
    bool deletarExcursao(Excursao);

    bool deletarSessao(Codigo);
    bool cadastrarSessao(Sessao, Email, Codigo);
    list<Sessao> recuperarSessoes();
    list<Sessao> recuperarSessoes(Email);
    list<Sessao> recuperarSessoes(Codigo);
    list<Codigo> recuperarCodigosSessoes(Email);
};

#endif