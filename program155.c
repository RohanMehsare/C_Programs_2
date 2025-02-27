#include<stdio.h>

int countSmall(char *ptr)
{
    int iCount = 0;

  while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            iCount++;
        }
       ptr++; 
    }
    return iCount;
}

int main()
{
    char Arr[30];
    char *ptr = Arr;
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);   

    iRet = countSmall(Arr);

    printf("Count of Small letters is : %d\n",iRet);
    
    return 0;
}