/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//155,37 
//2 * 77
#include <iostream>
#include "onibus.h"

DescLinha* linha_cria (){
    return (DescLinha*) malloc(sizeof(DescLinha));
}

bool linha_inicializa (DescLinha *ptrLinha){
    if(linha_cria() == NULL)
        return false;
    ptrLinha->inicio = NULL;
    ptrLinha->fim = NULL;
    return true;
}

DescOnibus* onibus_cria (){
    return (DescOnibus*) malloc(sizeof(DescOnibus));
}

bool onibus_inicializa (DescOnibus *ptrOnibus){
    if(onibus_cria() == NULL)
        return false;
    ptrOnibus->ant = NULL;
    ptrOnibus->prox = NULL;
    return true;
}

bool linha_vazia(DescLinha *ptrLinha){
    if(ptrLinha->inicio = NULL)
        return true;
    else
        return false;
}

bool viagem_inserir (DescOnibus *ptrOnibus,string origem,string destino,int ano,int mes,int dia,string codViagem,int capacidade){
    ptrOnibus = onibus_cria();
    DescOnibus *aux;
    
    if (ptrOnibus == NULL)
        return false;
    
    DescLinha *ptrLinha;
    
    ptrOnibus->info->listaPassageiros = NULL;
    ptrOnibus->info->ano = ano;
    ptrOnibus->info->mes = mes;
    ptrOnibus->info->dia = dia;
    ptrOnibus->info->capacidade = capacidade;
    ptrOnibus->info->codViagem = codViagem;
    ptrOnibus->info->cidOrigem = origem;
    ptrOnibus->info->cidDestino = destino;
    
    
    if(linha_vazia(ptrLinha)){
        ptrLinha->inicio = ptrOnibus;
        ptrLinha->fim = ptrOnibus;
        
        return true;
    } 
    
    aux = ptrLinha->inicio;
    
    while(aux){
        if(ano > aux->info->ano){
            aux = aux->prox;
            if(mes > aux->info->mes){
                aux = aux->
            }
        }
    }
    
    if (){
        ptrLinha->fim->prox = ptrOnibus;
        ptrOnibus->ant = ptrLinha->fim;
        ptrLinha->fim = ptrOnibus;
        
        return true;
    }
}

bool viagem_remove (DescLinha *ptrLinha){
    DescOnibus *aux;
    
    if(linha_vazia()){
        cout << "Linha Vazia" << endl;
        return false;
    } else if(ptrLinha->inicio->prox = NULL){
        aux = ptrLinha->inicio;
        ptrLinha->inicio = aux->prox;
        ptrLinha->fim = ptrLinha->fim->prox;
        free(aux);
        return true;
    } else {
        aux = ptrLinha->fim;
        ptrLinha->fim = aux->ant;
        ptrLinha->fim->prox = NULL;
        free(aux);
        return true;
    }
}

