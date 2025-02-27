/*
  Small to capital and Capital to small both kartoy.
  ya program madhe problem ahe.
*/

#include<stdio.h>

void strtoggleX(char *str) 
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else 
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
   char Arr[30];

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   strtoggleX(Arr);

   printf("String after updation is : %s\n",Arr);

   return 0;
}