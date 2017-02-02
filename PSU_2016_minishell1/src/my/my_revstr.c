/*
** my_revstr.c for rev_str in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 14:08:19 2016 Gwendal Bazin
** Last update Mon Nov 07 13:53:04 2016 Gwendal Bazin
*/

#include "my.h"

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  char	test;

  test = 0;
  i = 0;
  j = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      test = str[i];
      str[i] = str[j];
      str[j] = test;
      i++;
      j--;
    }
  return (str);
}
