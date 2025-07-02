#include<stdio.h>

void rec(int n){
    
    if(n==0){
        return;
    }
    int last = n%10;
    rec(n/10);
    printf("%d ",last);

}

int main(){
   int t;
   scanf("%d",&t);
   int n;
   for(int i=0;i<t;i++){
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    rec(n);
    printf("\n");
   }
    return 0;
}