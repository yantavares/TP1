#ifndef CONTROLADORAAPTExcursao_H_INCLUDED
#define CONTROLADORAAPTExcursao_H_INCLUDED

#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
#include <iterator>

#include "../projeto1/dominios.hpp"
#include "../projeto1/entidades.hpp"
#include "../interfaces.hpp"

#define CLR_SCR system("cls");

class CntrApresentacaoExcursao:public IApresentacaoExcursao {
private:
    IServicoExcursao *cntr;
    Codigo ExcursaoGeradorCodigo();
    Codigo propostaGeradorCodigo();

    void mostrarExcursao(Excursao);
    void listarImoveis();
    void listarImoveis(Email);
    void listarExcursao();
    void cadastrarExcursao(Email);
    void editarExcursao(Email);
    void descadastrarExcursao(Email);

    void imoveisSessao(Email);
    void ExcursaoSessao(Email);

    void cadastrarProposta(Email);
    void descadastrarProposta(Email);
    void listarSessao(Email);
    void listarProposta(Email);
    void mostrarProposta(Sessao);
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