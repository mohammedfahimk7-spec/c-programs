#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num1, num2, num3, average;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1 , &num2, &num3);
    average = (num1 + num2 +num3)/3;
    printf("average is %d\n",average);
  return 0;
    
}