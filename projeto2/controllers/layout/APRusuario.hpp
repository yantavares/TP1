#ifndef CONTROLADORAAPTUSUARIO_H_INCLUDED
#define CONTROLADORAAPTUSUARIO_H_INCLUDED

#include <iostream>
#include <string.h>
#include <vector>

#include "../../../projeto1/dominios.hpp"
#include "../../../projeto1/entidades.hpp"
#include "../../interfaces.hpp"
#include "../../bancodedados.hpp"

using namespace std;

#define CLR_SCR system("cls");

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