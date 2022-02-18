#ifndef TESTESDOMINIOS_HPP_INCLUDED
#define TESTESDOMINIOS_HPP_INCLUDED

#include <iostream>
#include <string.h>

#include "dominios.hpp"

using namespace std;

// Declaração de classe de teste de unidade do domínio Nome
// Classe feita por Yan Tavares 202014323
class TUNome {
private:

    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "Mateus Gomes.";
    const string VALOR_INVALIDO = "Mateus.gomes";

    // Referência ao objeto a ser testado
    Nome *nome;

    // Estado do teste
    int estado;

    // Declarações de métodos para o teste

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Email
// Classe feita por Yan Tavares 202014323
class TUEmail{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO = "Mateus.gomes@arujo.com.br";
    const string VALOR_INVALIDO = "mateus@araujo@gmail.com";

    // Referência ao objeto a ser testado
    Email *email;

    // Estado do teste
    int estado;

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

// Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Senha
// Classe feita por Yan Tavares 202014323
class TUSenha{
private:

    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "AmC1b3";
    const string VALOR_INVALIDO = "AbAc12";

    // Referência ao objeto a ser testado
    Senha *senha;

    // Estado do teste
    int estado;        

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Codigo
// Classe feita por Yan Tavares 202014323
class TUCodigo{
private:

    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "6234561";
    const string VALOR_INVALIDO = "1234568";

    // Referência ao objeto a ser testado
    Codigo *codigo;

    // Estado do teste
    int estado;        

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Nota
// Classe feita por Yan Tavares 202014323
class TUNota{
private:

    // Definições de constantes para evitar números mágicos.
   
    const int VALOR_VALIDO = 5;
    const int VALOR_INVALIDO = 6;

    // Referência ao objeto a ser testado
    Nota *nota;

    // Estado do teste
    int estado;        

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Descricao
// Classe feita por Yan Tavares 202014323
class TUDescricao{
private:

    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "Essa descricao tem 30 caracte.";
    const string VALOR_INVALIDO = "Dois espacos em branco  aqui.";

    // Referência ao objeto a ser testado
    Descricao *descricao;

    // Estado do teste
    int estado;       

    // Declarações de métodos para o teste
                          
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Titulo
// Classe feita por Yan Tavares 202014323
class TUTitulo{
private:
    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "Um passeio.Bem legal";
    const string VALOR_INVALIDO = "Tem um num3ro aqui";

    // Referência ao objeto a ser testado
    Titulo *titulo;

    // Estado do teste
    int estado;        

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Cidade
// Classe feita por Yan Tavares 202014323
class TUCidade{
private:
    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "Hong Kong";
    const string VALOR_INVALIDO = "Kong Hong";

    // Referência ao objeto a ser testado
    Cidade *cidade;

    // Estado do teste
    int estado;        

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Duracao
// Classe feita por Yan Tavares 202014323
class TUDuracao{
private:
    // Definições de constantes para evitar números mágicos.
   
    const int VALOR_VALIDO = 120;
    const int VALOR_INVALIDO = 121;

    // Referência ao objeto a ser testado
    Duracao *duracao;

    // Estado do teste
    int estado;       

    // Declarações de métodos para o teste
                          
    void setUp();
    void tearDown();// Metodo que executa o teste
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste d// Metodo que executa o testee unidade do domínio Endereco
// Classe feita por Yan Tavares 202014323
class TUEndereco{
private:
    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "Gotham City";
    const string VALOR_INVALIDO = "Spring..Field";

    // Referência ao objeto a ser testado
    Endereco *endereco;

    // Estado do teste
    int estado;       

    // Declarações de métodos para o teste
                          
    void setUp();// Metodo que executa o teste
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Data
// Classe feita por Yan Tavares 20// Metodo que executa o teste2014323
class TUData{
private:
    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "29-Fev-2000";
    const string VALOR_INVALIDO = "29-Fev-1999";

    // Referência ao objeto a ser testado
    Data *data;

    // Estado do teste
    int estado;       

    // Declarações de métodos para o teste
                          
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Horario
// Classe feita por Yan Tavares 202014323
class TUHorario{
private:
    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "23:59";
    const string VALOR_INVALIDO = "23:75";

    // Referência ao objeto a ser testado
    Horario *horario;

    // Estado do teste
    int estado;     

    // Declarações de métodos para o teste
                            
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

// Declaração de classe de teste de unidade do domínio Idioma
// Classe feita por Yan Tavares 202014323
class TUIdioma{
private:
    // Definições de constantes para evitar números mágicos.
   
    const string VALOR_VALIDO = "Mandarim";
    const string VALOR_INVALIDO = "Ruço";

    // Referência ao objeto a ser testado
    Idioma *idioma;

    // Estado do teste
    int estado;        

    // Declarações de métodos para o teste
                         
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para mostrar o resultado do teste
     
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    // Metodo que executa o teste
    int run();
};

#endif