#include<stdio.h>

float DigitAverage(int iNo)
{
	int iDigit = 0;
	int iMin = 9;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while (iNo != 0)
	{
	 iDigit = iNo % 10;
	 
	if(iDigit <iMin)
	{
		iMin = iDigit;
	}
	if(iMax == 0)
	{
		break;
	}
	
	iNo = iNo / 10;
	}
	return iMin;
}
int main()
{
    int iValue=0;
	int iRet = 0;
	
	printf("Enter Number :\n");
	scanf("%d",&iValue);
	
	iRet = DigitAverage(iValue);
	
	printf("Smallest Digit is : %d\n",iRet);
	
	return 0;
}
