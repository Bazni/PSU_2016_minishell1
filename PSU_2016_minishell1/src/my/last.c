/*
** last.c for last in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Sat Nov 12 20:37:19 2016 Gwendal Bazin
** Last update Mon Jan  9 21:57:59 2017 Gwendal Bazin
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int	disp_play(unsigned int test, int i)
{
  if (test / 10)
    i += disp_play(test / 10, i);
  i++;
  my_putchar(test % 10 + '0');
  return (i);
}

int	uniint(va_list *args)
{
  unsigned int	test;
  int	i;

  i = 0;
  test = va_arg(*args, unsigned int);
  i += disp_play(test, i);
  return (i);
}

int	disp_osition(unsigned int test, char letter, int i)
{
  if (test / 16)
    i += disp_osition(test / 16, letter, i);
  if ((test % 16) > 9)
    my_putchar((test % 16) + letter);
  else
    my_putchar(test % 16 + '0');
  i++;
  return (i);
}

int	hexa_ctement(va_list *args)
{
  int	i;
  unsigned int	test;

  i = 0;
  test = va_arg(*args, unsigned int);
  i += disp_osition(test, '7', i);
  return (i);
}

int	hexa_lte(va_list *args)
{
  int	i;
  unsigned int	test;

  i = 0;
  test = va_arg(*args, unsigned int);
  i += disp_osition(test, 'W', i);
  return (i);
}
