/*
** my_power_rec.c for power_rec in /home/gwendal.bazin/jour5
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Fri Oct  7 10:49:31 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:30 2016 Gwendal Bazin
*/

#include "my.h"

int	my_power_rec(int nb, int p)
{
  if (p == 0)
    return (1);
  if (p < 0)
    return (0);
  else
    nb = nb * (my_power_rec(nb, p - 1));
  return (nb);
}
