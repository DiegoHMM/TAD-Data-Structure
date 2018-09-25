/*
 * professor.cpp
 *
 *  Created on: 3 de set de 2018
 *      Author: Diego
 */
#include"professor.hpp"
using namespace std;

struct professor{
    string cpf_prof;
    string nome_prof;
    string depart;
};

Professor* cria_prof(){
    Professor* p = new Professor;
    return p;
}
Professor* cria_prof(string cpf_prof,string nome_prof,string depart){
    Professor* p = cria_prof();
    att_prof(p,cpf_prof,nome_prof,depart);
    return p;
}
void att_prof(Professor* p,string cpf_prof,string nome_prof,string depart){
    p->cpf_prof = cpf_prof;
    p->nome_prof = nome_prof;
    p->depart = depart;
}
void ler_prof(string* cpf_prof,string* nome_prof,string* depart){
    cout << "Digite o nome do professor: " << endl;
    getline(cin,*nome_prof);
    cout << "Digite o CPF do professor: " << endl;
    getline(cin,*cpf_prof);
    cout << "Digite o departamento do professor: " << endl;
    getline(cin,*depart);
}
void imprime_prof(Professor* p){
    cout << "Nome prof: " << p->nome_prof << endl;
    cout << "Cpf prof: " << p->cpf_prof << endl;
    cout << "Depart prof: " << p->depart << endl;
}
void retorna_prof(Professor* p,string* cpf_prof,string* nome_prof,string* depart){
    *cpf_prof = p->cpf_prof;
    *nome_prof = p->nome_prof;
    *depart = p->depart;

}
void deleta_prof(Professor* p){
    delete p;
}




