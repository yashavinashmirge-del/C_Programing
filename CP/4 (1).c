#include<stdio.h>

int MultFact(int iNo)
{
    int i = 1;
    int iMult = 1;

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d ", i);
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\nMultiplication of factors is : %d", iRet);

    return 0;
}