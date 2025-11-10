#include<stdio.h>
int main(){
    int i;
    start://label name
    printf("Welcome to jumping statement\n");
    for(i=0;i<=10;i++){
        //if(i==5){
        //}
        printf("%d\n",i);
        return 0;
    }
    goto start;
    printf("loop completed");
}