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
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertHead(DblList *phead, Node *newNode){
    if(*phead==NULL) *phead=newNode;
    else{
        newNode->next=*phead;
        (*phead)->prev=newNode;
        *phead=newNode;
    }
}
void inserttail(DblList *phead, Node *newNode){
    Node *tmp=*phead;
    if(*phead==NULL) *phead=newNode;
    else{
        while (tmp->next!=NULL) tmp=tmp->next;
        tmp->next=newNode;
        newNode->prev=tmp;
        
    }

}

void deleteNode(DblList *phead, Node *node){
    if(*phead==NULL) {
        printf("La list est vide ...\n");
        return;
    }
    Node * tmp=*phead;
    while(tmp!=NULL){
        if(tmp->data==node->data){
         //delete element
          return;  
        }
        tmp=tmp->next;
    }
}
DblList copy(DblList head){
    Node *newHead=NULL;
    if(head!=NULL){
        Node * tmp=head;
        while(tmp!=NULL){
            inserttail(&newHead,getNode(tmp->data));
            tmp=tmp->next;
        }
    }
    return newHead;
}
DblList revers(DblList head){
    Node *newHead=NULL;
    if(head!=NULL){
        Node * tmp=head;
        while(tmp!=NULL){
            insertHead(&newHead,getNode(tmp->data));
            tmp=tmp->next;
        }
    }
    return newHead;
}