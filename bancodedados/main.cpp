#include <iostream>
#include <string>
#include "dominios.hpp"
#include "entidades.hpp"
#include "acessoDB.hpp"
#include "sqlite3.h"
using namespace std;

int main(){
    ComandoSQL db;
    
    db.executar();

    return 0;
}