/*
 * aluno.hpp
 *
 *  Created on: 3 de set de 2018
 *      Author: Diego
 */

#ifndef ALUNO_HPP_
#define ALUNO_HPP_
#include<string>
#include<iostream>
using namespace std;

typedef struct aluno Aluno;

Aluno* cria_aluno();
Aluno* cria_aluno(string nome,string cpf,string matricula,string curso_aluno,string data);
void att_aluno(Aluno*a,string nome,string cpf,string matricula,string curso_aluno,string data);
void retorna_aluno(Aluno* a,string* nome,string* cpf,string* matricula,string* curso,string* data);
void imprime_aluno(Aluno* a);
void deleta_aluno(Aluno* a);
void ler_aluno(string* nome,string* cpf,string* matricula,string* curso_aluno,string* data);


#endif /* ALUNO_HPP_ */
