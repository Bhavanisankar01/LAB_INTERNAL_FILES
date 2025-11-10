#include<stdio.h>
int main(){
    // int  a=10;
    // int *p=&a;
    // int **q=&p;
    // printf("The value of a: %d\n",a);
    // printf("The adress of a: %p\n",&a);
    // printf("The address of a with p: %p\n",p);
    // printf("The addess of p : %p\n",q);
    // printf("The value of p: %p\n",*q);
    // printf("The value of a with p :%d\n",*p);
    // printf("THe value of a with q :%d\n",**q);

    // pointer array

    int a[]={10,20,30,40};
    int *p=a;
    int sum=0;
    printf("the address of a[0]:%p\n",&a[0]);
    printf("the address of a[1]:%p\n",&a[1]);
    printf("the address of a[2]:%p\n",&a[2]);
    printf("the address of a[3]:%p\n",&a[3]);
    printf("the address of a   :%p\n",p);
    printf("the address of a   :%p\n",p+1);
    for(int i=0;i<4;i++){
        printf("the address of a[%d]:%p\n",i,p+i);
    }
    for(int i=0;i<4;i++){
        printf("the value of a[%d]:%d\n",i,*(p+i));
    }
    for(int i=0;i<4;i++){
        sum=sum+*(p+i);
    }
    printf("sum of all elements in array using pointer :  %d",sum);
}