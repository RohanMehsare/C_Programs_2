// Input : 5
// Output : 2    4    6    8   10
        // 2*1  2*2  2*3  2*4  2*5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
     
    for(iCnt = 1 ; iCnt <=iNo  ; iCnt++)
    {
        printf("%d\t",iCnt*2);
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