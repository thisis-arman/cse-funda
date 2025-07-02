#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++){
        if(i%3==0){
            if(i%7==0){
                printf("%d got it \n",i);
            }
        }
    }

    return 0;
}

// #include<stdio.h>
// int main(){
//     int A,B;
//     long long int result;
//     scanf("%d %d",&A,&B);
//     result = A * B;
//     printf("%lld", result);
//     return 0;
// }