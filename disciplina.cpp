/*
 * disciplina.cpp
 *
 *  Created on: 3 de set de 2018
 *      Author: Diego
 */
#include"disciplina.hpp"

using namespace std;

struct disciplina{
    string nome_disc;
    string codigo;
    string curso_disciplina;
    int carga;
    int sala;
};
Disciplina* cria_disc(){
    Disciplina* d = new Disciplina;
    return d;
}
Disciplina* cria_disc(string nome_disc,string codigo,string curso_disciplina,int carga,int sala){
    Disciplina* d = cria_disc();
    att_disc(d,nome_disc,codigo,curso_disciplina,carga,sala);
    return d;
}

void att_disc(Disciplina* d,string nome_disc,string codigo,string curso_disciplina,int carga,int sala){
    d->nome_disc = nome_disc;
    d->codigo = codigo;
    d->curso_disciplina = curso_disciplina;
    d->carga = carga;
    d->sala = sala;
}
void ler_disc(string* nome_disc,string* codigo,string* curso_disciplina,int* carga,int* sala){
    cout << "Digite o nome da disciplina: ";
    cin.ignore();
    getline(cin,*nome_disc);
    cout << "Digite o codigo da disciplina: ";
    getline(cin,*codigo);
    cout << "Digite o curso da disciplina: ";
    getline(cin,*curso_disciplina);
    cout << "Digite a carga da disciplina: ";
    cin >> *carga;
    cout << "Digite a sala da disciplina: ";
    cin >> *sala;
}
void imprime_disc(Disciplina* d){
    cout << "Nome disciplina: " << d->nome_disc << endl;
    cout << "Codigo da disciplina: " << d->codigo << endl;
    cout << "Curso da disciplina: " << d->curso_disciplina << endl;
    cout << "Carga da disciplina: " << d->carga << endl;
    cout << "Sala da disciplina: " << d->sala  << endl;
}
void deleta_disc(Disciplina* d){
    delete d;
}

int retorna_carga(Disciplina* d,int* carga){
    return d->carga;
}
void retorna_disciplina(Disciplina* d,string* nome_disc,string* codigo,string* curso_disciplina ,int* carga,int* sala){
    *nome_disc = d->nome_disc;
    *codigo = d->codigo;
    *curso_disciplina = d->curso_disciplina;
    *carga = d->carga;
    *sala = d->sala;
}

