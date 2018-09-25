/*
 * aluno.cpp
 *
 *  Created on: 3 de set de 2018
 *      Author: Diego
 */

#include"aluno.hpp"
#include<iostream>
#include<string>

using namespace std;

struct aluno{
    string nome;
    string cpf;
    string matricula;
    string curso_aluno;
    string data;
};

Aluno* cria_aluno(){
    Aluno* a = new Aluno;
    return a;
}
Aluno* cria_aluno(string nome,string cpf,string matricula,string curso_aluno, string data){
    Aluno* a = cria_aluno();
    att_aluno(a,nome,cpf,matricula,curso_aluno,data);
    return a;
}
void att_aluno(Aluno*a,string nome,string cpf,string matricula,string curso_aluno,string data){
    a->nome = nome;
    a->cpf = cpf;
    a->matricula = matricula;
    a->curso_aluno = curso_aluno;
    a->data = data;

}
void retorna_aluno(Aluno* a,string* nome,string* cpf,string* matricula,string* curso_aluno,string* data){
    *nome = a->nome;
    *cpf = a->cpf;
    *matricula = a->matricula;
    *curso_aluno = a->curso_aluno;
    *data = a->data;
}
void imprime_aluno(Aluno* a){
    cout << "Nome Aluno: " << a->nome << endl;
    cout << "CPF Aluno: " << a->cpf << endl;
    cout << "Matricula Aluno: " << a->matricula << endl;
    cout << "Curso do Aluno: " << a->curso_aluno << endl;
    cout << "Data de ingresso do aluno: " << a->data << endl;
}
void deleta_aluno(Aluno* a){
    delete a;
}
void ler_aluno(string* nome,string* cpf,string* matricula,string* curso_aluno,string* data){
    cout << "Digite o nome do aluno: ";
    getline(cin,*nome);
    cout << "Digite o CPF do aluno: ";
    getline(cin,*cpf);
    cout << "Digite a matricula do aluno: ";
    getline(cin,*matricula);
    cout << "Digite o curso do aluno do aluno: ";
    getline(cin,*curso_aluno);
    cout << "Digite a data de ingresso do aluno: ";
    getline(cin,*data);
}
