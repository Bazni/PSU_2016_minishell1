/*
** my_strstr.c for strstr in /home/exam/rendu/task06
**
** Made by exam user
** Login   <exam@epitech.net>
**
** Started on  Sat Oct 29 13:45:26 2016 exam user
** Last update Mon Nov 07 10:41:47 2016 Gwendal Bazin
*/

#include <stdio.h>

char	*my_strstr(char *ch1, char *ch2)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (ch1[i] != '\0')
    {
      k = i;
      while (ch2[j] == ch1[k])
	{
	  if (ch2[j + 1] == '\0')
	    return (&ch1[i]);
	  j++;
	  k++;
	}
      j = 0;
      k = 0;
      i++;
    }
  return (NULL);
}
