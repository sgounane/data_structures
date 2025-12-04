#include<stdio.h>
#include<stdlib.h>

#define MAX 4
typedef struct Stack{
    int stack[MAX];
    int top;
}Stack;

void printStack(Stack p){
    int i=p.top;
    printf("--------------printStack------------------\n");
    while(i>-1) printf("%d\n",p.stack[i--]);
    printf("--------------end printStack--------------\n");
}
void push(Stack * p, int v){
    if(p->top==MAX) printf("Stack is full!!!");
    else{
        p->top++;
        p->stack[p->top]=v;
    }  
}
int main(){
    Stack p;
    for(int i=0;i<MAX;i++) printf("%d\n",p.stack[i]);
    p.top=-1;
    push(&p,3);
    push(&p,12);
    push(&p,-3);
    push(&p,-13);
    printStack(p);

}