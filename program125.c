/*
  Instead of this program Next program 126 is good for printing albhabets.
*/

// Input = 5
// Output = a b c d e


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n"); /* Hi line ya sathi lihli karan sagla o/p print 
                    zalyawar CMD war thodi jaga sutun cursor khali jail.*/ 
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

   Display(iValue);

   return 0;
}