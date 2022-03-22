#ifndef CONTROLADORAAPTUSUARIO_H_INCLUDED
#define CONTROLADORAAPTUSUARIO_H_INCLUDED

#include <iostream>
#include <string.h>

#include "/home/yan/tp1/git/projeto1/dominios.hpp"
#include "/home/yan/tp1/git/projeto1/entidades.hpp"
#include "/home/yan/tp1/git/projeto2/interfaces.hpp"

#define CLR_SCR system("cls");

class CntrApresentacaoUsuario:public IApresentacaoUsuario{
private:
    IServicoUsuario *cntrServicoUsuario;
    void consultarDadosUsuario(Email);
    void editarDadosUsuario(Email);
    bool excluirUsuario(Email);
public:
    void cadastrar();
    bool executar(Email);
    void setCntrServicoUsuario(IServicoUsuario*);
};

inline void CntrApresentacaoUsuario::setCntrServicoUsuario(IServicoUsuario *cntr){
    cntrServicoUsuario = cntr;
}

#endif