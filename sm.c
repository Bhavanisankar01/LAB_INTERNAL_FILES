#include<stdio.h>
int sum(int a);
int main(){
    int num;
    printf("Enter the range:");
    scanf("%d",&num);
    printf("The sum is :%d",sum(num));
}
int sum(int a){
    if(a==0){
        return 0;
    }else if(a==1){
        return 1;
    }
    else{
        return a+sum(a-1);
    }
}
