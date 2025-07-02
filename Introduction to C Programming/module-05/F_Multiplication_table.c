#include <stdio.h>
int main() {
   int n;
  scanf("%d",&n);
   int table;
   for(int i =1;i<=12;i++){
       table = i* n;
       printf("%d * %d = %d\n",  n,i ,table );
   }
  return 0;
}