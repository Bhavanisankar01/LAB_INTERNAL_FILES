#include<stdio.h>
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
void display(int rollno){
    printf("Roll number: %d\n",rollno);
}
void display1(struct Student s1){
    printf("Roll numberr:%d\n",s1.rollno);
}
void display2(struct Student *s1){
    printf("Roll numberrr : %d\n",s1->rollno);
}
int main(){
    struct Student s1;
    s1.rollno=1;
    display(s1.rollno);
    display1(s1);
    display2(&s1);
}