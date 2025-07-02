#include <stdio.h>>
int is_palindrome(char str[])
{
    int isPalindrome = 0;
    int length = strlen(str);
    int a = 0;
    int s = length - 1;
    for (int i = 0; i < length; i++)
    {
        if (str[a] == str[s])
        {
            a++;
            s--;
            isPalindrome=1;
        }else if(str[a]!=str[s]){
            isPalindrome=0;
        }
    }

    return isPalindrome;
}

int main()
{
    char s[10001];
    scanf("%s", &s);
    int val = is_palindrome(s);
    if (val == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}