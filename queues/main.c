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
    for(int i=f.tete;i<f.queue+1;i++) printf("%d<-", f.data[i]);
    printf("\n");

 }
void enqueue(Queue *f, int data){
    if(f->tete==-1) f->tete=0;
    f->queue++;
    f->data[f->queue]=data;
}

void dequeue(Queue *f){


}

int main(){
    Queue f;
    initQueue(&f);
    enqueue(&f,4);
    enqueue(&f,9);
    enqueue(&f,3);
    //enqueue(&f,1);
    printQueue(f);
    return 0;
}