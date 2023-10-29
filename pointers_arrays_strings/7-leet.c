#include "main.h"

/**
* *leet - function that encodes a string into 1337.
* letters a and A are replaced by 4
* letters e and E are replaced by 3
* letters o and O are replaced by 0
* letters t and T are replaced by 7
* letters l and L are replaced by 1
* @s: string
*
* Return: string encoded
*/

char *leet(char *s)
{
	int	scount, leetcount;
	char	letter[] = "aAeEoOtTlL";
	char	nums[] = "4433007711";

	scount = 0; /* scan throught string */
	while (s[scount] != '\0') /* check if letter is found */
	{
		leetcount = 0; /*leet count*/
		while (leetcount < 10)
		{
			if (letter[leetcount] == s[scount])
			{
				s[scount] = nums[leetcount];
			}
			leetcount++;
		}
		scount++;
	}
	return (s);
}
