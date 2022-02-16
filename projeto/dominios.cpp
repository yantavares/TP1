#include <iostream>
#include <string.h>
#include <stdexcept>
#include <cctype>
#include <map>
#include <algorithm>
#include <cstring>

#include "dominios.hpp"
using namespace std;


// TODO ----------------------- Nome --------------------------


void Nome::validar(string nome){
    if(nome.size() < 5 || nome.size() > 20)
        throw invalid_argument("Nome precisa ter entre 5 e 20 caracteres");
    
    char x = '1';
    for(char letra : nome){
        if(isalpha(letra) == 0 && letra != '.' && letra != ' '){
            throw invalid_argument("Cada caractere e letra(A-Z ou a-z), ponto(.) ou espaco em branco.");
        }
        if(letra == '.' && isalpha(x) == 0){
            throw invalid_argument("Ponto(.) tem que ser precedido por letra.");
        }
        if(letra != ' ' && x == '.'){
            throw invalid_argument("Ponto(.) e ultimo caractere ou seguido por um espaco em branco.");
        }
        if(letra == ' ' && x == ' '){
            throw invalid_argument("Nao pode haver espacos em branco em sequencia.");
        }
        if((x == '1' || x == ' ') && isupper(letra) == 0){
            throw invalid_argument("Primeira letra tem que ser maiuscula.");
        }
        x = letra;
    }
}



void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}



// TODO ----------------------- Senha --------------------------


void Senha::validar(string senha){
    map<char, bool>verificaRepeticao;
    int quantidadeMaiusculo, quantidadeMinusculo, quantidadeNumero = 0;
    if(senha.size() != 6)
        throw invalid_argument("A senha precisa ter 6 digitos.");
    for(char caractere : senha){
        if(verificaRepeticao[caractere] == true){
            throw invalid_argument("Nao pode haver caracter repetido.");
        }else{
            verificaRepeticao[caractere] = true;
        }
        if(isalnum(caractere) == 0){
            throw invalid_argument("Cada caractere e letra(A-Z ou a-z) ou digito(0-9).");
        }
        if(isupper(caractere) != 0)
            quantidadeMaiusculo ++;
        if(islower(caractere) != 0)
            quantidadeMinusculo ++;
        if(isdigit(caractere) != 0)
            quantidadeNumero ++;
    }
    if(quantidadeMaiusculo == 0 || quantidadeMinusculo == 0 || quantidadeNumero ==0)
        throw invalid_argument("Tem que haver ao menos uma letra maiuscula, uma letra minuscula e um digito.");
}

void Senha::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// TODO ----------------------- Idioma --------------------------


string Idioma::idiomas[11] = {"Ingles","Chines","Mandarim","Hindi",
"Espanhol","Frances","Arabe","Bengali","Russo","Portugues","Indonesio"};

void Idioma::validar(string idioma){
if (find(begin(idiomas), end(idiomas), idioma) == end(idiomas))
    throw invalid_argument("Idioma invalido! Verifique os disponiveis.");
}

void Idioma::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// TODO ----------------------- Horario --------------------------

void Horario::validar(string horario){
    int valorHoras = stoi(horario.substr(0,2));
    int valorminutos = stoi(horario.substr(3,5));
    if(horario.size() != 5 || horario[2] != ':' || (valorHoras < 0 || valorHoras > 23 || (valorminutos < 0 || valorminutos > 59))){
        throw invalid_argument("Formato de horario invalido!");
    }
}
void Horario::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// TODO ----------------------- Codigo --------------------------

void Codigo::validar(string codigo){
    if(codigo.size() != 7){
        throw invalid_argument("O codigo tem que possuir 7 caracteres");
    }
    for(char caractere : codigo.substr(0,6)){
        if(isdigit(caractere) == 0){
            throw invalid_argument("Formato invalido do codigo");
        }
    }
    if(codigo.substr(0,6) == "000000"){
        throw invalid_argument("Nao existe codigo 000000");
    }
    if(codigo[6] != '1' && codigo[6] != '2' && codigo[6] != '3'){
        throw invalid_argument("Nao existe este digito verificador!");
    }
}
void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}


// TODO ----------------------- Descricao --------------------------

void Descricao::validar(string descricao){
    if(descricao.size() <= 0 || descricao.size() > 30){
        throw invalid_argument("Precisa ter de 0 a 30 caracteres a descricao");
    }
    char x = '1';
    for(char letra : descricao){
        if(letra == ' ' && x == ' '){
            throw invalid_argument("Nao pode haver espacos em branco em sequencia");
        }
        if(letra == '.' && x == '.'){
            throw invalid_argument("Nao pode haver pontos(.) em branco em sequencia");
        }
        x = letra;
    }
}
void Descricao::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// TODO ----------------------- Enderecos --------------------------


void Endereco::validar(string endereco){
    if(endereco.size() <= 0 || endereco.size() > 20){
        throw invalid_argument("Precisa ter de 0 a 20 caracteres a endereco");
    }
    char x = '1';
    for(char letra : endereco){
        if(letra == ' ' && x == ' '){
            throw invalid_argument("Nao pode haver espacos em branco em sequencia");
        }
        if(letra == '.' && x == '.'){
            throw invalid_argument("Nao pode haver pontos(.) em branco em sequencia");
        }
        x = letra;
    }
}
void Endereco::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// TODO ----------------------- Titulo --------------------------

