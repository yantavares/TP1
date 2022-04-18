#include <string.h>
#include <stdexcept>
#include <iostream>
#include <cstdlib>

#include "../projeto1/dominios.hpp"
#include "../projeto1/entidades.hpp"
#include "bancodedados.hpp"
#include "interfaces.hpp"

#include "./controllers/layout/APRcontrole.hpp"
#include "./controllers/layout/APRautenticacao.hpp"
#include "./controllers/layout/APRusuario.hpp"
//#include "controllers/layout/APRimovel.hpp"

#include "./controllers/service/SERautenticacao.hpp"
#include "./controllers/service/SERusuario.hpp"
//#include "controllers/service/SERimovel.hpp"

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