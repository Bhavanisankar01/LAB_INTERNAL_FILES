#include<stdio.h>
#include<math.h>
int main(){
    int num,digit,original,count=0;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;

    while(original>0){
        count++;
        original/=10;
    }
    original=num;

    while(original>0){
        digit=original%10;
        sum+=(int)pow(digit,count);
        original/=10;
    }
    if(sum==num){
        printf("Amstrong");
    }
    else{
        printf("not Amstrong");
    }
}