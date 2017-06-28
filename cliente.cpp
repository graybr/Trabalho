/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cliente.h"
#include "onibus.h"
#include <iostream>
#include <string>

using namespace std;

DescPassageiros* passageiros_cria(){
    return (DescPassageiros*)malloc(sizeof(DescPassageiros));
}

bool passageiros_inicializa(DescPassageiros *ptrDescPassageiros){
    if(passageiros_cria()==NULL)
        return false
    ptrDescPassageiros->fim = NULL;
    ptrDescPassageiros->inicio = NULL;
    return true;
}

DescCliente* cliente_cria(){
    return (DescCliente*)malloc(sizeof(DescCliente));
}

bool cliente_inicializa(DescCliente *ptrDescCliente){
    if(cliente_cria() == NULL){
        return false;
    }
    ptrDescCliente->ant = NULL;
    ptrDescCliente->prox = NULL;
    return true;
}

bool passageiros_vazia(DescPassageiros *ptrPassageiros){
    if(ptrPassageiros->inicio == NULL)
        return true;
    else
        return false;
}

bool passageiros_insereOrdenado
