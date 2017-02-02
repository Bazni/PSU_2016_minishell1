/*
** my_strdup.c for strdup in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Nov 17 09:57:35 2016 Gwendal Bazin
** Last update Mon Jan 16 14:10:55 2017 Gwendal Bazin
*/

#include "my.h"

char		*my_strdup_to(char *str, char delim)
{
  char		*my_string;
  size_t	i;

  i = 0;
if ((my_string = malloc(sizeof(char) * (my_strchar(str, delim) + 1))) == NULL)
  return (NULL);
while (i < my_strchar(str, delim))
    {
      my_string[i] = str[i];
      i++;
    }
  my_string[i] = '\0';
  return (my_string);
}
