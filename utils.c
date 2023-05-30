#include "main.h"

/**
 * is_printable - Evaluates if a character is printable
 * @c: Char to be evuualted
 *
 * Return: 1 if c is printable,0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

}

/**
 * append_hexa_code - Append ascii in hexadecimal code to the buffer
 * @buffer: an array of characters
 * @i: index at which appending starts
 * @ascii_code: ASSCI CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* Hexa format code always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] + map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - To verify if a char is a digit
 * @c: Character to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
nt is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - used to cast a number to its specified size
 * @num: The number to be casted
 * @size: The number indicating the type to be casted
 *
 * Return: Casted value of number
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts a number to a specified size
 * @num: The number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: The casted value of number
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
