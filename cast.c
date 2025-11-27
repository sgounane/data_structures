#include<stdio.h>

void main(){
    float f = 5.75;
    float a;
    int i;
    i = (int)f; // Explicit cast from float to int
    a=(float)i;
    printf("The integer value is: %d %f\n", i,a);
}