#include<stdio.h>
int count(int *T,int v, int start, int end){
    int c=0;
    for(int i=start; i<end; i++){
        if(T[i]==v){
            c++;
        }
    }
    return c;
}

int rcount(int *T,int v, int start, int end){
    int c=0;
    if(start>=end){
        return 0;
    }
    if(T[start]==v)
        return 1 + rcount(T,v,start+1,end);
    else
        return rcount(T,v,start+1,end);
}
float carre(int *T, int start, int end){
    if(start>=end){
        return 0;
    }
    return T[start]*T[start] + carre(T, start+1, end);
}

void show(int *T, int start, int end){
   //printf("call show(%d,%d)\n",start,end); // Debug
   if(start>=end){
       return;
   }
   else{
       show(T,start+1,end);
       printf("%d \n",T[start]);
   }
   //printf("returning from show(%d,%d)\n",start,end); // Debug
}
void main(){
    int T[]={1,2,13,4};
    int v=2;
    int c=carre(T,0,4);

    printf("The value %d appears %d times in the array.\n", v,c);

    show(T,0,4);
}