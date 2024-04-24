#include<stdio.h>
void towers(int, char, char, char);

int main()
{
	int num;
	printf("Enter the number of disc: ");
	scanf("%d", &num);
	printf("The sequence of moves involved in the Tower of Hanoi are: \n");
	towers(num, 'A', 'B', 'C');
	return 0;
}

void towers(int num, char frompeg, char topeg, char auxpeg)
{
	if(num==1)
	{
		printf("\n Move disc from 1 to peg %c to peg %c", frompeg, topeg);
		return;
	}
	towers(num-1, frompeg, auxpeg, topeg);
	printf("\n Move disc %d from peg %c to peg %c", num, frompeg, topeg);
	towers(num-1, auxpeg, topeg, frompeg);	
}