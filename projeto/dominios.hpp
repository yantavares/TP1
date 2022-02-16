#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;


///
/// @brief Padrao para representacao de nome
///
/// Regras de formato:
///
/// - 5 a 20 caracteres;
/// - Caracter pode ser letra, ponto ou espaço em branco;
/// - Ponto eh precedido por letra;
/// - Ponto eh ultimo caracter ou seguido por espaço;
/// - Nao ha espaços em sequencia;
/// - Primeira letra do nome eh maiuscula.
///

// Classe Nome feita por Yan Tavares 202014323


class Nome{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena o nome informado caso seja valido
        ///
        /// Lança exceção caso o nome nao esteja de acordo com as regras de formato
        ///
        /// @param valor nome
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna o nome armazenado
        ///
        /// @return nome
        ///
        string getValor() const;

};

inline string Nome::getValor() const{
    return valor;
}


///
/// @brief Padrao para representacao de email
///
/// Regras de formato:
///
/// - Formato 'string@dominio', onde string possui ate 64 caracteres e dominio ate 253 caracteres.
/// - Nao ha ponto como primeiro ou ultimo caracter ou em sequencia.
///
// Classe Email feita por Yan Tavares 202014323

class Email{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena o email informado caso seja valido
        ///
        /// Lança exceção caso o email nao esteja de acordo com as regras de formato
        ///
        /// @param valor email
        ///
        /// @throw invalid_argument
        ///

        void setValor(string valor);

        ///
        /// Retorna o email armazenado
        ///
        /// @return email
        ///
        string getValor() const;

};
inline string Email::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de senha
///
/// Regras de formato:
///
/// - Formato XXXXXX onde X eh letra, ponto ou espaço em branco;
/// - Nao existe caracter repetido;
/// - Eh necessario pelo menos uma letra minuscula, uma letra maiuscula e um digito.
///
// Classe Senha feita por Yan Tavares 202014323
class Senha{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena a senha informada caso seja valida
        ///
        /// Lança exceção caso a senha nao esteja de acordo com as regras de formato
        ///
        /// @param valor senha
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna a senha armazenada
        ///
        /// @return senha
        ///
        string getValor() const;

};
inline string Senha::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de codigo
///
/// Regras de formato:
///
/// - Formato DDDDDDX onde D eh um digito e X eh digito verificador seguindo o Luhn algorithm;
///

// Classe Codigo feita por Yan Tavares 202014323

class Codigo{
    private:
        string valor;
        void validar(string valor);
    public:
        ///
        /// Armazena o codigo informado caso seja valido
        ///
        /// Lança exceção caso o codigo nao esteja de acordo com as regras de formato
        ///
        /// @param valor codigo
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);
        ///
        /// Retorna o codigo armazenado
        ///
        /// @return codigo
        ///
        string getValor() const;

};
inline string Codigo::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de nome
///
/// Regras de formato:
///
/// - Numero de 0 a 5.
///

// Classe Nota feita por Yan Tavares 202014323

class Nota{
    private:
        int valor;
        void validar(int);
    public:
        ///
        /// Armazena a nota informada caso seja valida.
        ///
        /// Lança exceção caso a nota nao esteja de acordo com as regras de formato
        ///
        /// @param valor nota
        ///
        /// @throw invalid_argument
        ///
        void setValor(int);

        ///
        /// Retorna a nota armazenada
        ///
        /// @return nota
        ///
        int getValor() const;

};
inline int Nota::getValor() const{
    return valor;
}
///
/// @brief Padrao para representacao de descricao
///
/// Regras de formato:
///
/// - 0 a 30 caracteres sem espaços ou pontos em sequencia.
///

// Classe Descricao feita por Yan Tavares 202014323
class Descricao{
    private:
        string valor;
        void validar(string valor);
    public:

        ///
        /// Armazena a descricao informada caso seja valida
        ///
        /// Lança exceção caso a descricao nao esteja de acordo com as regras de formato
        ///
        /// @param valor descricao
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna a descricao armazenada
        ///
        /// @return descricao
        ///
        string getValor() const;

};
inline string Descricao::getValor() const{
    return valor;
}


///
/// @brief Padrao para representacao de titulo
///
/// Regras de formato:
///
/// - 5 a 20 caracteres sem espaços ou pontos em sequencia.
///

// Classe Titulo feita por Yan Tavares 202014323
class Titulo{
    private:
        string valor;
        void validar(string valor);
    public:
        ///
        /// Armazena o titulo informado caso seja valido.
        ///
        /// Lança exceção caso o titulo nao esteja de acordo com as regras de formato
        ///
        /// @param valor titulo
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna o titulo armazenado.
        ///
        /// @return titulo
        ///
        string getValor() const;

};
inline string Titulo::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de cidade
///
/// Regras de formato:
///
/// - Cidades disponiveis: Hong   Kong,   Bangkok,   Macau,   Singapura,   Londres,   Paris,  Dubai,   Delhi,   Istambul,  Kuala, Lumpur, Nova Iorque, Antalya, Mumbai, Shenzhen e Phuket.

