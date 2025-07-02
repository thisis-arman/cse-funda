#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i= 0;i<n;i++){
        char str[100001];
        scanf("%s",str);
        int length = strlen(str);
        int capital_letter=0;
        int small_letter=0;
        int digit_number=0;
        for(int i = 0; i<length;i++)
        { 
        if(str[i]>='a' && str[i]<='z')
        {
            small_letter++;
        }else if (str[i]>='A' && str[i]<='Z')
        {
            capital_letter++;
        }else if (str[i]>='0'&& str[i]<='9'){
            digit_number++;
        }

    }
    
    printf("%d %d %d \n",capital_letter, small_letter , digit_number);
}

    
   
    return 0;
}