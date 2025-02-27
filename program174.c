/*
  ya program madhe scanf madhe problem yeto.
  ya program madhe search karaych to character na gheta program direct 
  run hoto.
  Next program 175 has solution for this.
*/

#include<stdio.h>

int Count(char *str , char ch) 
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
   char cValue = '\0';

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character : \n");
   scanf("%c",&cValue);

   iRet = Count(Arr,cValue);

   printf("Number of occurence is : %d\n",iRet);

   return 0;
}