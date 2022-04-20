#ifndef CONTROLADORAAPTCONTROLE_H_INCLUDED
#define CONTROLADORAAPTCONTROLE_H_INCLUDED

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


class CntrApresentacaoControle {
private:
    Email email;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoUsuario *cntrApresentacaoUsuario;
    IApresentacaoExcursao *cntrApresentacaoExcursao;
public:
    void executar();
    void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
    void setCntrApresentacaoUsuario(IApresentacaoUsuario*);
    void setCntrApresentacaoExcursao(IApresentacaoExcursao*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr) {
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoUsuario(IApresentacaoUsuario *cntr) {
    cntrApresentacaoUsuario = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoExcursao(IApresentacaoExcursao *cntr) {
    cntrApresentacaoExcursao = cntr;
}

#endif