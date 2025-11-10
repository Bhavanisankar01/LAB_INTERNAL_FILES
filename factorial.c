#include<stdio.h>
long int factorial (int n)   
{   
    if ( n < 0)   
        return -1;                                   
    if (n == 0)   
        return 1; 
    return (n * factorial (n -1));   
}   
 int main(){  
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    long int fact=0;     
    fact=factorial(num);   
    printf("\n factorial of given number is %d",fact);   
  }  