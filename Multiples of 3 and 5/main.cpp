#include<stdio.h>
int main()
{
	int num, sum=0,i;
	printf_s("*** Multiples of 3 and 5 ***\n----------------------------\nEnter one number: ");
	scanf_s("%d",&num);
	if (num <= 0)
	{
		printf_s("Error!\nThe number should be more than 0\nTry again.");
		return 0;
	}
	else
	{
		for (i = 0; i < num; i++)
		{
			if (i % 3 == 0 || i % 5 == 0) sum += i;
			else continue;
		}
	}
	printf_s("The sum of all the multiples of 3 or 5 below %d is %d\n------------END-------------\n", num, sum);
	return 0;
}