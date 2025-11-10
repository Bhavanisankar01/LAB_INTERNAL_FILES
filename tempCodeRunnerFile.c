#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of strings:");
    scanf("%d",&n);
    char words[n][100];
    for( int i=0;i<n;i++){
        printf("Enter the string %d:",i+1);
        scanf("%99s",words[i]);
    }
    printf("\nYou entered:\n");
     for( int i=0;i<n;i++){
        printf("%s\n",words[i]);
     }
}
