#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define NB_MAX_NOEUDS 15

typedef int Element;

typedef struct noeud {
    Element val;
    int ng;
    int nd;
} Noeud;

typedef struct arbre {
    int nb_noeuds;
    int racine;
    Noeud les_noeuds[NB_MAX_NOEUDS];
} Arbre_Binaire;
