#include<stdio.h>
#include "tools.h"
int main(){
    DblList head = NULL;
    insert(&head,getNode(5));
    //insert(&head,getNode(7));
    //insert(&head,getNode(4));
    //printDblList(head);
    deleteNode(&head,getNode(4));
}

