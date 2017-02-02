/*
** my_strlen.c for strlen in /home/gwendal.bazin/CPool_Day04
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Oct  6 11:34:39 2016 Gwendal Bazin
** Last update Tue Jan 17 12:28:54 2017 Gwendal Bazin
*/

#include "my.h"

size_t     my_strlen(char *str)
{
  size_t   i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
