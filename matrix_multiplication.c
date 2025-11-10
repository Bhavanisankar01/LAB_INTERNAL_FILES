#include<stdio.h>
int main(){
    int m,n,m1,n1;
    printf("Enter number of rows and columns for A:");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns for B:");
    scanf("%d%d",&m1,&n1);
    // if(n=!m1){
    //     printf("The matrix multiplication is not possible");
    //     return 0;
    // }
    int matrixA[m][n],matrixB[m1][n1],res[m][n1];
    printf("Enter The matrix A elements are:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("The matrix A is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%3d",matrixA[i][j]);
        }
        printf("\n");
    }
     printf("Enter The matrix B elements are:\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&matrixB[i][j]);
        }
    }
    printf("The matrix B is:\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%3d",matrixB[i][j]);
        }
        printf("\n");
    }
    // printf("The intial resultant matrix is:\n");
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n1;j++){
    //         printf("%3d",res[i][j]);
    //     }
    //     printf("\n");
    // }
    for (int i=0;i<m;i++){
        for(int j=0;j<n1;j++){
            for(int k=0;k<n;k++){
                res[i][j]=0;
                res[i][j]=res[i][j]+matrixA[i][k]*matrixB[k][j];
            }
        }
    }
    printf("The after resultant matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n1;j++){
            printf("%3d",res[i][j]);
        }
        printf("\n");
    }
}