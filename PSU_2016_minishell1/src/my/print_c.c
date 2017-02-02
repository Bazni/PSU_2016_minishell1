/*
** print_c.c for print in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Fri Nov 11 21:55:24 2016 Gwendal Bazin
** Last update Mon Jan  9 22:01:48 2017 Gwendal Bazin
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int	put_c(va_list *args)
{
  char	c;

  c = va_arg(*args, int);
  write(1, &c, 1);
  return (1);
}

int	put_s(va_list *args)
{
  int	i;
  char	*test;

  i = 0;
  test = my_strdup(va_arg(*args, char *));
  while (test[i] != '\0')
    {
      my_putchar(test[i]);
      i++;
    }
  free(test);
  return (i);
}

int	len(char c)
{
  int	len;
  int	i;

  len = 0;
  while (c / 10)
    len++;
  return (len);
}

int	convertion(int test, int base, int i)
{
  if (test / base)
    i += convertion(test / base, base, i);
  i++;
  my_putchar(test % base + '0');
  return (i);
}

int	put_s_upper(va_list *args)
{
  char	*str;
  int	i;
  int	c;

  i = 0;
  c = 0;
  str = va_arg(*args, char*);
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	{
	  if (str[i] < 8)
	    my_putstr("\\00");
	  else if (str[i] < 32)
	    my_putstr("\\0");
	  else
	    my_putchar('\\');
	  c += convertion(str[i], 8, c);
	}
      else
	my_putchar(str[i]);
      i++;
    }
  return (i + 3);
}
