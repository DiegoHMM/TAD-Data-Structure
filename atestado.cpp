
#include "atestado.hpp"
using namespace std;

#define tam_max 14
struct atestado{
    Aluno* alu;
    Disciplina** v_disc;
    int carga_max;
    int v_disc_pos;
};


//DEFINI TAMANHO MAX DE 14 HORAS POIS 1 AULA (MINIMO) TEM DUAS HORAS SENDO POSSIVEL PEGAR NO MAXIMO 14 MATERIAS
Atestado* cria_Atestado(Aluno* aluno,Disciplina** v_disc,int carga) {
    Atestado *aux = new Atestado;

    aux->alu = cria_aluno();
    aux->v_disc = cria_vetor_disciplina(tam_max);
    aux->carga_max = 0;
    aux->v_disc_pos = 0;
    for (int i = 0; i < tam_max; i++) {
        aux->v_disc[i] = cria_disc();
    }
    atualiza_atestado(aux, aluno, v_disc[aux->v_disc_pos],carga);



        return aux;
}
void atualiza_atestado(Atestado* atest,Aluno* alu,Disciplina* disc ,int carga){
    atest->alu = alu;
    atest->v_disc[atest->v_disc_pos] = disc;
    atest->v_disc_pos++;
    incrementa_carga(atest,disc,carga);

}

Disciplina** cria_vetor_disciplina(int quantidade_disc){
    return new Disciplina*[quantidade_disc];
}

Atestado** cria_vetor_atestado(int quantidade_atest){
    return new Atestado*[quantidade_atest];
}

void deleta_atestado(Atestado* atest){
    delete atest;
}

void deleta_vetor_disciplina(Disciplina** disc,int quantidade_disc){
    for(int i=0;i<quantidade_disc;i++) {
        deleta_disc(disc[i]);
    }
    delete[] disc;
}

void deleta_vetor_atestado(Atestado** v_atest,int quantidade_atest){
    for(int i=0;i<quantidade_atest;i++){
        deleta_atestado(v_atest[i]);
    }
    delete[] v_atest;
}

void imprime_atestado(Atestado* atest){
    cout << "***Dados Aluno***: " << endl;
    imprime_aluno(atest->alu);
    cout << endl;
    for(int i=0;i<atest->v_disc_pos;i++){;
        cout << "***Dados Disciplina(s)*** " << endl;
        imprime_disc(atest->v_disc[i]);
    }
}
void incrementa_carga(Atestado* atest,Disciplina* disc,int carga){
    retorna_carga(disc,&carga);
    if(retorna_carga(disc,&carga) < 0) {
        atest->carga_max = atest->carga_max + retorna_carga(disc, &carga);
    }else cout << "*ULTRAPASSA A CARGA HORARIA MAXIMA*" << endl;
}

int retorna_posicao_disc(Atestado* atest,int* v_disc_pos){
    *v_disc_pos = atest->v_disc_pos;
}



