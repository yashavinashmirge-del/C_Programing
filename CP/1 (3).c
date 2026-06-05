#include<stdio.h>
int Divide(int iNO1,int iNO2)
{
    int iAns=0;
    if(iNO2==0)
    {
        return -1;
    }
    iAns=iNO1/iNO2;
    return iAns;
}
int main()
{
    int iValue1=15, iValue2=5;
    int iRet=0;
    iRet=Divide(iValue1,iValue2);
    printf("Division is : %d",iRet);
    return 0;
}