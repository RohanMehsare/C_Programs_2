#include<stdio.h>

int StrlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}

int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   iRet = StrlenX(Arr);

   printf("String length is : %d\n",iRet);

   return 0;
}