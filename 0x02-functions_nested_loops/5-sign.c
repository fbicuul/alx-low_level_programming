#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * print_sign - a function that prints the sign of a number
 *
 *   * @n: number input
 *
 *    * Return: 1 and prints + if n is greater than zero
 *
 *     * 0 and prints 0 if n is zero
 *
 *      * -1 and prints - if n is less than zero
 *
 *       */

int print_sign(int n)

{

		if (n > 0)

				{

							_putchar('+');

									return (1);

										} else if (n == 0)

												{

															_putchar(48);

																	return (0);

																		} else if (n < 0)

																				{

																							_putchar('-');

																								}

																			return (-1);

=======
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
>>>>>>> 2d1f2afe3d3bc577e35e5961970aa126e9f5977c
}
