#include<stdio.h>
#include<stdbool.h>

bool Count(char *str , char ch) 
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
          bFlag = true; 
          break;
        } 
        str++;
    }
    return bFlag;
}

int main()
{
   char Arr[30];
   bool bRet = false;
   char cValue = '\0';

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character : \n");
   scanf(" %c",&cValue);  // %c chya adhi space dila ahe

   bRet = Count(Arr,cValue);
  
   if(bRet == true)
   {
    printf("Character is present\n");
   }
   else
   {
    printf("There is no such character\n");
   }

   return 0;
}