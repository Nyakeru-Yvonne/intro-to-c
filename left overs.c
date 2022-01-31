#include<stdio.h>
int main()
{
	//you can use this modulus concept in finding out whether a no is odd or even//
	int piecesOfPizza =5;
	int numberOfEaters =2;
	int leftOvers = piecesOfPizza % numberOfEaters;
	
	printf("%i\n",leftOvers);
	return 0;
}
