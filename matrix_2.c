#include<stdio.h>
int main(){
    int res[10][10];
    int r1,c1;
    printf("Enter the number of rows and columns of matrix:");
    scanf("%d%d",&r1,&c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if((i+j)%2==0){
                res[i][j]=1;
            }
            else{
                res[i][j]=0;
            }
        }
        }
    printf("The matrix is:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%3d",res[i][j]);            
        }
         printf("\n");
    }
}