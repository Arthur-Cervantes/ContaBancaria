#include <iostream>
#include "conta_bancaria.hpp"
#include "banco.hpp"

ContaBancaria::ContaBancaria(int id_, std::string cliente_){
    this->id = id_;
    this->cliente = cliente_;
    this->saldo = 0;
}

void ContaBancaria::Deposito(float valor_d){
    this->saldo += valor_d;
}

void ContaBancaria::Saque(float valor_s){
    this->saldo -= valor_s;
}

void ContaBancaria::Pix(ContaBancaria* conta_, float valor_p){
    this->saldo -= valor_p;
    conta_->saldo += valor_p;
}

void ContaBancaria::imprime(){
    std::cout << this->id << " " << this->cliente << " " << this->saldo << std::endl;
}