#include<iostream>
#include"disciplina.hpp"
#include"aluno.hpp"
#include"professor.hpp"
#include"atestado.hpp"
using namespace std;
#define tam_max 14


int main(){

//CAMPOS ALUNO
    string nome,cpf,matricula,curso_aluno,data;

//CAMPOS DISCIPLINA
    string nome_disc,codigo,curso_disciplina;
    int carga,sala;
    int quantidade_atest;


    int quant_atest = 1;
    int quant_disc = 2;
//CAMPOS ATESTADO
    int cont = 0;

//CRIAÇÃO DE OBJETOS
    Aluno* aux_Aluno;
    Disciplina** v_Disciplina = cria_vetor_disciplina(quant_disc);
    Atestado** v_Atestado = cria_vetor_atestado(quant_atest);


//CRIA UM ATESTADO
    ler_aluno(&nome,&cpf,&matricula,&curso_aluno,&data);
    aux_Aluno = cria_aluno(nome,cpf,matricula,curso_aluno,data);

//CRIA DISCIPLINA
        ler_disc(&nome_disc,&codigo,&curso_disciplina,&carga,&sala);
        v_Disciplina[cont] = cria_disc(nome_disc,codigo,curso_disciplina,carga,sala);

        cout << endl;

    v_Atestado[0] = cria_Atestado(aux_Aluno,v_Disciplina,carga);


    cout << endl;
    cout << "*********ATESTADO*********" << endl;
    imprime_atestado(v_Atestado[0]);

    return 0;
}

