#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include <list>
#include <vector>

#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

class IServicoAutenticacao;
class IServicoUsuario;
class IServicoExcursao;

class IApresentacaoAutenticacao {
public:
    virtual bool autenticar(Email*) = 0;
    virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
};

class IApresentacaoUsuario {
public:
    virtual void cadastrar() = 0;
    virtual bool executar(Email) = 0;
    virtual void setCntrServicoUsuario(IServicoUsuario*) = 0;
};

class IApresentacaoExcursao {
public:
    virtual void executar();
    virtual void executar(Email);
};

class IServicoAutenticacao {
public:
    virtual bool autenticar(Email, Senha) = 0;
};

class IServicoUsuario {
public:
    virtual bool cadastrar(Usuario) = 0;
    virtual bool descadastrar(Email) = 0;
    virtual bool alterar(Usuario) = 0;
    virtual Usuario recuperar(Email) = 0;
};

class IServicoExcursao {
public:
    virtual bool cadastrarExcursao(Excursao, Email) = 0;
    virtual bool alterar(Excursao) = 0;
    virtual Excursao recuperarExcursao(Codigo) = 0;
    virtual vector<Excursao> recuperarExcursoes() = 0;
    virtual bool deletarExcursao(Excursao) = 0;

    virtual bool deletarSessao(Codigo) = 0;
    virtual bool cadastrarSessao(Sessao, Email, Codigo) = 0;
    virtual vector<Sessao> recuperarSessoes() = 0;
    virtual vector<Sessao> recuperarSessoes(Codigo) = 0;
    virtual ~IServicoExcursao(){}
};

#endif