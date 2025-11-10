#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,1,2,3,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        // printf("%d",arr[i]);
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}