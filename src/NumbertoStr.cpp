 /*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal)
{
	int num,i=0;
	float diff_fl;
	if (number < 0)
	{
		num = number*(-1);
		diff_fl=number*(-1) - num;
	}
	else
	{
		num = number;
		diff_fl = number - num;
	}

	
	
	int diff_in = 1;
	int count = 1;
	while (count<=afterdecimal)
	{
		diff_fl = diff_fl * 10;
		diff_in = diff_fl;
		count++;
	}
	if (afterdecimal != 0)
	{
		while (diff_in != 0)
		{
			str[i++] = (diff_in % 10)+'0';
			diff_in = diff_in / 10;
		}
		str[i++] = '.';
	}
	while (num != 0)
	{
		str[i++] = (num % 10)+'0';
		num = num / 10;
	}
	if (number < 0)
	{
		str[i++] = '-';
	}
	int len = i;
	int j = 0;
	i--;
	while (j<i)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	str[len] = '\0';

	return;
}
