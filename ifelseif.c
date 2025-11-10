/*if(condition1){
    block of if condition1
}
elseif{
    block of if condition is true
}
else{
    block of else
}
*/

#include<stdio.h>
/*int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>=90)
    {
        printf("Grade EX");
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
    else{
        printf("Fail");
    } 
}*/

int main(){
    int temp;
    printf("Enter the temperature:");
    scanf("%d",&temp);
    if (temp>=40)
    {
        printf("Extremely hot");
    }
    else if (temp>=30)
    {
        printf("hot");
    }
    else if(temp>=20){
        printf("moderate");
    }
    else if(temp>=10){
        printf("cold");
    }
    else{
        printf("freezing state");
    }
}