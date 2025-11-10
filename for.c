/*for syntax
    for(initialization;condition;updation)
    {
    block of for
    }*/

#include<stdio.h>
/*int main(){
    //int i;
    for(int i=0;i<=10;i++)
    {
        printf("%d Hello World\n",i);
    }
    printf("Loop Completed");
}*/

/*int main(){
    int i=0;
    for(int i=0;i<10;i++)
    {
        printf("%d Hello World\n",i);
    }
    printf("The value of i is %d\n",i);
    printf("Loop Completed");
}*/

//SUM OF n NUMBERS
/*int main(){
    int sum=0;
    int n;
    printf("Enter the range");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("The sum of %d natural numbers are %d\n",n,sum);
    printf("Loop completed");
}*/

//MATHEMATICAL TABLE
/*int main(){
    int n;
    printf("ENter the n value for which table you want:");
    scanf("%d",&n);
    for( int i=1;i<=20;i++){
        printf("%d X %d = %d\n",n,i,n*i);
}
}*/

// FACTORIAL NUMBER
/*int main(){
    int i,n;
    long int fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %ld",n,fact);
}*/
// in Decrement order(factorial)
int main(){
    int i,n;
    long int fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("The factorial of %d is %ld",n,fact);
}

// int main(){
//     //int i;
//     for(int i=1;i<=10;i+=2)
//     {
//         printf("%d Hello World\n",i);
//     }
//     printf("Loop Completed");
// }