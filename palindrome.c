#include<stdio.h>
int main(){
    int num,digit;
    int original;
    int rev=0;
    printf("enter a number");
    scanf("%d",&num);

    original=num;

    while(num>0)
    { 
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
    }
    if (original==rev)
        printf("%d is a palindrome",num);

     
    else
        printf(" %d is not palindrome",num);
     
    

} 