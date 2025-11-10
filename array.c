#include<stdio.h>
// int main(){
//     int a[]={10,20,30};
//     printf("%d",a[2]);
// }

// int main(){
//     int arr[5];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     arr[3]=40;
//     arr[4]=50;
//     arr[5]=60;
//     //arr[6]=70;
//     printf("%d\n",arr[5]);
//     printf("%d\n",arr[4]);
//     printf("%d\n",arr[3]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[0]);
// }

// int main(){
//     int arr[6];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     arr[3]=40;
//     arr[4]=50;
//     arr[5]=60;
//     for(int i=0;i<=6;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
// }

int main(){
    int a[5]={10,20,30,40,50,};
    a[0]=100;
    a[1]=209;
    // a[2]=30;
    // a[3]=40;
    // a[4]=50;
    // a[5]=60;
    int b;
    printf("The size of integer:%ld\n",sizeof(b));
    printf("The memory allocated for array:%ld\n",sizeof(a));
    for(int i=0;i<=5;i++)
    {
        printf("%d\t",a[i]);
    }
}