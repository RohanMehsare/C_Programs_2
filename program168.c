#include<stdio.h>

// Input : Abiut CstAfB
// Output : 4 (ABab)


int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'b'|| *str == 'A' || *str == 'B')
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

   iRet = Count(Arr);

   printf("Number is : %d\n",iRet);

   return 0;
}