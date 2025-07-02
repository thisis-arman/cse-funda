#include <stdio.h>
#include <string.h>

int main()
{
   char str[100001];
   scanf("%s", str);
   int length = strlen(str);

   int vowel_count = 0;
   for (int i = 0; i < length; i++)
   {
      printf("%c\n", str[i]);
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      {
         vowel_count++;
      }
   }
   printf("%d \n",length-vowel_count);
   return 0;
}