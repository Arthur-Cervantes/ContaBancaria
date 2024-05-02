#include <iostream>

struct ContaBancaria{
    int id;
    std::string cliente = "";
    float saldo;

    ContaBancaria(int id_, std::string cliente_);
    void Deposito(float valor_d);
    void Saque(float valor_s);
    void Pix(ContaBancaria* conta_, float valor_p);
    void imprime();
};