#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}