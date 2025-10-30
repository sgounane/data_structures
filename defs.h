#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    float x;
    float y;
    struct point *next;
} Point;

typedef struct List
{
    Point *debut;
    int size;
} List;

int menu()
{
    int choix;
    printf("-----------------------------------------\n");
    printf("Menu:\n");
    printf("1. Afficher la liste\n");
    printf("2. Ajouter un point\n");
    printf("3. Retirer un point\n");
    printf("4. chercher un point\n");
    printf("0. Quitter\n");
    printf("-----------------------------------------\n");
    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    return choix;
}
// Afficher une liste
void printListe(List l)
{
    Point *p = l.debut;
    printf("List Size: %d\n", l.size);
    printf("Debut->");
    while (p != NULL)
    {
        printf("[%.1f, %.1f, next]->", p->x, p->y);
        p = p->next;
    }
    printf("NULL\n");
}

// inserer un element au debut
void push(Point *e, List *l)
{
    l->size++;
    e->next = l->debut;
    l->debut = e;
}

// Recuperer le premier element de la liste
Point pop(List *l)
{
    Point e;
    if (l->debut == NULL)
    {
        printf("Liste vide\n");
        exit(-1);
    }
    l->size--;
    Point *p = l->debut;
    e.x = l->debut->x;
    e.y = l->debut->y;
    e.next = NULL;
    l->debut = p->next;
    free(p);
    return e;
}

//chercher un point dans la liste
Point *find(List *l, Point e){
    Point *p;
    if(l->debut==NULL){
        return NULL;
    }
    p=l->debut;     
    while(p!=NULL){
        if(p->x==e.x && p->y==e.y){
            return p;
        }
        p=p->next;
    }
    return NULL;
}