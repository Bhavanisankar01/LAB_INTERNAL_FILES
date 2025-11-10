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
    struct Student s1={1,"Ram",9.34,{"Billanapalii",521111}};
    struct Address a1;
    // a1.pincode=521111;
    // s1.rollno=1;
    // strcpy(s1.name,"Ram");
    // s1.cgpa=9.324;
    // s1.addr.pincode=521111;
    // strcpy(s1.addr.vname,"Billanapalli");
    printf("ROll number: %d\n",s1.rollno);
    printf("Name: %s\n",s1.name);
    printf("CGPA: %.3f\n",s1.cgpa);
    printf("Village name: %s\n",s1.addr.vname);
    printf("pincode of village: %d\n",a1.pincode);
}