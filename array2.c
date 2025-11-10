//To find give number is in array or not
#include<stdio.h>
// int main(){
//     int a[5]={50,20,30,50,50};
//     int target=50;
//     printf("The array elements are:");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     int flag=0;
//     int i;
//     for(i=0;i<5;i++)
//     {
//         if(a[i]==target){
//             flag=1;
//             break;
//         }
//     }
//     if(flag){
//         printf("\n%d is found in the array in index %d",target,i);
//     }
//     else{
//     printf("\n%d is notfound in the array",target);
//     }
// }

//Finding the smallest and largest element in the given array
int main(){
    int arr[]={10,30,50,20,70,60,100};
    int n=sizeof(arr)/sizeof(arr[7]);
    printf("%d\n",n);
    printf("The arrayelements are:");
    for(int i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(smallest>arr[i])
        {
            smallest=arr[i];
        }
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    printf("\nThe smallest element is:%d\n",smallest);
    printf("The largest element is:%d",largest);
}