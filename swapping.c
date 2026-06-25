#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a=10, b=30, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping a=%d , b=%d\n",a,b);
    return 0;


}