// Classe Cidade feita por Yan Tavares 202014323
class Cidade{
    private:
        static string cidades[16]; // Lista de cidades validas
        string valor;
        void validar(string valor);
    public:
        ///
        /// Armazena a cidade informada caso seja valida.
        ///
        /// Lança exceção caso a cidade nao esteja de acordo com as regras de formato
        ///
        /// @param valor cidade
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna a cidade armazenada.
        ///
        /// @return cidade
        ///
        string getValor() const;

};
inline string Cidade::getValor() const{
    return valor;
}
///
/// @brief Padrao para representacao de duracao
///
/// Regras de formato:
///
/// - Duracoes disponiveis: 30, 60, 90, 120 ou 180 minutos.

// Classe Duracao feita por Yan Tavares 202014323
class Duracao{
    private:
        int valor;
        void validar(int valor);
    public:
        ///
        /// Armazena a duracao informada caso seja valida.
        ///
        /// Lança exceção caso a duracao nao esteja de acordo com as regras de formato
        ///
        /// @param valor duracao
        ///
        /// @throw invalid_argument
        ///
        void setValor(int valor);
        ///
        /// Retorna a duracao armazenada.
        ///
        /// @return duracao
        ///
        int getValor() const;

};
inline int Duracao::getValor() const{
    return valor;
}
///
/// @brief Padrao para representacao de endereco
///
/// Regras de formato:
///
/// - 0 a 20 caracteres seme spaços ou pontos em sequencia.

// Classe Endereco feita por Yan Tavares 202014323
class Endereco{
    private:
        string valor;
        void validar(string valor);

    public:
        ///
        /// Armazena o endereco informado caso seja valido.
        ///
        /// Lança exceção caso o endereco nao esteja de acordo com as regras de formato
        ///
        /// @param valor endereco
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna o endereco armazenado.
        ///
        /// @return endereco
        ///
        string getValor() const;

};
inline string Endereco::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de data
///
/// Regras de formato:
///
/// - Formato DD-MES-AAAA;
/// - DD eh numero de 1 a 31;
/// - Mes sao as tres prmeiras letras de cada mes do ano escritas por extenso;
/// - AAAA eh numero de 2000 a 9999;
/// - Anos bissextos sao considerados.

// Classe Data feita por Yan Tavares 202014323

class Data{
    private:
        static string meses[12]; // vetor contendo meses validos
        string valor;
        void validar(string valor);
    public:
        ///
        /// Armazena a data informada caso seja valida.
        ///
        /// Lança exceção caso a data nao esteja de acordo com as regras de formato
        ///
        /// @param valor data
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna a data armazenada.
        ///
        /// @return data
        ///
        string getValor() const;

};
inline string Data::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de horario
///
/// Regras de formato:
///
/// - Formato HH : MM;
/// - HH eh numero de 00 a 23;
/// - MM eh numero de 00 a 59;


// Classe Horario feita por Yan Tavares 202014323

class Horario{
    private:
        string valor;
        void validar(string valor);
    public:
        ///
        /// Armazena o horario informada caso seja valido.
        ///
        /// Lança exceção caso o horario nao esteja de acordo com as regras de formato
        ///
        /// @param valor horario
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);
        ///
        /// Retorna o horario armazenada.
        ///
        /// @return horario
        ///
        string getValor() const;

};
inline string Horario::getValor() const{
    return valor;
}

///
/// @brief Padrao para representacao de idioma
///
/// Regras de formato:
///
/// - Idiomas disponiveis: Inglês,   Chinês   Mandarim,   Hindi,   Espanhol,   Francês,   Árabe,   Bengali,   Russo,   Português, Indonésio;
/// - Desconsiderar acentuaçao dos idiomas.


// Classe Idioma feita por Yan Tavares 202014323
class Idioma{
    private:
        static string idiomas[11];
        string valor;
        void validar(string valor);
    public:
        ///
        /// Armazena o idioma informada caso seja valido.
        ///
        /// Lança exceção caso o idioma nao esteja de acordo com as regras de formato
        ///
        /// @param valor idioma
        ///
        /// @throw invalid_argument
        ///
        void setValor(string valor);

        ///
        /// Retorna o idioma armazenada.
        ///
        /// @return idioma
        ///
        string getValor() const;
};
inline string Idioma::getValor() const{
    return valor;
}

#endif