/*
   Input : Row = 4 Col = 4

      a b c d 
      e f g h 
      i j k l 
      m n o p 

*/


#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = 'a';

    /* Ithe Row and Column dogha madhli value purna different ahe mhanun
    apan hich condition use karu shakto fakt*/

    for(i = 1  ; i <= iRow ; i++ )
    {
      /*for(j = 1 ; j <= iCol ; j++ ,ch++ ) hi condition lihu shakto 
                                           printf chya khalcha ch++ kadun
                                           war takla ahe*/
        for(j = 1 ; j <= iCol ; j++ ) 
        {
            printf("%c\t",ch);
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