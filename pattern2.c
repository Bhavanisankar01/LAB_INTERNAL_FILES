#include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter number of rows:");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=rows-i;j++){
//             printf("  ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("%d ",k);
//         }
//         for(int m=i-1;m>=1;m--){
//             printf("%d ",m);
//         }
//          printf("\n");
//     }
// }

    

//PASCALS TRIANGLE
int main(){
    int rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    int coef=1;
    for(int i=0;i<=rows;i++){
        for(int space=rows;space>=i;space--){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0){
                coef=1;
            }else{
                coef=coef*((i-j)+1)/j;
            }
            printf("%4d",coef);
        }
        printf("\n");
    }
}

