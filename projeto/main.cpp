#include <iostream>

#include "dominios.hpp"
#include "entidades.hpp"
#include "testesDominios.hpp"
#include "testesEntidades.hpp"

using namespace std;

int main(){


//TODO --------------- Dominios -------------------------
    TUCidade testeCidade;
    TUCodigo testeCodigo;
    TUData testeData;
    TUDescricao testeDescricao;
    TUDuracao testeDuracao;
    TUEmail testeEmail;
    TUEndereco testeEndereco;
    TUHorario testeHorario;
    TUIdioma testeIdioma;
    TUNome testeNome;
    TUNota testeNota;
    TUSenha testeSenha;
    TUTitulo testeTitulo;

//TODO --------------- Entidades -------------------------

    TUAvaliacao testeAvaliacao;
    TUExcursao testeExcursao;
    TUSessao testeSessao;
    TUUsuario testeUsuario;

//TODO -------------------- Testes dominios --------------

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - Cidade" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - Cidade" << endl;
                                break;
    }

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - Codigo" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - Codigo" << endl;
                                break;
    }

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - Data" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - Data" << endl;
                                break;
    }

    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - Descricao" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - Descricao" << endl;
                                break;
    }

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - Duracao" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - Duracao" << endl;
                                break;
    }

    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - Email" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - Email" << endl;
                                break;
    }

    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - Endereco" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - Endereco" << endl;
                                break;
    }

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - Horario" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - Horario" << endl;
                                break;
    }

    switch(testeIdioma.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - Idioma" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "FALHA   - Idioma" << endl;
                                break;
    }

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - Nome" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - Nome" << endl;
                                break;
    }

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - Nota" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - Nota" << endl;
                                break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - Senha" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - Senha" << endl;
                                break;
    }

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - Titulo" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA   - Titulo" << endl;
                                break;
    }


//TODO -------------------- Testes entidades --------------

    switch(testeAvaliacao.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - Avaliacao" << endl;
                                break;
        case TUAvaliacao::FALHA  : cout << "FALHA   - Avaliacao" << endl;
                                break;
    }

    switch(testeExcursao.run()){
        case TUExcursao::SUCESSO: cout << "SUCESSO - Excursao" << endl;
                                break;
        case TUExcursao::FALHA  : cout << "FALHA   - Excursao" << endl;
                                break;
    }

    switch(testeSessao.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - Sessao" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA   - Sessao" << endl;
                                break;
    }

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - Usuario" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - Usuario" << endl;
                                break;
    }



    return 0;
}