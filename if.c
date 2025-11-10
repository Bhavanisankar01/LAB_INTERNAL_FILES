//syntax of if
/*if(condition){
    block of if
}
*/

#include<stdio.h>
/*int main(){
    int number=10;
    if(number/2){
        printf("%d is a Even number",number);
    }
/

/*int main(){
    int age;
	printf("Enter your age:");
	scanf("%d",&age);
    if(age>=18){
        printf("you are eligible to vote");
    }
}*/

int main(){
    int amount;
    printf("Enter the amount spent on shoping:");
    scanf("%d",&amount);
    if(amount>=5000){
        printf("You are eligible for discount");
    }
    printf("\nprogram ends");
}
