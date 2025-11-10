#include<stdio.h>
int main()
{
    int a[100],n,key,pos;
    printf("Enter the length:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&a[i]);
    }
    printf("\nArray is");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\nEnter the key:");
    scanf("%d",&key);
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<0 && pos>n){
        printf("No memory space.");
    }
    else{
        for(int i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=key;
        printf("The array is ");
        for(int i=0;i<=n;i++){
            printf("%d",a[i]);
        }
    }
}