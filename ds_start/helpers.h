#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Client
{
    int id;
    char name[10];
    float solde;
}Client;

typedef struct Node
{
    Client client;
    struct Node * next;
}Node;

typedef struct Queue
{
    Node *head;
    Node *tail;
    int size;
}Queue;

bool isEmpty(Queue *q){
    /*votre code ici*/
    bool empty=(q->head==NULL ||  q->tail==NULL);
    return empty;//q->size==0;
}

Queue* creatQueue(){
    Queue* p;
    /*votre code ici*/
    p=(Queue *)malloc(sizeof(Queue));
    p->size=0;
    p->tail=NULL;
    p->head=NULL;
    return p;
}

Node* getNode(){
    Node* new_node=(Node*)malloc(sizeof(Node));
    /*votre code ici*/
    printf("Name: ");
    scanf("%s",new_node->client.name);
    printf("Id: ");
    scanf("%d", &(new_node->client.id));
    new_node->client.solde=0;
    new_node->next=NULL;
    return new_node;
}
void insert(Queue* q, Node *newNode){
    /*votre code ici*/
    
    if(isEmpty(q)){
        q->head=newNode;
        q->tail=newNode;
        return;
    }
    q->tail->next=newNode;
    q->tail=newNode;
}

Node* getNext(Queue *q){
    Node* node;
    /*votre code ici*/
    if(isEmpty(q)){
        printf("La file est vide!!!\n");
        return NULL;
    }
    node=q->head;
    q->head=q->head->next;
    node->next=NULL;
    return node;
} 

void showQueue(Queue* q){
    /*votre code ici*/
    Node* tmp=q->head;
    if(!tmp){
        printf("List Vide !!!\n");
        return;
    } 
    while (tmp!=NULL)
    {
       printf("<-[%d %s]",tmp->client.id, tmp->client.name);
       tmp=tmp->next;
    }
    printf("\n");
}