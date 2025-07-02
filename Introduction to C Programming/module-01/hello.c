#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum =0;
    for(int i =1;i<=a;i++){
        printf("%d\n",i);
        sum +=i;
    }
    printf("sum is %d\n",sum);
    return 0;
}