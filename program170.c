#include<stdio.h>

// Check Vowels

int CountVowels(char *str) // Case Sensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E'|| *str == 'I' || *str == 'O'|| *str == 'U')
        {
          iCnt++; 
        } 
        str++;
    }
    return iCnt;
}

int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   iRet = CountVowels(Arr);

   printf("Number is : %d\n",iRet);

   return 0;
}