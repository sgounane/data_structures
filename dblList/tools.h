#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;
typedef Node * DblList;
Node * getNode(int v){
    Node * newNode=(Node *)malloc(sizeof(Node));
    newNode->data=v;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
} 
void printDblList(DblList head){
    Node *temp=head;
    while(temp!=NULL) {
        printf("%d", temp->data);
        temp=temp->next;
    }
}
void insert(DblList *head, Node *newNode){
    if(head==NULL) *head=newNode;
    else{
        newNode->next=*head;
        (*head)->prev=newNode;
        *head=newNode;
    }
}