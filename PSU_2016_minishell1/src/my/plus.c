/*
** plus.c for plus in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Wed Nov 16 11:36:14 2016 Gwendal Bazin
** Last update Mon Jan  9 21:58:33 2017 Gwendal Bazin
*/
#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int	suc()
{
  my_putstr("Success");
  return (7);
}

int	pour_narnia(va_list *args)
{
  char	c;

  c = '%';
  (void)args;
  write(1, &c, 1);
  return (1);
}
