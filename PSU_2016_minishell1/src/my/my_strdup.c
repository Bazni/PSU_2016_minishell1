/*
** my_strdup.c for strdup in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Nov 17 09:57:35 2016 Gwendal Bazin
** Last update Sun Jan 22 23:00:57 2017 Gwendal Bazin
*/

#include "my.h"

char	*my_strdup(char *str)
{
  char	*my_string;
  int	i;

  i = 0;
  my_string = malloc(sizeof(char) * (my_strlen(str) + 1));
  while (i < my_strlen(str))
    {
      my_string[i] = str[i];
      i++;
    }
  my_string[i] = '\0';
  return (my_string);
}
