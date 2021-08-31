#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int * a, int * b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){
   int a, b;
    printf("Enter two numbers to be swapped\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}