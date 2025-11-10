#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter the length:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enterthe element:");
        scanf("%d",&a[i]);
    }
    printf("\nArray is");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    printf("\nsorted array is");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}