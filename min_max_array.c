#include<stdio.h>
int main(){
    int a[100],i,n,max,min;
    printf("Enter n value;");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("max=a[%d] and min=a[%d]",max,min);
}