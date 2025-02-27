/*
   Same like last program 135 fakt..input ghetlela Row ani column equal 
   nasal tar invalid input karun return karun execution thmbwaych.

   Input : Row = 4 Col = 4

      * b c d
      a * c d 
      a b * d
      a b c *
      
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = 'a';

    if(iRow != iCol)
    {
        printf("Inavlid input\n");
        return;
    }

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 , ch = 'a' ; j <= iCol ; j++)
        {
            if(i == j)
            {
            printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }
            ch++;
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