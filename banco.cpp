#include <iostream>
#include "conta_bancaria.hpp"
#include "banco.hpp"

Banco::Banco(){
    this->n_contas = 0;
    
    for(int i=0; i<20; i++){
        contas[i] = nullptr;
    }
}

ContaBancaria* Banco::Pesquisa(int id_p){
    for(ContaBancaria* conta_analisada : contas){
        if(conta_analisada->id == id_p){
            return conta_analisada;
        }
    }

    return nullptr;
}

ContaBancaria* Banco::CriaConta(int id_c, std::string cliente_c){
    ContaBancaria* teste = Pesquisa(id_c);

    if(teste != nullptr){
        ContaBancaria* nova_conta = new ContaBancaria(id_c, cliente_c);

        contas[n_contas] = nova_conta;
        n_contas++;

        return nova_conta;
    } else{
        return nullptr;
    }
}

void Banco::ListaContas(){
    for(ContaBancaria* conta : contas){
        if(conta != nullptr){
            conta->imprime();
        } else{
            return;
        }
    }
}