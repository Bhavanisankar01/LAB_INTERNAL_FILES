#include<stdio.h>
#include<string.h>
// struct student{
//     int rollno;
//     char name[10];
// };
union student1{
  int rollno;
  char name[13];  
};
int main(){
    // printf("size of the struct: %d\n",sizeof(struct student));
    printf("size of the Union: %d\n",sizeof(union student1));

    union student1 s1;
    s1.rollno=1;
    printf("Roll number: %d\n",s1.rollno);
    strcpy(s1.name,"sankar");
    printf("Name: %s\n",s1.name);
    printf("Roll number: %d\n",s1.rollno);
    s1.rollno=2;
    printf("Roll number: %d\n",s1.rollno);
    printf("Name: %s\n",s1.name);
}