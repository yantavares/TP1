#include "APRautenticacao.hpp"

using namespace std;

bool CntrApresentacaoAutenticacao::autenticar(Email *email) {
    char texto1[]="Digite o email: ";
    char texto2[]="Digite a senha: ";

    string campo1, campo2;

    Senha senha;

    while(true) {
        CLR_SCR;

        cout << texto1;
        cin.ignore();
        getline(cin, campo1);
        cout << texto2;
        getline(cin, campo2);

        try {
            email->setValor(campo1);
            senha.setValor(campo2);
            break;
        } catch (invalid_argument &exp) {
            CLR_SCR;
            return false;
        }
    }
    return (cntr->autenticar(*email, senha));
}