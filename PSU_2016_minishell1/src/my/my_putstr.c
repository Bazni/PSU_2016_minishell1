/*
** my_putstr.c for my_putstr in /home/gwendal.bazin/CPool_Day04
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Oct  6 11:10:39 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:53 2016 Gwendal Bazin
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
