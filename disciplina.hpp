/*
 * disciplina.hpp
 *
 *  Created on: 3 de set de 2018
 *      Author: Diego
 */

#ifndef DISCIPLINA_HPP_
#define DISCIPLINA_HPP_

#include<iostream>
#include<string>

using namespace std;

typedef struct disciplina Disciplina;

Disciplina* cria_disc();
Disciplina* cria_disc(string ,string ,string ,int ,int );
void att_disc(Disciplina* ,string ,string ,string ,int ,int );
void ler_disc(string* ,string* ,string* ,int* ,int* );
void imprime_disc(Disciplina* );
void deleta_disc(Disciplina* );
int retorna_carga(Disciplina*,int*);
void retorna_disciplina(Disciplina*,string*,string*,string*,int*,int*);






#endif /* DISCIPLINA_HPP_ */
