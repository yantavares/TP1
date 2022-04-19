#ifndef CONTROLADORAAPTUSUARIO_H_INCLUDED
#define CONTROLADORAAPTUSUARIO_H_INCLUDED

#include <iostream>
#include <string.h>
#include <vector>

#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"
#include "bancodedados.hpp"

using namespace std;


class CntrApresentacaoUsuario:public IApresentacaoUsuario{
private:
    IServicoUsuario *cntr;
    void consultarDadosUsuario(Email);
    void editarDadosUsuario(Email);
    bool excluirUsuario(Email);
public:
    void cadastrar();
    bool executar(Email);
    void setCntrServicoUsuario(IServicoUsuario*);
};

inline void CntrApresentacaoUsuario::setCntrServicoUsuario(IServicoUsuario *cntr){
    this->cntr = cntr;
}

#endif