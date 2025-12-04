#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef struct Queue{
    int data;
    int tete,queue; 
}Queue;

void initQueue(Queue *f){
    f->tete=f->queue=-1;
}
 printQueue(Queue f){


 }
void enqueue(Queue *f, int data){

}

void dequeue(Queue *f){


}

int main(){
    Queue f;
    initQueue(&f);
    enqueue(&f,4);
    enqueue(&f,9);
    enqueue(&f,3);
    enqueue(&f,1);
    printQueue(f);
    return 0;
}