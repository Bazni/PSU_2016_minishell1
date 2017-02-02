/*
** my_strcat.c for strcat in /home/gwendal.bazin/CPool_Day07
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Tue Oct 11 09:25:57 2016 Gwendal Bazin
** Last update Mon Nov 07 13:53:42 2016 Gwendal Bazin
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  i = my_strlen(dest);
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
