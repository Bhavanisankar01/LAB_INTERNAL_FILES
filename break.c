#include<stdio.h>
/*int main(){
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }
    printf("loop completed");
}*/

int main(){
    int choice;
    do{
    printf("Welcome to Greeting\n1.Say Hi,\n2.Say Hello,\n3.Say Thank you\n4.Exit\n");
    printf("Enter your greeting choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Hi Ram!\n");
            break;
        case 2:
            printf("Hello Ram!\n");
            break;
        case 3:
            printf("Thank you Ram!\n");
            break;
        case 4:
            printf("Your are exited");
            return 0;
        default:
            printf("Enter a valid choice");
    }
    }while(choice!=4);
    printf("\nYou are Exited");
}