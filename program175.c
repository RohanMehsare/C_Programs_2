/*
  Last program174 madhe scanf madhe problem yeto.
  ya program madhe nhi yet. ya program madhe scanf madhe %c chya 
  adhi space dila ahe.
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
   scanf(" %c",&cValue);  // %c chya adhi space dila ahe

   iRet = Count(Arr,cValue);

   printf("Number of Occurences is : %d\n",iRet);

   return 0;
}