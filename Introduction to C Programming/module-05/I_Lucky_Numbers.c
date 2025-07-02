#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int f_d=0;
  int l_d=0;

  if(n >=10 && n<=99){
  if(n%10==0){
    printf("YES");
  }else{
    f_d= n /10;
    l_d= n%10;
  }
  }
 if(f_d!=0&&l_d!=0){
    if(f_d%l_d==0 || l_d%f_d==0){
    printf("YES");
  }else{
    printf("NO");
  }
 }
  

  
}