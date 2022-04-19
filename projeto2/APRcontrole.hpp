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

#define CLR_SCR system("cls");

class CntrApresentacaoControle {
private:
    Email email;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoUsuario *cntrApresentacaoUsuario;
    //IApresentacaoImovel *cntrApresentacaoImovel;
public:
    void executar();
    void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
    void setCntrApresentacaoUsuario(IApresentacaoUsuario*);
    //void setCntrApresentacaoImovel(IApresentacaoImovel*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr) {
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoUsuario(IApresentacaoUsuario *cntr) {
    cntrApresentacaoUsuario = cntr;
}

//inline void CntrApresentacaoControle::setCntrApresentacaoImovel(IApresentacaoImovel *cntr) {
    //cntrApresentacaoImovel = cntr;
//}

#endif // CONTROLADORAAPTCONTROLE_H_INCLUDED