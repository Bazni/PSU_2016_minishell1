/*
** my_strncat.c for strncat in /home/gwendal.bazin/CPool_Day07
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Tue Oct 11 18:24:11 2016 Gwendal Bazin
** Last update Mon Nov 07 13:54:35 2016 Gwendal Bazin
*/

#include "my.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  i = my_strlen(dest);
  if (nb < 0)
    {
      return (dest);
    }
  while (src[j] != '\0' && j < nb)
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
