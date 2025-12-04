#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef struct Queue{
    int data[MAX];
    int tete,queue; 
}Queue;

void initQueue(Queue *f){
    f->tete=f->queue=-1;
}
void printQueue(Queue f){
    printf("[tete:%d, queue:%d]\n", f.tete, f.queue);
    if(f.tete==-1) printf("Fille vide !!!\n");
    else 
        for(int i=f.tete;i<f.queue+1;i++) printf("%d<-", f.data[i]);
    printf("\n");

 }
void enqueue(Queue *f, int data){
    if(f->tete==-1) f->tete=0;
    f->queue++;
    f->data[f->queue]=data;
}

int dequeue(Queue *f){
    if(f->tete==-1){
        printf("La fille est vide\n");
        return 0;
    } 
    int v=f->data[f->tete];
    if(f->tete==f->queue) f->tete=f->queue=-1;
    else f->tete++;
    return v;
}

int main(){
    Queue f;
    initQueue(&f);
    enqueue(&f,4);
    printQueue(f);
    enqueue(&f,9);
    printQueue(f);
    enqueue(&f,3);
    printQueue(f);
    dequeue(&f);
    printQueue(f);
    dequeue(&f);
    printQueue(f);
    dequeue(&f);
    printQueue(f);
    dequeue(&f);
    printQueue(f);
    return 0;
}