void Titulo::validar(string titulo){
    if(titulo.size() < 5 || titulo.size() > 20){
        throw invalid_argument("Precisa ter de 5 a 20 caracteres a endereco");
    }
    char x = '1';
    for(char letra : titulo){
        if(letra == ' ' && x == ' '){
            throw invalid_argument("Nao pode haver espacos em branco em sequencia");
        }
        if(letra == '.' && x == '.'){
            throw invalid_argument("Nao pode haver pontos(.) em branco em sequencia");
        }
        if(isalpha(letra) == 0 && letra != ' ' && letra != '.'){
            throw invalid_argument("No Titulo so pode haver letras (A-Z) ou (a-z)");
        }
        x = letra;
    }    
}
void Titulo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

// TODO ------------------------------ Data ------------------------------

void Data::validar(string data){
    map<string,int> meses = {
        {"Jan", 31},{"Fev", 28},{"Mar", 31},{"Abr", 30},{"Mai",31},{"Jun",30},{"Jul",31},{"Ago",31},{"Set",30},{"Out",31},{"Nov",30},{"Dez",31}
    };

    if(data.size() != 10 && data[2] != '-' && data[6] != '-'){
        throw invalid_argument("Formato invalido de data!");
    }
    int ano = stoi(data.substr(7,11));
    string mes = data.substr(3,3);
    int dia = stoi(data.substr(0,2));

    if((ano < 2000 && ano > 9999) || dia < 1){
        throw invalid_argument("Formato invalido de data!");
    }
    if(meses.find(mes) == meses.end()) {
        throw invalid_argument("Formato invalido de data!");
    }
    if(ano % 400 == 0){//bissexto
        if(mes == "Fev" && dia > 29){
            throw invalid_argument("Formato invalido de data!");
        }else if(mes != "Fev" && dia > meses[mes]){
            throw invalid_argument("Formato invalido de data!");
        }
    }else{
        if((ano % 4 == 0) && (ano % 100 != 0)){//bissexto
           if(mes == "Fev" && dia > 29){
               throw invalid_argument("Formato invalido de data!");
           }else if(mes != "Fev" && dia > meses[mes]){
               throw invalid_argument("Formato invalido de data!");
           }
        }else{//nao é bissexto
            if(dia > meses[mes]){
                throw invalid_argument("Formato invalido de data!");
            }        
        }
    }
}
void Data::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
// TODO ----------------------- Email --------------------------

void Email::validar(string email){
    int arroba = 0;
    string temp = email;
    for (char letra: email){
        if (letra == '@'){
            arroba ++;
        }
    }
    if (arroba != 1){
        throw invalid_argument("Formato tem que ser parte-local@dominio");
    }
    string delimiter = "@";
    size_t pos = 0;
    string token;
    while ((pos = email.find(delimiter)) != string::npos){
        token = email.substr(0, pos);
        email.erase(0, pos + delimiter.length());
    }
    if (token.size() > 64){
        throw invalid_argument("Parte-local e composta por ate 64 caracteres");
    }
    char x = '1';
    for (char letra : token){
        if (letra == '.' && x == '.'){
            throw invalid_argument("Nao pode haver ponto (.) em sequencia");
        }
        x = letra;
    }
    if (token[0] == '.' || token[token.size() - 1] == '.'){
        throw invalid_argument("Ponto (.) nao pode ser primeiro ou ultimo caracter de parte-local");
    }
    if (email.size() > 253){
        throw invalid_argument("dominio e composto por ate 253 caracteres.");
    }
    for (char letra : email){
        if(isalpha(letra) && isdigit(letra) && letra=='-'){
                throw invalid_argument("Caractere de dominio nao pode ser ! # $ % & ' * + / = ? ^ _ ` { | } ~");
        }
    }
    x = '1';
    for (char letra : email){
        if (letra == '.' && x == '.'){
            throw invalid_argument("Nao pode haver ponto (.) em sequencia");
        }
        x = letra;
    }
    if (email[0] == '.' || email[email.size() - 1] == '.'){
        throw invalid_argument("Ponto (.) nao pode ser primeiro ou ultimo caracter de dominio");
    }
}

void Email::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
// TODO ----------------------- Duracao --------------------------
void Duracao::validar(int duracao){
    if (duracao != 30 && duracao != 60 && duracao != 90 && duracao != 120 && duracao != 180)
        throw invalid_argument("Duracao invalida");
}
void Duracao::setValor(int valor){
    validar(valor);
    this->valor = valor;

}

// TODO ----------------------- Nota --------------------------
void Nota::validar(int nota){
    if (nota != 0 && nota != 1 && nota != 2 && nota != 3 && nota != 4 && nota != 5)
        throw invalid_argument("Nota invalida");
}
void Nota::setValor(int valor){
    validar(valor);
    this->valor = valor;

}

// !!!!TODO ----------------------- Cidade --------------------------
string Cidade::cidades[16] = {"Hong Kong", "Bangkok", "Macau", "Singapura",
 "Londres", "Paris", "Dubai", "Delhi", "Istambul", "Kuala","Lumpur",
  "Nova Iorque", "Antalya", "Mumbai", "Shenzhen", "Phuket"};

void Cidade::validar(string cidade){
if (find(begin(cidades), end(cidades), cidade) == end(cidades))
    throw invalid_argument("Cidade invalida! Verifique as disponiveis.");
}

void Cidade::setValor(string valor){
    validar(valor);
    this->valor = valor;
}