/*
** convert.c for convert in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Sat Nov 12 17:08:56 2016 Gwendal Bazin
** Last update Mon Jan  9 22:02:02 2017 Gwendal Bazin
*/

#include <stdarg.h>
#include "my.h"

int	disp_put(long test, int i)
{
  if (test / 10)
    i += disp_put(test / 10, i);
  i++;
  my_putchar(test % 10 + '0');
  return (i);
}

int	convert(unsigned int test, int base, int i)
{
  if (test / base)
    i += convert(test / base, base, i);
  i++;
  my_putchar(test % base + '0');
  return (i);
}

int	octal(va_list *args)
{
  unsigned int	test;
  int	i;

  i = 0;
  test = va_arg(*args, unsigned int);
  i += convert(test, 8, i);
  return (i);
}

int	binary(va_list *args)
{
  unsigned int	test;
  int	i;

  i = 0;
  test = va_arg(*args, unsigned int);
  i += convert(test, 2, i);
  return (i);
}

int	my_putnbr(va_list *args)
{
  long	test;
  int	i;

  i = 0;
  test = va_arg(*args, int);
  if (test < 0)
    {
      my_putchar('-');
      test = test * (-1);
      i++;
    }
  i += disp_put(test, 0);
  return (i);
}
