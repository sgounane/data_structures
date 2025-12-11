#include<stdio.h>
#include<stdlib.h>

typedef struct student {
	char lastname[30];
	char firstname[20];
	int group;
} Student_t;

typedef struct link{
      Student_t  student;
      struct link * next;
} Link_t;

typedef struct List{
      Link_t *head;
      int size;
} List_t;

void show_menu(){
    printf("-------------Menu-------------");
    printf("1- Load File\n");
    printf("2- Show content\n");
    printf("3- Insert student\n");
    printf("4- Edite Student\n");
    printf("5- Find Student by name\n");
    printf("6- Save to file\n");
    printf("7- Quit Program\n");
    printf("------------------------------\n");
    printf("your Choice: ");
}
List_t * creat_list(){
    List_t *phead;
    printf("---------Debut Create list----------\n");
    phead=(List_t *)malloc(sizeof(List_t));
    phead->head=NULL;
    phead->size=0;
    printf("---------Debut create list----------\n");
    return phead;
}
void chain(List_t *phead, Link_t *node){
    //inserer data au debut de la liste
    printf("---------Debut Chain----------\n");
    if(phead==NULL) phead=creat_list();
    node->next= phead->head;
    phead->head=node;
    phead->size++;
    printf("---------Fin Chain----------\n");
}
void print_linked_list(List_t phead){
    Link_t *tmp= phead.head;
    if(phead.head==NULL) return;
    do
    {
        printf("%s %s %d\n",tmp->student.firstname,tmp->student.lastname, tmp->student.group);
        tmp=tmp->next;
    }while (tmp->next!=NULL);   
}
void read_file(FILE *f, List_t *phead){
    Link_t *node=(Link_t *)malloc(sizeof(Link_t));
    int ret_lec=fscanf(f,"%s %s %d",node->student.firstname, node->student.lastname, &node->student.group);
    while (ret_lec!=-1)
    {
        chain(phead,node);
        ret_lec=fscanf(f,"%s %s %d",node->student.firstname, node->student.lastname, &node->student.group);
    }
    printf("--------END Read_File-----------");
    
}