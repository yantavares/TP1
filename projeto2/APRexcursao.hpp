#ifndef CONTROLADORAAPTExcursao_H_INCLUDED
#define CONTROLADORAAPTExcursao_H_INCLUDED

#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
#include <iterator>

#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"


class CntrApresentacaoExcursao:public IApresentacaoExcursao {
private:
    IServicoExcursao *cntr;
    Codigo ExcursaoGeradorCodigo();
    Codigo sessaoGeradorCodigo();

    void mostrarExcursao(Excursao);
    void listarExcursoes();
    void listarExcursoes(Email);
    void listarExcursao();
    void cadastrarExcursao(Email);
    void editarExcursao(Email);
    void descadastrarExcursao(Email);

    void ExcursoesSessao(Email);
    void ExcursaoSessao(Email);

    void cadastrarSessao(Email);
    void descadastrarSessao(Email);
    void listarSessoes(Email);
    void listarSessao(Email);
    void mostrarSessao(Sessao);
    void telaSessao(Email email);
public:
    void executar();
    void executar(Email);
    void setCntrServicoExcursao(IServicoExcursao*);
};

inline void CntrApresentacaoExcursao::setCntrServicoExcursao(IServicoExcursao *cntr) {
    this->cntr = cntr;
}

#endif