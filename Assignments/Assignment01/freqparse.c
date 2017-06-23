#include <stdio.h>
int main(int argc, char *argv[]) 
{ 
	int numDigits = 0;
	int numLowers = 0;
	int numOthers = 0;
  	for(int i = 1; argv[i]; i++)
  	{
  		if(argv[i] >= '0' && argv[i] <= '9')
  		{
  			numDigits++;
  		}
  		else if(argv[i] >= 'a' && argv[i] <= 'z')
  		{
  			numLowers++;
  		}
  		//Disregard whitespace else if(){}
  		else
  		{
  			numOthers++;
  		}
  	}
	int total  = numDigits + numLowers + numOthers;
  	printf("There are:\n %d digits - %f%%\n %d letters - %f%%\n %d others - %f%%\n", numDigits, (float)(numDigits / total), numLowers, (float)(numLowers / total), numOthers, (float)(numOthers / total));
  
  return 0;
}
