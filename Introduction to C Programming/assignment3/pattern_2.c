#include<stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int space_count =n-1;
   for(int i =1;i<=n;i++){
    
    for(int i =0;i<space_count;i++){
        printf(" ");

    }
    space_count--;
    for(int j =i;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
   }

    return 0;
}