#include<stdio.h>
int main(){
    int r,c;
    int a[r][c],b[r][c],i,j;
    printf("enter row size:");
    scanf("%d",&r);
    printf("Enter column size:");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the elements for a:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter elements for b:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("Resultant array is:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]+b[i][j]);
        }
    }
}