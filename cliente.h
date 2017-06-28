/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cliente.h
 * Author: Adelson
 *
 * Created on 26 de Junho de 2017, 09:24
 */

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using namespace std;

struct Cliente {
    string nome;
    string cpf;
    int numPoltrona;
};

struct DescCliente {
    DescCliente *ant;
    DescCliente *prox;
};

struct DescPassageiros {
    DescCliente *inicio;
    DescCliente *fim;
};

#endif /* CLIENTE_H */

