#include<stdio.h>
enum status{true=3,false=4};
int main(){
    enum status s=3;
    if(s==true){
        printf("Success");
    }else{
        printf("failure");
    }
}

// typedef enum {jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec}month;
// int main(){
//     month check=sep;
//     if (check ==sep)
//     {
//         printf("sep\n");
//     }else{
//         printf("Not detected\n");
//     }
// }

//  #include <stdio.h>
//  enum Week { MON, TUE, WED, 
// THU, FRI, SAT, SUN };
//  int main() {
//  enum Week today = WED;
//  printf("Day number: %d\n", 
// today);
//  return 0;
//  }