#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* -> receives a string as digit */
/* <- return an quantity of digits
   has on the string          */
int length(const char *number)
{	
	int n = 0;
	
	n = log10(atoi(number)) + 1;	
	
	return n;
}

/* -> receives a string as digit */
/* <- return an int              */
int length(int number)
{	
	int n = 0;
	
	n = log10(number) + 1;	
	
	return n;
}

/* -> receives a string                  */
/* <- return i, e.g: length of an string */
int lengthStr(const char *s)
{	
	int i = 0;

	for( ; *(const unsigned char *)s != '\0' ; i++)
		*(const unsigned char *)s++;

	return i;
} 


int main(int argc, char *argv[])
{
	printf("%d %d %d \n", length("100"),
						  length(100),
						  lengthStr("arthurhenrique"));

	return 0;
}
