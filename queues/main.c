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
    initFile(&f);
    enfiler(&f,4);
    enfiler(&f,9);
    enfiler(&f,3);
    enfiler(&f,1);
    printFile()
    return 0;
}