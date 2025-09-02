#include <string>
#include <iostream>

using std::string;
class ItemOrcamento
{
public:
    string id;
    string orcamentoId;
    string nome;
    string descricao;
    unsigned int quantidade;
    float valorUnitario;
    float valorTotal;

    ItemOrcamento(string id,
                  string orcamentoId,
                  string nome,
                  string descricao,
                  unsigned int quantidade,
                  float valorUnitario)
    {
        // Fazendo validação:
        if (id.empty())
        {
            std::cout << "ItemOrcamento-err: O id não pode ser inválido.\n";
            return;
        }

        if (orcamentoId.empty())
        {
            std::cout << "ItemOrcamento-err: O orcamentoId não pode ser inválido.\n";
            return;
        }

        if (nome.empty())
        {
            std::cout << "ItemOrcamento-err: O nome não pode ser inválido.\n";
            return;
        }

        if (!quantidade)
        {
            std::cout << "ItemOrcamento-err:A quantidade não pode ser inválida.\n";
            return;
        }

        if (!valorUnitario)
        {
            std::cout << "ItemOrcamento-err:O valor unitário não pode ser inválido.\n";
            return;
        }

        // Atribuindo os valores para a classe.
        this->id = id;
        this->nome = nome;
        this->descricao = descricao;
        this->quantidade = quantidade;
        this->valorUnitario;

        // Cálculos:
        this->valorTotal = this->valorUnitario * this->quantidade;
    }
    ItemOrcamento getItem();
    void listarItem();
    void listarItemSimples();
    ItemOrcamento editarItem(ItemOrcamento novosDados);
    void reset();
};

ItemOrcamento ItemOrcamento::getItem()
{
    return *this;
}

void ItemOrcamento::listarItemSimples()
{
    std::cout << "Nome: " << this->nome << "\n";
    std::cout << "Descrição: " << this->descricao << "\n";
    std::cout << "Quantidade: " << this->quantidade << "\n";
    std::cout << "Valor Unitário: " << this->valorUnitario << "\n";
    std::cout << "Valor Total: " << this->valorTotal << "\n";
}

void ItemOrcamento::listarItem()
{
    std::cout << "==== Item de Orçamento ====\n";
    std::cout << "ID: " << this->id << "\n";
    std::cout << "Orçamento ID: " << this->orcamentoId << "\n";
    std::cout << "Nome: " << this->nome << "\n";
    std::cout << "Descrição: " << this->descricao << "\n";
    std::cout << "Quantidade: " << this->quantidade << "\n";
    std::cout << "Valor Unitário: " << this->valorUnitario << "\n";
    std::cout << "Valor Total: " << this->valorTotal << "\n";
    std::cout << "===========================\n";
}
ItemOrcamento ItemOrcamento::editarItem(ItemOrcamento novosDados)
{
    this->id = novosDados.id;
    this->orcamentoId = novosDados.orcamentoId;
    this->nome = novosDados.nome;
    this->descricao = novosDados.descricao;
    this->quantidade = novosDados.quantidade;
    this->valorUnitario = novosDados.valorUnitario;
    this->valorTotal = novosDados.valorUnitario * novosDados.quantidade;
    return *this;
}

void ItemOrcamento::reset()
{
    this->id = "undefined";
    this->orcamentoId = "undefined";
    this->nome = "undefined";
    this->descricao = "undefined";
    this->quantidade = 0;
    this->valorUnitario = 0;
    this->valorTotal = 0;
}