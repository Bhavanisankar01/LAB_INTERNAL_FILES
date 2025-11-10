/*
switch(condition or choice){
    case const:
        break;
    case const:
        break;
    case const:
        break;
    default:
}
*/

#include<stdio.h>
/*int main(){
    int num;
    printf("Enter a number 1 to 7:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Enter a valid  Weekday number");
        break;
    }
}*/


/*int main(){
     char choice;
    printf("Enter your choice(+,-,*,/,%):");
    scanf("%c",&choice);
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
   
    switch(choice){
        case '+':
            printf("%d+%d=%d",a,b,(a+b));
            break;
        case '-':
            printf("%d-%d=%d",a,b,(a-b));
            break;
        case '*':
            printf("%d*%d=%d",a,b,(a*b));
            break;
        case '/':
            printf("%d/%d=%d",a,b,(a/b));
            break;
        case '%':
            printf("%d(%)%d=%d",a,b,(a%b));
            break;
        default:
            printf("Enter valid choice");
    }
}*/

//converting currency
int main(){
    float amount;
    int choice;
    printf("choice1:USD= INR");
    printf("\nchoice1:EUP= INR");
    printf("\nchoice1:GBP= INR");
    printf("\nchoice1:JPY= INR");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    printf("Enter the amount to convert into Indian rupees:");
    scanf("%f",&amount);
    switch(choice){
        case 1:
            printf("%f USD=INR %.2f",amount,(83*amount));
            break;
        case 2:
            printf("%f EUP=INR %.2f",amount,(91*amount));
            break;
        case 3:
            printf("%f GBP=INR %.2f",amount,(107*amount));
            break;
        case 4:
            printf("%f JYP=INR %.2f",amount,(0.56*amount));
            break;
        default:
            printf("Enter valid conversion");
    }
}

/*converting currency into indian rupees
amount== reading from the user

choice1: 1USD =Rs. 83
choice2: 1EUP=Rs. 91
choice3: 1GBP=Rs. 107
choice4: 1JYP=Rs. 
*/