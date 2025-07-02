#include<stdio.h>>

int main(){
   int T;
   scanf("%d",&T);
   int m1;
   int m2;
   int d ;
   for (int i = 1;i<=T;i++){
    
    scanf("%d %d %d", &m1 ,&m2 ,&d);
    int total_work= m1*d;
    int new_total_farmer = m1+m2;
    int total_days_after_new_farmer= total_work/new_total_farmer;
    int difference = d-total_days_after_new_farmer;
    printf("%d\n",difference);
   }
    return 0;
}