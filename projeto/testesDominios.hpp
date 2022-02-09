#ifndef TESTESDOMINIOS_HPP_INCLUDED
#define TESTESDOMINIOS_HPP_INCLUDED

#include <iostream>
#include <string.h>

#include "dominios.hpp"

using namespace std;

class TUNome {
private:
    const string VALOR_VALIDO = "Mateus Gomes.";
    const string VALOR_INVALIDO = "Mateus.gomes";
    Nome *nome;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUEmail{
private:
    const string VALOR_VALIDO = "Mateus.gomes@arujo.com.br";
    const string VALOR_INVALIDO = "mateus@araujo@gmail.com";
    Email *email;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSenha{
private:
    const string VALOR_VALIDO = "AmC1b3";
    const string VALOR_INVALIDO = "AbAc12";
    Senha *senha;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUCodigo{
private:
    const string VALOR_VALIDO = "1234561";
    const string VALOR_INVALIDO = "1234568";
    Codigo *codigo;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUNota{
private:
    const int VALOR_VALIDO = 5;
    const int VALOR_INVALIDO = 6;
    Nota *nota;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUDescricao{
private:
    const string VALOR_VALIDO = "Essa descricao tem 30 caracte.";
    const string VALOR_INVALIDO = "Dois espacos em branco  aqui.";
    Descricao *descricao;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUTitulo{
private:
    const string VALOR_VALIDO = "Um passeio.Bem legal";
    const string VALOR_INVALIDO = "Tem um num3ro aqui";
    Titulo *titulo;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUCidade{
private:
    const string VALOR_VALIDO = "Hong Kong";
    const string VALOR_INVALIDO = "Kong Hong";
    Cidade *cidade;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUDuracao{
private:
    const int VALOR_VALIDO = 120;
    const int VALOR_INVALIDO = 121;
    Duracao *duracao;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUEndereco{
private:
    const string VALOR_VALIDO = "Gotham City";
    const string VALOR_INVALIDO = "Spring..Field";
    Endereco *endereco;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUData{
private:
    const string VALOR_VALIDO = "29-Fev-2000";
    const string VALOR_INVALIDO = "29-Fev-1999";
    Data *data;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUHorario{
private:
    const string VALOR_VALIDO = "23:59";
    const string VALOR_INVALIDO = "23:75";
    Horario *horario;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUIdioma{
private:
    const string VALOR_VALIDO = "Mandarim";
    const string VALOR_INVALIDO = "Ruço";
    Idioma *idioma;
    int estado;                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif