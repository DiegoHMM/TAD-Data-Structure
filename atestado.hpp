#ifndef PRATICA2_ATESTADO_HPP
#define PRATICA2_ATESTADO_HPP

#include"disciplina.hpp"
#include"aluno.hpp"
#include<string>
#include<iostream>
using namespace std;

typedef struct atestado Atestado;

Atestado* cria_atestado();
Atestado* cria_Atestado(Aluno* aluno,Disciplina** disc,int carga);
void atualiza_atestado(Atestado* atest,Aluno* alu,Disciplina* disc,int carga);
void retorna_atestado(Atestado*,Aluno*,Disciplina**);
void imprime_atestado(Atestado*);
void deleta_atestado(Atestado*);
void ler_atestado(Atestado*,Aluno*,Disciplina**);
void deleta_vetor_disciplina(Disciplina** disc,int quantidade_disc);
void deleta_vetor_atestado(Atestado** atest,int quantidade_atest);
Disciplina** cria_vetor_disciplina(int tamanho);
Atestado** cria_vetor_atestado(int quantidade_atest);
void incrementa_carga(Atestado* atest,Disciplina* disc,int carga);
int retorna_posicao_disc(Atestado* atest,int* v_disc_pos);

#endif //PRATICA2_ATESTADO_HPP
