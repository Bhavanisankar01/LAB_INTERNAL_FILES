#include<stdio.h>
// int main(){
//     int a=10;
//     int *p=&a;
//     //p=&a;
//     printf("value of a is %d\n",a);
//     printf("address of a is %p\n",&a);
//     printf("address of a with pointer is %p\n",p);
//     printf("Value of a with pointer is %d",*p);
// }

int main() 
{ 
int x=20; 
int y=10; 
swap(x,y); 
printf("%d %d",y,x+2); 
} 
swap(int x,int y) 
{ 
int temp; 
temp=x; 
x=y; 
y=temp; 
}