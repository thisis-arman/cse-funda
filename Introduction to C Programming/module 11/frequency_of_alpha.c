#include<stdio.h>
#include<string.h>

int main(){
   
    char str[100001];
    scanf("%s",str);
    int length = strlen(str);
    int arr[26]= {0};
    for(int i =0;i<length;i++)
    {
        int val = str[i]-'a';
        arr[val]++;
    }

    for(int i = 0; i<26;i++){
      if(arr[i]>0)
      {
          printf("%c - %d\n",i+'a', arr[i]);
      }
    }
    return 0;
}