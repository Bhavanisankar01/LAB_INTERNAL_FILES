#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[20];
    float cgpa;
    struct Address
    {
        char vname[20];
        int pincode;
    }addr;
};
int main(){
    int n;
    printf("Enter the number of students details you want:");
    scanf("%d",&n);
    struct Student s[10];
    for(int i=0;i<n;i++){
        printf("Enter the details of student: %d\n",i+1);
        printf("Enter the Roll number:");
        scanf("%d",&s[i].rollno);
        printf("Enter the name:");
        scanf("%s",&s[i].name);
        printf("Enter the CGPA:");
        scanf("%f",&s[i].cgpa);
        printf("Enter the village name:");
        scanf("%s",&s[i].addr.vname);
        printf("Enter the pincode:");
        scanf("%d",s[i].addr.pincode);
    }
    for(int i=0;i<n;i++){
         printf("Details of student : %d\n",i+1);
         printf("ROll Number: %d\n",s[i].rollno);
         printf("Name: %s\n",s[i].name);

    }
}