#include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

//Floyd's triangle
// int main(){
//     int rows,k=1;
//     printf("Enter number of rows:");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){
//             printf("%7d",k);
//             k=k+1;
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int rows,k=1;
//     printf("Enter number of rows:");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int space=rows;space>=i;space--){
//             printf("  ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%4d",j);
//             k=k+1;
//         }
//         printf("\n");
//     }
// }

// int main(){
// int rows;
//     printf("Enter number of rows:");
//     scanf("%d",&rows);
//     char ch=65;
//     for(int i=1;i<=rows;i++){
//         for(int j=0;j<i;j++){
//             printf("%c ",ch);
//             //ch=ch+1;
//         }
//         printf("\n");
//     }
// }

int main(){
int rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    char ch=65;
    for(int i=1;i<=rows;i++){
        for(int space=rows;space>=i;space--){
            printf("  ");
        }
            for(int j=0;j<i;j++){
                printf("%4c",ch+j);
                ch=ch+1;
            }
        printf("\n");
    }
}