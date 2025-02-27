/*
   same like last program 131 fakt ch++ for chya condition madhe lihla 
   last la.

   Input : Row = 4 Col = 4

      a a a a
      b b b b 
      c c c c
      d d d d

*/


#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = 'a';   //char ch = '\0';
   
   /*char ch la '\0' ne initailse karun khalchi //for wali condition
    pan use karu shakto apan*/

   //for(i = 1 , ch = 'a' ; i <= iRow ; i++ , ch++)
    for(i = 1  ; i <= iRow ; i++ , ch++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);


    Display(iValue1 , iValue2);

   return 0;
}