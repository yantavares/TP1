#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

#include <stdexcept>
#include <iostream>
#include <string.h>

using namespace std;

// TODO ---------------- USUARIO --------------------------

class Usuario{
private:
    Nome nome;
    Email email;
    Senha senha;

public:
    void setNome(const Nome&);
    Nome getNome() const;

    void setEmail(const Email&);
    Email getEmail() const;

    void setSenha(const Senha&);
    Senha getSenha() const;

};

inline void Usuario::setNome(const Nome& nome){
    this -> nome = nome;
}
inline Nome Usuario::getNome() const {
    return nome;
}

inline void Usuario::setEmail(const Email& email){
    this -> email = email;
}
inline Email Usuario::getEmail() const {
    return email;
}
inline void Usuario::setSenha(const Senha& senha){
    this -> senha = senha;
}
inline Senha Usuario::getSenha() const {
    return senha;
}


// TODO ---------------- AVALIACAO --------------------------

class Avaliacao{
private:
    Codigo codigo;
    Nota nota;
    Descricao descricao;
public:

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setNota(const Nota&);
    Nota getNota() const;

    void setDescricao(const Descricao&);
    Descricao getDescricao() const;

};

inline void Avaliacao::setCodigo(const Codigo& codigo){
    if(codigo.getValor()[6] != '3'){
        throw invalid_argument("Digito verificador invalido!");
    }
    this -> codigo = codigo;
}
inline Codigo Avaliacao::getCodigo() const {
    return codigo;
}

inline void Avaliacao::setNota(const Nota& nota){
    this ->nota =nota;
}

inline Nota Avaliacao::getNota() const {
    return nota;
}


inline void Avaliacao::setDescricao(const Descricao& descricao){
    this -> descricao = descricao;
}
inline Descricao Avaliacao::getDescricao() const {
    return descricao;
}


// TODO ---------------- EXCURSAO --------------------------

class Excursao{
private:
    Titulo titulo;
    Nota nota;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;   
    Codigo codigo;
public:

    void setTitulo(const Titulo&);
    Titulo getTitulo() const;

    void setNota(const Nota&);
    Nota getNota() const;

    void setCidade(const Cidade&);
    Cidade getCidade() const;

    void setDuracao(const Duracao&);
    Duracao getDuracao() const;

    void setDescricao(const Descricao&);
    Descricao getDescricao() const;

    void setEndereco(const Endereco&);
    Endereco getEndereco() const;

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
};

inline void Excursao::setTitulo(const Titulo& titulo){
    this -> titulo = titulo;
}
inline Titulo Excursao::getTitulo() const {
    return titulo;
}



inline void Excursao::setCidade(const Cidade& cidade){
    this -> cidade = cidade;
}
inline Cidade Excursao::getCidade() const {
    return cidade;
}


inline void Excursao::setDuracao(const Duracao& duracao){
    this -> duracao = duracao;
}
inline Duracao Excursao::getDuracao() const {
    return duracao;
}


inline void Excursao::setEndereco(const Endereco& endereco){
    this -> endereco = endereco;
}
inline Endereco Excursao::getEndereco() const {
    return endereco;
}


inline void Excursao::setDescricao(const Descricao& descricao){
    this -> descricao = descricao;
}
inline Descricao Excursao::getDescricao() const {
    return descricao;
}


inline void Excursao::setCodigo(const Codigo& codigo){
    if(codigo.getValor()[6] != '2'){
        throw invalid_argument("Digito verificador invalido!");
    }
    this -> codigo = codigo;
}
inline Codigo Excursao::getCodigo() const {
    return codigo;
}

inline void Excursao::setNota(const Nota& nota){
    this -> nota = nota;
}
inline Nota Excursao::getNota() const {
    return nota;
}

// TODO ---------------- SESSAO --------------------------


class Sessao{
private:
    static string idiomas[11];
    
    Codigo codigo;
    Data data;
    Horario horario;
    Idioma idioma;
 
public:

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setData(const Data&);
    Data getData() const;

    void setHorario(const Horario&);
    Horario getHorario() const;

    void setIdioma(const Idioma&);
    Idioma getIdioma() const; 

};

inline void Sessao::setCodigo(const Codigo& codigo){
    if(codigo.getValor()[6] != '1'){
        throw invalid_argument("Digito verificador invalido!");
    }
    this -> codigo = codigo;
}
inline Codigo Sessao::getCodigo() const {
    return codigo;
}

inline void Sessao::setData(const Data& data){
    this -> data = data;
}
inline Data Sessao::getData() const {
    return data;
}

inline void Sessao::setHorario(const Horario& horario){
    this -> horario = horario;
}
inline Horario Sessao::getHorario() const {
    return horario;
}

inline void Sessao::setIdioma(const Idioma& idioma){
    this -> idioma = idioma;
}
inline Idioma Sessao::getIdioma() const {
    return idioma;
}


#endif