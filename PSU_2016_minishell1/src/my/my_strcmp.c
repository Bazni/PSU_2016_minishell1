/*
** my_strcmp.c for strcmp in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 17:38:03 2016 Gwendal Bazin
** Last update Mon Nov 07 13:53:48 2016 Gwendal Bazin
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (my_strlen(s1) > my_strlen(s2))
    return (1);
  if (my_strlen(s1) < my_strlen(s2))
    return (-1);
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      else if (s1[i] < s2[i])
	{
	  return (-1);
	}
      i++;
    }
  return (0);
}
