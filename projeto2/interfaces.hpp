#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include <list>

#include "../projeto1/dominios.hpp"
#include "../projeto1/entidades.hpp"

class IServicoAutenticacao;
class IServicoUsuario;
class IServicoExcursao;

class IApresentacaoAutenticacao {
public:
    virtual bool autenticar(Email*) = 0;
    virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
    virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoUsuario {
public:
    virtual void cadastrar() = 0;
    virtual bool executar(Email) = 0;
    virtual void setCntrServicoUsuario(IServicoUsuario*) = 0;
    virtual ~IApresentacaoUsuario(){}
};

class IApresentacaoExcursao {

};

class IServicoAutenticacao {
public:
    virtual bool autenticar(Email, Senha) = 0;
    virtual ~IServicoAutenticacao(){}
};

class IServicoUsuario {
public:
    virtual bool cadastrar(Usuario) = 0;
    virtual bool descadastrar(Email) = 0;
    virtual bool alterar(Usuario) = 0;
    virtual Usuario recuperar(Email) = 0;
    virtual ~IServicoUsuario(){}
};

#endif