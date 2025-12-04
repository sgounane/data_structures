#include<stdio.h>
#include "tools.h"
int main(){
    DblList head = NULL;
    inserttail(&head,getNode(140));
    printDblList(head);
    insertHead(&head,getNode(5));
    printDblList(head);
    insertHead(&head,getNode(7));
    printDblList(head);
    insertHead(&head,getNode(4));
    printDblList(head);
    inserttail(&head,getNode(14));
    printDblList(head);
    //deleteNode(&head,getNode(4));
    DblList cp=revers(head);
    printDblList(cp);
}

