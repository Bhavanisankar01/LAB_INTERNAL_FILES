/*Nested if
  if(condition){
    if(condition){
        if(condition){
        }
    }
}*/

#include<stdio.h>
/*int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num!=0){
        if(num>0){
            printf("%d is Positive integer",num);
        }
        else{
            printf("%d is Negative integer",num);
        }
    }
    else{
        printf("Given number is a zero");
    }
}*/

//
/*int main(){
    int pin=1234;
    float balance=5000;
    int Epin;
    printf("Enter your pin;");
    scanf("%d",&Epin);
    if(pin==Epin){
        float amount;
        printf("Enter the amount:");
        scanf("%f",&amount);
        if(amount<=balance){
            balance-=amount;        //(balance=balance-amount)
            printf("Withdrawlamount is %.2f\n",amount);
            printf("Remaining Balace is %.2f",balance);
        }
        else{
            printf("Insufficient balance");
        }
    }else{
        printf("Enter the correct pin");
    }
}
*/

//Grading system
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=40){
        if(marks>=90){
            printf("Grade Ex");
        }
        else if(marks>=80)
        {
            printf("Grade A");
        }
        else if (marks>=70)
        {
            printf("Grade B");
        }
        else if (marks>=60)
        {
            printf("Grade C");
        }
        else if (marks>=50)
        {
            printf("Grade D");
        }
        else if (marks>=40)
        {
            printf("Grade E");
        }
    }
    else{
        printf("fail");
    }
}