#ifndef TESTESENTIDADES_HPP_INCLUDED
#define TESTESENTIDADES_HPP_INCLUDED

#include "entidades.hpp"

#include <iostream>
#include <string.h>

using namespace std;

// Teste de unidade da classe Usuario
// Classe feita por Yan Tavares 202014323

class TUUsuario {
private:

    // Valor valido de nome para o teste da entidade
    const string VALOR_VALIDO_NOME  = "Mateus Araujo";
    // Valor valido de email para o teste da entidade
    const string VALOR_VALIDO_EMAIL  = "mateus@gmail.com";
    // Valor valido de senha para o teste da entidade
    const string VALOR_VALIDO_SENHA  = "AbC123";

    // Referencia para o objeto a ser testado
    Usuario *usuario;

    // Estado do teste
    int estado;

    // Metodo para criar a entidade a ser testada
    void setUp();

    // Metodo para deletar a entidade criada
    void tearDown();

    // Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    // Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    // Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};
// Teste de unidade da classe Avaliacao
// Classe feita por Yan Tavares 202014323
class TUAvaliacao {
private:

    // Valor valido de codigo para o teste da entidade
    const string VALOR_VALIDO_CODIGO  = "1234513";
    // Valor valido de nota para o teste da entidade
    static const int VALOR_VALIDO_NOTA  = 1;
    // Valor valido de descricao para o teste da entidade
    const string VALOR_VALIDO_DESCRICAO  = "Descricao Exemplo.";

    // Referencia para o objeto a ser testado
    Avaliacao *avaliacao;

    // Estado do teste
    int estado;

    // Metodo para criar a entidade a ser testada
    void setUp();
    // Metodo para deletar a entidade criada
    void tearDown();
    // Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    // Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    // Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

class TUExcursao {
private:
    // Valor valido de titulo para o teste da entidade
    const string VALOR_VALIDO_TITULO  = "Mateus Araujo";
    // Valor valido de nota para o teste da entidade
    static const int VALOR_VALIDO_NOTA = 3;
    // Valor valido de cidade para o teste da entidade
    const string VALOR_VALIDO_CIDADE  = "Bangkok";
    // Valor valido de duracao para o teste da entidade
    static const int VALOR_VALIDO_DURACAO  = 30;
    // Valor valido de descricao para o teste da entidade
    const string VALOR_VALIDO_DESCRICAO  = "Descricao generica";
    // Valor valido de endereco para o teste da entidade
    const string VALOR_VALIDO_ENDERECO  = "Quadra QC1 Cj A BL 6";
    // Valor valido de codigo para o teste da entidade
    const string VALOR_VALIDO_CODIGO  = "1234522";

    // Referencia para o objeto a ser testado
    Excursao *excursao;

    // Estado do teste
    int estado;

    // Metodo para criar a entidade a ser testada
    void setUp();
    // Metodo para deletar a entidade criada
    void tearDown();
    // Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    // Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    // Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

class TUSessao {
private:
    // Valor valido de codigo para o teste da entidade
    const string VALOR_VALIDO_CODIGO  = "5432111";
    // Valor valido de data para o teste da entidade
    const string VALOR_VALIDO_DATA  = "12-Nov-2001";
    // Valor valido de horario para o teste da entidade
    const string VALOR_VALIDO_HORARIO  = "22:11";
    // Valor valido de idoma para o teste da entidade
    const string VALOR_VALIDO_IDIOMA  = "Mandarim";

    // Referencia para o objeto a ser testado
    Sessao *sessao;

    // Estado do teste
    int estado;

    // Metodo para criar a entidade a ser testada
    void setUp();
    // Metodo para deletar a entidade criada
    void tearDown();
    // Metodo que efetua teste dos casos validos
    void testarCenarioSucesso();
public:

    // Constante que mostra o resultado de sucesso do teste
    const static int SUCESSO =  0;
    // Constante que mostra o resultado de falha do teste
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

#endif