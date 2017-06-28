/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   onibus.h
 * Author: Adelson
 *
 * Created on 26 de Junho de 2017, 09:16
 */

#ifndef ONIBUS_H
#define ONIBUS_H

#include "cliente.h"
#include <string>

using namespace std;

struct Viagem {
    DescPassageiros *listaPassageiros;
    string cidOrigem;
    string cidDestino;
    int ano;
    int mes;
    int dia;
    string codViagem;
    int capacidade;
};

struct DescOnibus {
    DescOnibus *ant;
    DescOnibus *prox;
    Viagem info;
};

struct DescLinha {
    DescOnibus *inicio;
    DescOnibus *fim;
};

#endif /* ONIBUS_H */

