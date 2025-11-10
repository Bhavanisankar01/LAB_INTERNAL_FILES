#include<stdio.h>
// int main(){
//     int a=10,b=20;
//     printf("Before swaping : a=%d \t b=%d\n",a,b);
//     int *p=&a,*q=&b;
//     int temp;
//     temp=*p;
//     *p=*q;
//     *q=temp;
//     printf("After swaping : a=%d \t b=%d",a,b);
// }

//using functions

//call by reference
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=10,b=20;
//     printf("Before swaping : a=%d \t b=%d\n",a,b);
//     swap(&a,&b);
//     printf("After swaping : a=%d \t b=%d",a,b);
// }

//call by value
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swaap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    // printf("After swap call by value : a=%d \t b=%d\n",a,b);
}
int main(){
    int a=10,b=20;
    printf("Before swaping : a=%d \t b=%d\n",a,b);
    // swaap(a,b);
    // printf("After swap call by value : a=%d \t b=%d\n",a,b);
    swap(&a,&b);
    printf("After swaping : a=%d \t b=%d\n",a,b);
    swaap(a,b);
    printf("After swap call by value : a=%d \t b=%d\n",a,b);
    // swap(&a,&b);
    // printf("After swaping : a=%d \t b=%d\n",a,b);
}