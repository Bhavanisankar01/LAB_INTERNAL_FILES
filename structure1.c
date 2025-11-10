#include<stdio.h>
struct student       //structure definition
    {
        int rollno;
        char name[20];
        float cgpa;
    }s1;
int main(){
    // struct student s1;
    s1.rollno=1;
    s1.cgpa=3.3;
    struct student s2={2,"ram",9.0}; //struct declaration  &  initialization
    printf("ROll Number : %d\n",s2.rollno); //accessing structure
    printf("Your name : %s\n",s2.name);
    printf("CGPA :%f\n",s2.cgpa);
     printf("CGPA :%.1f\n",s1.cgpa);
     struct student s3={3,"sam",9.5};
     printf("ROll Number : %d\n",s3.rollno); 
    printf("Your name : %s\n",s3.name);
    printf("CGPA :%.2f\n",s3.cgpa);
    s2.cgpa=9.999999;
     printf("CGPA :%f\n",s2.cgpa);

     //accessing with pointers
     struct student *p=&s3;
     printf("CGPA : %2f\n",p->cgpa);
    printf("ROll Number : %d\n",p->rollno); 
    printf("Your name : %s\n",p->name);

    printf("size of struct: %d",sizeof(s1));
}