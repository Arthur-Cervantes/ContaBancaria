#include <iostream>

struct Banco{
    int n_contas;
    ContaBancaria* contas[20];

    Banco();
    ContaBancaria* Pesquisa(int id_p);
    ContaBancaria* CriaConta(int id_c, std::string cliente_c);
    void ListaContas();
};