#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,51};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("The average elements of the array is:%f",(float)(sum/n));
}