#include<stdio.h>
int main(){
    printf("Welcome to jumping statement\n");
    for(int i=0;i<=10;i++){
        if(i==5){
            return 0;
        }
        printf("%d\n",i);
    }
    printf("loop completed");
}