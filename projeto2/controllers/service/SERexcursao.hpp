#ifndef CONTROLADORASVCExcursao_H_INCLUDED
#define CONTROLADORASVCExcursao_H_INCLUDED

#include <iostream>
#include <string.h>
#include <list>

#include "../projeto1/dominios.hpp"
#include "../projeto1/entidades.hpp"
#include "../interfaces.hpp"


// #include "../../acessoDB.h"

class CntrServicoExcursao: public IServicoExcursao {
public:
    list<Excursao> recuperarExcursao();
    list<Excursao> recuperarExcursao(Email);
    Excursao recuperarExcursao(Codigo);
    Email recuperarCriadorExcursao(Codigo);
    bool cadastrarExcursao(Excursao, Email);
    bool alterar(Excursao);
    bool deletarExcursao(Excursao);

    bool deletarSessao(Codigo);
    bool cadastrarProposta(Sessao, Email, Codigo);
    list<Sessao> recuperarSessao();
    list<Sessao> recuperarSessao(Email);
    list<Sessao> recuperarSessao(Codigo);
    list<Codigo> recuperarCodigosSessao(Email);
};

#endif