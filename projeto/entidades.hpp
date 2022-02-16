#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

#include <stdexcept>
#include <iostream>
#include <string.h>

using namespace std;

/// @brief Criacao do Usuario:
///
/// Usuario contem entidades Nome, Email e Senha.

class Usuario{
private:
    Nome nome;
    Email email;
    Senha senha;

public:
    /// - Armazena o nome do Usuario caso seja valido
    ///
    /// - Caso o nome seja invalido eh lacanda execao
    ///
    /// - @param Nome nome
    ///
    /// - @throw invalid argument
    ///
    void setNome(const Nome &nome);
    ///
    /// - Retorna o nome 
    ///
    /// - @return nome
    ///
    Nome getNome() const;
    ///
    /// - Armazena o email do Usuario caso seja valido
    ///
    /// - Caso o nome seja invalido eh lancada execao
    ///
    /// - @param Email email
    ///
    /// - @throw invalid argument
    ///
    void setEmail(const Email &email);
    ///
    /// - Retorna o email
    ///
    /// - @return email
    ///
    Email getEmail() const;
    ///
    /// - Armazena a senha do Usuario caso seja valido
    ///
    /// - Caso a senha seja invalido eh lancada execao
    ///
    /// - @param Senha email
    ///
    /// - @throw invalid argument
    ///
    void setSenha(const Senha &senha);
    ///
    /// - Retorna a senha
    ///
    /// - @return senha
    ///
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


/// @brief Criacao da Avaliacao
/// 
/// Avaliacao contem codigo, nora e descricao
class Avaliacao{
private:
    Codigo codigo;
    Nota nota;
    Descricao descricao;
public:
    ///
    /// - Armazena o codigo do Avaliacao caso seja valido
    ///
    /// - Caso o nome seja invalido eh lancada execao
    ///
    /// - @param Codigo codigo
    ///
    /// - @throw invalid argument
    ///
    void setCodigo(const Codigo &codigo);
    ///
    /// - Retorna o codigo
    ///
    /// - @return codigo
    ///
    Codigo getCodigo() const;
    ///
    /// - Armazena a nota da Avaliacao caso seja valido
    ///
    /// - Caso o seja invalido eh lancada execao
    ///
    /// - @param Nota nota
    ///
    /// - @throw invalid argument
    ///
    void setNota(const Nota &nota);
    ///
    /// - Retorna a nota 
    ///
    /// - @return nota
    ///
    Nota getNota() const;
    ///
    /// - Armazena a descricao da avaliacao caso seja valido
    ///
    /// - Caso a descricao seja invalida eh lancada execao
    ///
    /// - @param Descricao descricao
    ///
    /// - @throw invalid argument
    ///
    void setDescricao(const Descricao &descricao);
    ///
    /// - Retorna a descriacao
    ///
    /// - @return descricao
    ///
    Descricao getDescricao() const;

};

inline void Avaliacao::setCodigo(const Codigo &codigo){
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


inline void Avaliacao::setDescricao(const Descricao &descricao){
    this -> descricao = descricao;
}
inline Descricao Avaliacao::getDescricao() const {
    return descricao;
}


/// @brief Criacao da Excursao
///
/// Excursao contem titulo, nota, cidade, duracao, descricao, endereco e codigo
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
    ///
    /// - Armazena o titulo da Excursao caso seja valido
    ///
    /// - Caso o titulo seja invalido eh lancada execao
    ///
    /// - @param Titulo titulo
    ///
    /// - @throw invalid argument
    ///
    void setTitulo(const Titulo &titulo);
    ///
    /// - Retorna o titulo
    ///
    /// - @return titulo
    ///
    Titulo getTitulo() const;
    ///
    /// - Armazena a nota da Excursao caso seja valido
    ///
    /// - Caso a nota seja invalida eh lancada execao
    ///
    /// - @param Nota nota
    ///
    /// - @throw invalid argument
    ///
    void setNota(const Nota &nota);
    ///
    /// - Retorna a nota
    ///
    /// - @return nota 
    ///
    Nota getNota() const;
    ///
    /// - Armazena a cidade da Excursao caso seja valido
    ///
    /// - Caso a cidade seja invalida eh lancada execao
    ///
    /// - @param Cidade cidade
    ///
    /// - @throw invalid argument
    ///
    void setCidade(const Cidade &cidade);
    ///
    /// - Retorna cidade
    ///
    /// - @return cidade
    ///
    Cidade getCidade() const;
    ///
    /// - Armazena a duracao da Excusao caso seja valido
    ///
    /// - Caso a duracao seja invalida eh lancada execao
    ///
    /// - @param Duracao duracao
    ///
    /// - @throw invalid argument
    ///
    void setDuracao(const Duracao &duracao);
    ///
    /// - Retorna duracao
    ///
    /// - @return duracao
    ///
    Duracao getDuracao() const;
    ///
    /// - Armazena a descricao da Excursao caso seja valido
    ///
    /// - Caso a descricao seja invalida eh lancada execao
    ///
    /// - @param Descricao descricao
    ///
    /// - @throw invalid argument
    ///
    void setDescricao(const Descricao &descricao);
    ///
    /// - Retorna descricao
    ///
    /// - @return descricao
    ///
    Descricao getDescricao() const;
    ///
    /// - Armazena o endereco da Excursao caso seja valido
    ///
    /// - Caso o endereco seja invalido eh lancada execao
    ///
    /// - @param Endereco endereco
    ///
    /// - @throw invalid argument
    ///
    void setEndereco(const Endereco &endereco);
    ///
    /// - Retorna o endereco
    ///
    /// - @return endereco
    ///
    Endereco getEndereco() const;
    ///
    /// - Armazena o codigo da Excursao caso seja valido
    ///
    /// - Caso o codigo seja invalido eh lancada execao
    ///
    /// - @param Codigo codigo
    ///
    /// - @throw invalid argument
    ///
    void setCodigo(const Codigo &codigo);
    ///
    /// - Retorna o codigo
    ///
    /// - @return codigo
    ///
    Codigo getCodigo() const;
};

inline void Excursao::setTitulo(const Titulo &titulo){
    this -> titulo = titulo;
}
inline Titulo Excursao::getTitulo() const {
    return titulo;
}



inline void Excursao::setCidade(const Cidade &cidade){
    this -> cidade = cidade;
}
inline Cidade Excursao::getCidade() const {
    return cidade;
}


inline void Excursao::setDuracao(const Duracao &duracao){
    this -> duracao = duracao;
}
inline Duracao Excursao::getDuracao() const {
    return duracao;
}


inline void Excursao::setEndereco(const Endereco &endereco){
    this -> endereco = endereco;
}
inline Endereco Excursao::getEndereco() const {
    return endereco;
}


inline void Excursao::setDescricao(const Descricao &descricao){
    this -> descricao = descricao;
}
inline Descricao Excursao::getDescricao() const {
    return descricao;
}


inline void Excursao::setCodigo(const Codigo &codigo){
    if(codigo.getValor()[6] != '2'){
        throw invalid_argument("Digito verificador invalido!");
    }
    this -> codigo = codigo;
}
inline Codigo Excursao::getCodigo() const {
    return codigo;
}

inline void Excursao::setNota(const Nota &nota){
    this -> nota = nota;
}
inline Nota Excursao::getNota() const {
    return nota;
}

/// @brief Criacao da Sessao
///
/// A Sessao contem codigo, data, horario e idioma

class Sessao{
private:
    static string idiomas[11];
    Codigo codigo;
    Data data;
    Horario horario;
    Idioma idioma;
 
public:
    ///
    /// - Armazena o codigo da Sessao caso seja valido
    ///
    /// - Caso o codigo seja invalido eh lancada execao
    ///
    /// - @param Codigo codigo
    ///
    /// - @throw invalid argument
    ///
    void setCodigo(const Codigo &codigo);
    ///
    /// - Retorna o codigo
    ///
    /// - @return codigo
    ///
    Codigo getCodigo() const;
    ///
    /// - Armazena a data da Sessao caso seja valido
    ///
    /// - Caso a data seja invalida eh lancada execao
    ///
    /// - @param Data data
    ///
    /// - @throw invalid argument
    ///
    void setData(const Data &data);
    ///
    /// - Retorna a data
    ///
    /// - @return data
    ///
    Data getData() const;
    ///
    /// - Armazena o horario do Sessao caso seja valido
    ///
    /// - Caso o horario seja invalido eh lancada execao
    ///
    /// - @param Horario horaio
    ///
    /// - @throw invalid argument
    ///
    void setHorario(const Horario &horario);
    ///
    /// - Retorna o horario 
    ///
    /// - @return horario
    ///
    Horario getHorario() const;
    ///
    /// - Armazena o idioma da Sessao caso seja valido
    ///
    /// - Caso o idioma seja invalido eh lancada execao
    ///
    /// - @param Idioma idioma
    ///
    /// - @throw invalid argument
    ///
    void setIdioma(const Idioma &idioma);
    ///
    /// - Retorna o idioma
    ///
    /// - @return idioma
    ///
    Idioma getIdioma() const; 

};

inline void Sessao::setCodigo(const Codigo &codigo){
    if(codigo.getValor()[6] != '1'){
        throw invalid_argument("Digito verificador invalido!");
    }
    this -> codigo = codigo;
}
inline Codigo Sessao::getCodigo() const {
    return codigo;
}

inline void Sessao::setData(const Data &data){
    this -> data = data;
}
inline Data Sessao::getData() const {
    return data;
}

inline void Sessao::setHorario(const Horario &horario){
    this -> horario = horario;
}
inline Horario Sessao::getHorario() const {
    return horario;
}

inline void Sessao::setIdioma(const Idioma &idioma){
    this -> idioma = idioma;
}
inline Idioma Sessao::getIdioma() const {
    return idioma;
}


#endif