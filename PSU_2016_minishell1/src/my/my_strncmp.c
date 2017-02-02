/*
** my_strncmp.c for strncmp in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 19:26:22 2016 Gwendal Bazin
** Last update Sun Jan 22 21:06:35 2017 Gwendal Bazin
*/

#include "my.h"
/*
int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  if (my_strlen(s1) > my_strlen(s2))
    return (1);
  if (my_strlen(s1) < my_strlen(s2))
    return (-1);
  while (s1[i] != n && s2[i] != n)
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  return (0);
}
*/
int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n-1)
    i++;
  return (s1[i] - s2[i]);
}
