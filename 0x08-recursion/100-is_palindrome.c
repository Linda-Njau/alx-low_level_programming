#include "main.h"
/**
 * palindromeChecker - checks the string
 * @str: the string to be checked
 * @lwn: the length of the string
 * @i: the incrementor
 * Return: 1 if it's a palindrome, 0 if it's not
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
	return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length
 * Return: an integer that displays length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - cheks to see if string is a palinfrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
