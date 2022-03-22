#ifndef CONTROLADORAAPTAUTENTICACAO_H_INCLUDED
#define CONTROLADORAAPTAUTENTICACAO_H_INCLUDED

#include <iostream>
#include <string.h>

#include "/home/yan/tp1/git/projeto1/dominios.hpp"
#include "/home/yan/tp1/git/projeto1/entidades.hpp"
#include "/home/yan/tp1/git/projeto2/interfaces.hpp"

#define CLR_SCR system("cls");
// 190125586
class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
private:
    IServicoAutenticacao *cntr;
public:
    bool autenticar(Email*);
    void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

#endif // CONTROLADORAAPTAUTENTICACAO_H_INCLUDED