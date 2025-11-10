#include<stdio.h>
int main(){
    int m,n,m1,n1;
    printf("Enter number of rows and columns for A:");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns for B:");
    scanf("%d%d",&m1,&n1);
    int matrixA[m][n],matrixB[m1][n1];
    printf("Enter The matrix A elements are:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("The matrix elements are:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%3d",matrixA[i][j]);
        }
        printf("\n");
    }
    // printf("The transpose of the given matrix is:\n");
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         printf("%3d",matrixA[j][i]);
    //     }
    //     printf("\n");
    // }
    printf("Enter The matrix B elements are:\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&matrixB[i][j]);
        }
    }
    printf("The matrix elements are:\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%3d",matrixB[i][j]);
        }
        printf("\n");
    }
    if(m==m1 && n==n1){
        printf("The addition of matrix A&B is:\n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%3d",matrixA[i][j]+matrixB[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("The matrix addition is not possible");
    }
}