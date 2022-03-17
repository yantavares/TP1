#ifndef INTERFACES_H
#define INTERFACES_H

#include <list>

#include "/home/yan/tp1/git/projeto1/dominios.hpp"
#include "/home/yan/tp1/git/projeto1/entidades.hpp"

class ISAutenticacao;
class ISUsuario;
class ISExcursao;

class IAAutenticacao {
public:
    virtual bool autenticar(Email*) = 0;
    virtual void setCntrSAutenticacao(IAAutenticacao*) = 0;
    virtual ~IAAutenticacao(){}
};

class IAUsuario {
public:
    virtual void cadastrar() = 0;
    virtual bool executar(Email) = 0;
    virtual void setCntrSUsuario(IAUsuario*) = 0;
    virtual ~IAUsuario(){}
};

class IAExcursao {
public:
    virtual void executar() = 0;
    virtual void executar(Email) = 0;
    virtual void setCntrSExcursao(ISExcursao*) = 0;
    virtual ~IAExcursao(){}
};

class ISAutenticacao {
public:
    virtual bool autenticar(Email, Senha) = 0;
    virtual ~ISAutenticacao(){}
};

class ISUsuario {
public:
    virtual bool cadastrar(Usuario) = 0;
    virtual bool descadastrar(Email) = 0;
    virtual bool alterar(Usuario) = 0;
    virtual Usuario recuperar(Email) = 0;
    virtual ~ISUsuario(){}
};

class ISExcursao {
};








#endif