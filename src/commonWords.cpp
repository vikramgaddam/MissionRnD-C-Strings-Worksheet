/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) {

	int i = 0, j = 0,count=0;

	char *res_Str[SIZE];

	char temp_str[SIZE];

	int temp_len = 0,word_count=0;

	while (str1[i] != '\0')
	{
		j = 0;
		int k = i;
		while (str2[j] != '\0')
		{
			while (true)
			{
   				if ((str1[k] == str2[j]))
				{
					temp_str[temp_len++] = str1[k];
					k++;
					j++;
					
				}
				else
				{
					if ((k > 0) && (j > 0))
					{
						if ((str1[--k] == ' ') || (str1[k] == '\0' ))
						{
							temp_str[temp_len] = '\0';
							res_Str[word_count++] = temp_str;
							temp_str[31] = { '\0' };
							i = k + 1;
						}
						else
						{
							while (str2[j] != ' ')
							{
								j++;
							}
						}
					}
					else
					{
						if (str1[k] == ' ')
						{
							temp_str[temp_len] = '\0';
							res_Str[word_count++] = temp_str;
							temp_str[31] = { '\0' };
							i = k;
						}
						else
						{
							while (str2[j] != ' ')
							{
								j++;
							}
						}
					}

					break;
				}
				
			}
			j++;


		}
	}







	return NULL;
}