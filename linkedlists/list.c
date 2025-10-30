
#include "./defs.h"

int main(){
    List l;
    l.debut=NULL;
    l.size=0;
    int rep;
    Point *p,e;
    rep=menu();
    do{
        switch(rep){
            case 1: printListe(l); break;
            case 2: p=(Point*)malloc(sizeof(Point));
                    printf("Entrez les coordonnees x et y du point : ");
                    scanf("%f %f",&(p->x),&(p->y));
                    push(p,&l);
                    break;
            case 3: e=pop(&l);
                    printf("Point retire : [%.1f, %.1f]\n",e.x,e.y);
                    break;
            case 4: ; float x,y; 
                    printf("Entrez les coordonnees x et y du point a chercher : ");
                    scanf("%f %f",&x,&y);
                    e.x=x; e.y=y; e.next=NULL;
                    p=find(&l,e);
                    if(p!=NULL){
                        printf("Point trouve : [%.1f, %.1f]\n",p->x,p->y);
                    }else{      
                        printf("Point non trouve dans la liste.\n");
                    }
                    break;
                    
        }
    rep=menu();
    }while (rep!=0);
    return 0;
}