#include<stdio.h>

int main()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);   

    printf("%c\n",*ptr);  // printf("%c\n",ptr[0]) we can also write this
    ptr++; 

    printf("%c\n",*ptr);
    ptr++; 

    printf("%c\n",*ptr);
    ptr++; 

    printf("%c\n",*ptr);
    ptr++; 
    
    printf("%c\n",*ptr);
    ptr++; 

    return 0;
}