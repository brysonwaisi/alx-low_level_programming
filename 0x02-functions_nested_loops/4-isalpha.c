#include "main.h"
/**
 * _isaplha - checks for lower case letter
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{

	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}













































#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
