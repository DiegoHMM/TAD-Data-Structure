/*
 * professor.hpp
 *
 *  Created on: 3 de set de 2018
 *      Author: Diego
 */
#include<iostream>
#include<string>

using namespace std;

typedef struct professor Professor;

Professor* cria_prof();
Professor* cria_prof(string cpf_prof,string nome_prof,string depart);
void att_prof(Professor* p,string cpf_prof,string nome_prof,string depart);
void ler_prof(string* cpf_prof,string* nome_prof,string* depart);
void deleta_prof(Professor* p);
void imprime_prof(Professor* p);
void retorna_prof(Professor* p,string* cpf_prof,string* nome_prof,string* depart);




