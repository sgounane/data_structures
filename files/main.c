#include "functions.h"

int main(){
    FILE *f=fopen("text.csv","r");
    List_t *phead=NULL;
    int choice;
    show_menu();
    scanf("%d",&choice);
    read_file(f, phead);
    print_linked_list(*phead);
    return 0;
}



