/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {

	if (str == '\0')return '\0';
	if (K <= -1)return '\0';

	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	int index = len - K-1;
	return str[index];

	return '\0';
}