#include "shell.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * interactive - returns true if shell is interactive mode
=======
 * interactive - returns true if shell is in interactive mode
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
<<<<<<< HEAD
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
=======
 * interactive - returns true if shell is in interactive mode
=======
	return (isatty(STDIN_FILENO)&& info->readfd <=2);
=======
 * interactive - returns true if shell is interactive mode
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
 * @info: struct address
 *
 * Return: 1 if iteractive mode, 0 otherwise
 */
int interactive(info_t *info)
{
<<<<<<< HEAD
	return (isatty(STDIN_FILENO)&& info->readfd <=2);
>>>>>>> bf46fe9b61f191ef318a04f58b15b097816805c5
=======
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
>>>>>>> 99ece3e74421771bd45131665dd527ec877e3382
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
<<<<<<< HEAD
<<<<<<< HEAD
		if (*delim++ == c)
			return (1);
=======
		if (*delim++ ==c)
			return (1)
>>>>>>> bf46fe9b61f191ef318a04f58b15b097816805c5
=======
		if (*delim++ ==c)
			return (1)
=======
		if (*delim++ == c)
			return (1);
>>>>>>> 99ece3e74421771bd45131665dd527ec877e3382
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
	return (0);
}

/**
<<<<<<< HEAD
<<<<<<< HEAD
=======
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int_isalpha(intc)
{
	if ((c >= 'a'&& c <= 'z') || (c >='A' && c <= 'Z'))
		return (1)
	else
		return (0)
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int_atoi(char *s)
=======
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
<<<<<<< HEAD
=======
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int_isalpha(intc)
{
	if ((c >= 'a'&& c <= 'z') || (c >='A' && c <= 'Z'))
		return (1)
	else
		return (0)
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int_atoi(char *s)
>>>>>>> bf46fe9b61f191ef318a04f58b15b097816805c5
=======
>>>>>>> 99ece3e74421771bd45131665dd527ec877e3382
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

<<<<<<< HEAD
<<<<<<< HEAD
=======
	for (i = 0; s[i] != '\0' && flag !=2; i++)
	{
		if (s[i] == '-')
			sign *= -1
=======
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

<<<<<<< HEAD
=======
	for (i = 0; s[i] != '\0' && flag !=2; i++)
	{
		if (s[i] == '-')
			sign *= -1
>>>>>>> bf46fe9b61f191ef318a04f58b15b097816805c5
=======
>>>>>>> 99ece3e74421771bd45131665dd527ec877e3382
>>>>>>> 1189735161c1781fbf1828ee87a63edd8e274d36
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
