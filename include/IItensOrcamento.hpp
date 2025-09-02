#ifndef IITENSORCAMENTO_HPP
#define IITENSORCAMENTO_HPP
#include <string>
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
                  float valorUnitario);
    ItemOrcamento getItem();
    void listarItem();
    void listarItemSimples();
    ItemOrcamento editarItem(ItemOrcamento novosDados);
    void reset();
};

#endif