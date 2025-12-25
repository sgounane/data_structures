#include "helpers.h"

int main(){
    Queue *q=creatQueue();

    printf("----------test pour une file vide--------------\n");
    Node* node = getNext(q);
    if(node!=NULL)printf("%s\n",node->client.name);
    printf("----------Inserer des elements a la queue puis affichage--------------\n");
    insert(q,getNode());
    insert(q,getNode());
    insert(q,getNode());
    showQueue(q);

    printf("------------recupérer un élément de la téte de la file--------------\n");
    node=getNext(q);
    if(node!=NULL)printf("[%s %f]\n",node->client.name, node->client.solde);
    showQueue(q);

    printf("----------------Inserer un nouvel elements a la queue puis affichage--------------\n");
    insert(q,getNode());
    showQueue(q);

    printf("----------------récupération de tous les élément de la liste--------------\n"); 
    node=getNext(q);
    if(node!=NULL)printf("[%s %f]\n",node->client.name, node->client.solde);
    showQueue(q);
    node=getNext(q);
    if(node!=NULL)printf("[%s %f]\n",node->client.name, node->client.solde);
    showQueue(q);
    node=getNext(q);
    if(node!=NULL)printf("[%s %f]\n",node->client.name, node->client.solde);
    showQueue(q);
    node=getNext(q);
}