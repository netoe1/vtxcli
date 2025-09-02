#include <iostream>
#include <string>
#include <vector>
#include "../include/IOrcamento.hpp"
using std::string, std::vector;

Orcamento::Orcamento(string id, string nome, string clienteId, vector<ItemOrcamento> itens)
{
    if (id.empty())
    {
        std::cout << "orcamento-constructor-err: o id não pode estar vazio." << "\n";
        return;
    }

    if (clienteId.empty())
    {
        std::cout << "orcamento-constructor-err: o clienteId não pode estar vazio." << "\n";
        return;
    }

    if (itens.empty())
    {
        std::cout << "orcamento-constructor-err: os itens de vetor não podem ser vazios." << "\n";
        return;
    }
}
void Orcamento::listarOrcamento()
{
    std::cout << "=====Listando Orcamento=====" << "\n";
    std::cout << "Id:" << this->id << "\n";
    std::cout << "clienteId:" << this->clienteId << "\n";
    for (int i = 0; i < this->itens.size(); i++)
    {
        itens[i].listarItem();
    }
    std::cout << "Valor Total:" << this->valorTotal << "\n";
}
void Orcamento::listarOrcamentoSimples()
{
    std::cout << "=====Listando Orcamento=====" << "\n";
    for (int i = 0; i < this->itens.size(); i++)
    {
        itens[i].listarItem();
    }
    std::cout << "Valor Total:" << this->valorTotal << "\n";
}
Orcamento Orcamento::editarOrcamento(Orcamento novoOrcamento)
{
    this->id = novoOrcamento.id;
    this->clienteId = novoOrcamento.clienteId;
    this->itens = novoOrcamento.itens;
    this->nome = novoOrcamento.nome;
    this->valorTotal = novoOrcamento.valorTotal;
}

void Orcamento::calcularValorTotal()
{
    for (int i = 0; i < this->itens.size(); i++)
    {
        valorTotal += itens[i].valorTotal;
    }
}
void Orcamento::reset()
{
    this->id = "undefined";
    this->clienteId = "undefined";
    this->itens.clear();
    this->valorTotal = 0;
}
