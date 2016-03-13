/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){

	int start = 0, end = len - 1;
	char temp;
	while (start < end)
	{
		temp = input[start];
		input[start] = input[end];
		input[end] = temp;
		start++;
		end--;
	}
	int i = 0;
	start = 0;
	end = -3;
	while (i < len)
	{
		if (input[i] == ' ')
		{
			end = i - 1;
			while (start < end)
			{
				temp = input[start];
				input[start] = input[end];
				input[end] = temp;
				start++;
				end--;
			}
			start = i + 1;
			i++;
		}
		else
		{
			i++;
		}
	}

		end = len - 1;
		while (start < end)
		{
			temp = input[start];
			input[start] = input[end];
			input[end] = temp;
			start++;
			end--;
		}
}
