#ifndef TESTESENTIDADES_HPP_INCLUDED
#define TESTESENTIDADES_HPP_INCLUDED

#include "entidades.hpp"

#include <iostream>
#include <string.h>

using namespace std;

class TUUsuario {
private:
    const string VALOR_VALIDO_NOME  = "Mateus Araujo";
    const string VALOR_VALIDO_EMAIL  = "mateus@gmail.com";
    const string VALOR_VALIDO_SENHA  = "AbC123";
    Usuario *usuario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUAvaliacao {
private:
    const string VALOR_VALIDO_CODIGO  = "1234513";
    static const int VALOR_VALIDO_NOTA  = 1;
    const string VALOR_VALIDO_DESCRICAO  = "Descricao Exemplo.";
    Avaliacao *avaliacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUExcursao {
private:
    const string VALOR_VALIDO_TITULO  = "Mateus Araujo";
    static const int VALOR_VALIDO_NOTA = 3;
    const string VALOR_VALIDO_CIDADE  = "Bangkok";
    static const int VALOR_VALIDO_DURACAO  = 30;
    const string VALOR_VALIDO_DESCRICAO  = "Descricao generica";
    const string VALOR_VALIDO_ENDERECO  = "Quadra QC1 Cj A BL 6";
    const string VALOR_VALIDO_CODIGO  = "1234522";
    Excursao *excursao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSessao {
private:
    const string VALOR_VALIDO_CODIGO  = "5432111";
    const string VALOR_VALIDO_DATA  = "12-Nov-2001";
    const string VALOR_VALIDO_HORARIO  = "22:11";
    const string VALOR_VALIDO_IDIOMA  = "Mandarim";
    Sessao *sessao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif