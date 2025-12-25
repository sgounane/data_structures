#include "helpers.h"

int main(){
    Arbre_Binaire *A;
    A=(Arbre_Binaire *)malloc(sizeof(Arbre_Binaire));
    A->nb_noeuds=0;
    A->racine=0;
    
    A->les_noeuds[0].val=3;
    A->les_noeuds[0].ng=1;
    A->les_noeuds[0].nd=3;

    A->les_noeuds[1].val=4;
    A->les_noeuds[1].ng=2;
    A->les_noeuds[1].nd=5;

    A->les_noeuds[2].val=5;
    A->les_noeuds[2].ng=-1;
    A->les_noeuds[2].nd=4;

    A->les_noeuds[3].val=7;
    A->les_noeuds[3].ng=6;
    A->les_noeuds[3].nd=-1;

    A->les_noeuds[4].val=8;
    A->les_noeuds[4].ng=-1;
    A->les_noeuds[4].nd=-1;

    A->les_noeuds[5].val=1;
    A->les_noeuds[5].ng=-1;
    A->les_noeuds[5].nd=-1;

    A->les_noeuds[6].val=9;
    A->les_noeuds[6].ng=-1;
    A->les_noeuds[6].nd=-1;

    A->nb_noeuds=7;

    return 0;
}