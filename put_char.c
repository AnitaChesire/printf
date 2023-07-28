#include "main.h"

/**
  * put_char - prints
  * @c: arg
  * Return: no of char printed
  */

int put_char(int c)
{
	return (write(1, &c, 1));
}
