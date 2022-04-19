#include "SERexcursao.hpp"
#include "bancodedados.hpp"

list<Excursao> CntrServicoExcursao::recuperarExcursoes() {
    ComandoPesquisarImoveis pesquisarImoveis;
    pesquisarImoveis.executar();
    return pesquisarImoveis.getResultado();
}

list<Excursao> CntrServicoExcursao::recuperarExcursoes(Email email) {
    ComandoPesquisarImoveis pesquisarImoveis(email);
    pesquisarImoveis.executar();
    return pesquisarImoveis.getResultado();
}

Excursao CntrServicoExcursao::recuperarExcursao(Codigo codigo) {
    ComandoPesquisarImovel pesquisarImovel(codigo);
    pesquisarImovel.executar();
    return pesquisarImovel.getResultado();
}

bool CntrServicoExcursao::cadastrarExcursao(Excursao excursao, Email email){
    ComandoCadastrarImovel cadastrarImovel(excursao, email);
    return cadastrarImovel.executar();
}

Email CntrServicoExcursao::recuperarDonoExcursao(Codigo codigo) {
    ComandoPesquisarDonoImovel pesquisarDonoImovel(codigo);
    pesquisarDonoImovel.executar();
    return pesquisarDonoImovel.getResultado();
}

bool CntrServicoExcursao::alterar(Excursao excursao) {
    ComandoAtualizarImovel atualizarImovel(excursao);
    return atualizarImovel.executar();
}

bool CntrServicoExcursao::cadastrarSessao(Sessao sessao, Email email, Codigo codigo) {
    ComandoCadastrarProposta cadastrarProposta(sessao, email, codigo);
    return cadastrarProposta.executar();
}

list<Sessao> CntrServicoExcursao::recuperarSessoes() {
    ComandoPesquisarPropostas pesquisarPropostas;
    pesquisarPropostas.executar();
    return pesquisarPropostas.getResultado();
}

list<Sessao> CntrServicoExcursao::recuperarSessoes(Email email) {
    ComandoPesquisarPropostas pesquisarPropostas(email);
    pesquisarPropostas.executar();
    return pesquisarPropostas.getResultado();
}

list<Sessao> CntrServicoExcursao::recuperarSessoes(Codigo codigo) {
    ComandoPesquisarPropostas pesquisarPropostas(codigo);
    pesquisarPropostas.executar();
    return pesquisarPropostas.getResultado();
}

list<Codigo> CntrServicoExcursao::recuperarCodigosSessoes(Email email) {
    ComandoPesquisarCodigosImoveisPropostos codigosImoveis(email);
    codigosImoveis.executar();
    return codigosImoveis.getResultado();
}

bool CntrServicoExcursao::deletarSessao(Codigo codigo) {
    ComandoDeletarProposta deletarProposta(codigo);
    return deletarProposta.executar();
}

bool CntrServicoExcursao::deletarExcursao(Excursao excursao) {
    Codigo codigo;
    codigo = excursao.getCodigo();
    ComandoDeletarImovel deletarImovel(codigo);
    ComandoDeletarProposta deletarProposta(excursao);
    deletarProposta.executar();
    return deletarImovel.executar();
}#include "SERexcursao.hpp"
#include ""

list<Excursao> CntrServicoExcursao::recuperarExcursoes() {
    ComandoPesquisarImoveis pesquisarImoveis;
    pesquisarImoveis.executar();
    return pesquisarImoveis.getResultado();
}

list<Excursao> CntrServicoExcursao::recuperarExcursoes(Email email) {
    ComandoPesquisarImoveis pesquisarImoveis(email);
    pesquisarImoveis.executar();
    return pesquisarImoveis.getResultado();
}

Excursao CntrServicoExcursao::recuperarExcursao(Codigo codigo) {
    ComandoPesquisarImovel pesquisarImovel(codigo);
    pesquisarImovel.executar();
    return pesquisarImovel.getResultado();
}

bool CntrServicoExcursao::cadastrarExcursao(Excursao excursao, Email email){
    ComandoCadastrarImovel cadastrarImovel(excursao, email);
    return cadastrarImovel.executar();
}

Email CntrServicoExcursao::recuperarDonoExcursao(Codigo codigo) {
    ComandoPesquisarDonoImovel pesquisarDonoImovel(codigo);
    pesquisarDonoImovel.executar();
    return pesquisarDonoImovel.getResultado();
}

bool CntrServicoExcursao::alterar(Excursao excursao) {
    ComandoAtualizarImovel atualizarImovel(excursao);
    return atualizarImovel.executar();
}

bool CntrServicoExcursao::cadastrarSessao(Sessao sessao, Email email, Codigo codigo) {
    ComandoCadastrarProposta cadastrarProposta(sessao, email, codigo);
    return cadastrarProposta.executar();
}

list<Sessao> CntrServicoExcursao::recuperarSessoes() {
    ComandoPesquisarPropostas pesquisarPropostas;
    pesquisarPropostas.executar();
    return pesquisarPropostas.getResultado();
}

list<Sessao> CntrServicoExcursao::recuperarSessoes(Email email) {
    ComandoPesquisarPropostas pesquisarPropostas(email);
    pesquisarPropostas.executar();
    return pesquisarPropostas.getResultado();
}

list<Sessao> CntrServicoExcursao::recuperarSessoes(Codigo codigo) {
    ComandoPesquisarPropostas pesquisarPropostas(codigo);
    pesquisarPropostas.executar();
    return pesquisarPropostas.getResultado();
}

list<Codigo> CntrServicoExcursao::recuperarCodigosSessoes(Email email) {
    ComandoPesquisarCodigosImoveisPropostos codigosImoveis(email);
    codigosImoveis.executar();
    return codigosImoveis.getResultado();
}

bool CntrServicoExcursao::deletarSessao(Codigo codigo) {
    ComandoDeletarProposta deletarProposta(codigo);
    return deletarProposta.executar();
}

bool CntrServicoExcursao::deletarExcursao(Excursao excursao) {
    Codigo codigo;
    codigo = excursao.getCodigo();
    ComandoDeletarImovel deletarImovel(codigo);
    ComandoDeletarProposta deletarProposta(excursao);
    deletarProposta.executar();
    return deletarImovel.executar();
}