#include "main.h"

/**
 * get_precision - gets the precision from the format string
 * @p: the format string
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: new pointer
 */
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
<<<<<<< HEAD
	if (*p == '*')
=======
	if (p == '')
>>>>>>> 65c32b7036ee5ca292bdf09935d7b1a03df42187
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
<<<<<<< HEAD
}
=======
}	
>>>>>>> 65c32b7036ee5ca292bdf09935d7b1a03df42187
