#include <string.h>
#include <stdexcept>
#include <iostream>
#include <vector>

#include "dominios.hpp"
#include "entidades.hpp"
#include "bancodedados.hpp"
#include "interfaces.hpp"

#include "APRcontrole.hpp"
#include "APRautenticacao.hpp"
#include "APRusuario.hpp"

#include "SERautenticacao.hpp"
#include "SERusuario.hpp"

using namespace std;

int main() {
    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoUsuario *cntrApresentacaoUsuario;
    //IApresentacaoImovel *cntrApresentacaoImovel;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoUsuario = new CntrApresentacaoUsuario();
    //cntrApresentacaoImovel = new CntrApresentacaoImovel();

    IServicoAutenticacao *cntrServicoAutenticacao;
    IServicoUsuario *cntrServicoUsuario;
    //IServicoImovel *cntrServicoImovel;

    cntrServicoAutenticacao = new CntrServicoAutenticacao();
    cntrServicoUsuario = new CntrServicoUsuario();
    //cntrServicoImovel = new CntrServicoImovel();

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoUsuario(cntrApresentacaoUsuario);
    //cntrApresentacaoControle->setCntrApresentacaoImovel(cntrApresentacaoImovel);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);
    cntrApresentacaoUsuario->setCntrServicoUsuario(cntrServicoUsuario);
    //cntrApresentacaoImovel->setCntrServicoImovel(cntrServicoImovel);

    cntrApresentacaoControle->executar();

    return 0;
}