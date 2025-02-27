/*
  Negative No. display kartana for loop madhla condition change karych.
  Same like previous code but he logic changla ahe for loop madhla.
  Apan for loop madhla he logic use karyala pahije 
*/

// Input : 4
// Output : -1 -2 -3 -4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
     
    for(iCnt = -1 ; iCnt >= -iNo ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    
    printf("\n");
}

int main()
{
   int iValue = 0;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   Display(iValue);

   return 0;
}