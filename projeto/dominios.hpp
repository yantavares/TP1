#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;


// TODO --------------- Entidade: Usuario ----------------
class Nome{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};

inline string Nome::getValor() const{
    return valor;
}

class Email{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Email::getValor() const{
    return valor;
}

class Senha{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Senha::getValor() const{
    return valor;
}

// TODO --------------- Entidade: Avaliacao/Excursao/Sessao---------
class Codigo{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Codigo::getValor() const{
    return valor;
}

// TODO --------------- Entidade: Avaliacao/Excursao ----------------
class Nota{
    private:
        int DEFAULT_INT = 0;
        int valor;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;

};
inline int Nota::getValor() const{
    return valor;
}

class Descricao{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Descricao::getValor() const{
    return valor;
}

// TODO -------------- Entidade: Excursao ----------------------

class Titulo{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Titulo::getValor() const{
    return valor;
}

class Cidade{
    private:
        static string cidades[16];
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Cidade::getValor() const{
    return valor;
}

class Duracao{
    private:
        int DEFAULT_INT = 0;
        int valor;
        void validar(int valor);
    public:
        void setValor(int valor);
        int getValor() const;

};
inline int Duracao::getValor() const{
    return valor;
}

class Endereco{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Endereco::getValor() const{
    return valor;
}

// TODO --------------- Entidade: Sessao -----------------------

class Data{
    private:
        string DEFAULT_STR = "";
        static string meses[12];
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Data::getValor() const{
    return valor;
}

class Horario{
    private:
        string DEFAULT_STR = "";
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;

};
inline string Horario::getValor() const{
    return valor;
}

class Idioma{
    private:
        string DEFAULT_STR = "";
        static string idiomas[11];
        string valor;
        void validar(string valor);
    public:
        void setValor(string valor);
        string getValor() const;
};
inline string Idioma::getValor() const{
    return valor;
}

#endif