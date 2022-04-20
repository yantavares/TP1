#ifndef BANCODEDADOS_HPP_INCLUDED
#define BANCODEDADOS_HPP_INCLUDED

#include <iostream>
#include <algorithm>
#include <string.h>
#include <random>
#include <vector>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

class BD{
    
public:
    Usuario acessar(Email);

    static vector<string> emails;
    static vector<Usuario> usuarios;

    // static vector<Excursao> excursoes;
    // static vector<Sessao> sessoes;

    int acharIndice(string);
    bool removerUsuario(Email);
    bool cadastrarUsuario(Usuario);
    bool alterarUsuario(Usuario);
    bool autenticar(Email, Senha);

    // bool cadastrarExcursao(Excursao excursao);
    // Codigo gerarCodigo();
    // Excursao pesquisarExcursao(Codigo codigo);
    // bool deletarExcursao(Codigo codigo);
    // vector<Excursao> recuperarExcursoes();

    // bool cadastrarSessao(Sessao sessao);
    // Sessao pesquisarSessao(Codigo codigo);
    // bool deletarSessao(Codigo codigo);
    // vector<Sessao> recuperarSessoes();

};

#endif