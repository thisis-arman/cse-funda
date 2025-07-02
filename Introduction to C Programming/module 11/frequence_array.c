#include<stdio.h>

int main(){
   int n ;
   scanf("%d",&n);
   int divident_by_2=0;
   int divident_by_3=0;
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for(int i = 0;i<n;i++){
    int val = arr[i];
    if(val%2==0&& val %3==0){
        divident_by_2++;
    }else if ( val%2==0){
        divident_by_2++;
    }else if (val %3==0){
        divident_by_3++;
    }
   }

   printf("%d %d", divident_by_2, divident_by_3);

 
    return 0;
}