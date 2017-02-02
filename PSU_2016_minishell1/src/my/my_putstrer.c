/*
** my_putstrer.c for my_putstrer in /home/gwendal.bazin/CPool_infinadd/lib/my
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 24 09:28:59 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:59 2016 Gwendal Bazin
*/

#include "my.h"

int	my_putstrer(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putcharer(str[i]);
      i++;
    }
  return (0);
}
