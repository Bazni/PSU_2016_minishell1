/*
** my_memset.c for my_memset in /home/gwendal.bazin/PSU_2021_my_printf_bootstrap/Lib/lib/my
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Nov 07 13:46:35 2016 Gwendal Bazin
** Last update Mon Jan  9 21:59:05 2017 Gwendal Bazin
*/

#include <stdio.h>
#include "my.h"

void	*my_memset(char *s, char c, size_t nb)
{
  size_t	i;

  i = 0;
  while (i <= nb)
    {
      s[i] = c;
      i++;
    }
  s[i] = '\0';
  return (s);
}
