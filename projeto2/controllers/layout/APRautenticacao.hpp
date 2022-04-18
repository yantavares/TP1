#ifndef CONTROLADORAAPTAUTENTICACAO_H_INCLUDED
#define CONTROLADORAAPTAUTENTICACAO_H_INCLUDED

#include <iostream>
#include <string.h>
#include <vector>

#include "../../../projeto1/dominios.hpp"
#include "../../../projeto1/entidades.hpp"
#include "../../interfaces.hpp"
#include "../../bancodedados.hpp"

using namespace std;

#define CLR_SCR system("cls");

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

#endif