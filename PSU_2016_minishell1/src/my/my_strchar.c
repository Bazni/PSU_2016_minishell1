/*
** my_strchar.c for len in /home/bazni
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Mon Jan 16 13:57:41 2017 Gwendal Bazin
** Last update Mon Jan 16 14:08:35 2017 Gwendal Bazin
*/

#include "my.h"

size_t		my_strchar(char *s, char delim)
{
  size_t	i;

  i = 0;
  while (s[i] != delim)
    i++;
  return (i);
}
