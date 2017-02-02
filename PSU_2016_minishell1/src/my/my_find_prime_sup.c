/*
** my_find_prime_sup.c for prime_sup in /home/gwendal.bazin/CPool_Day05
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Fri Oct  7 14:51:00 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:12 2016 Gwendal Bazin
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
  int	i;

  i = 0;
  if (my_is_prime(nb) == 0)
    {
      i = my_is_prime(nb);
      while (i == 0)
	{
	  nb++;
	  i = my_is_prime(nb);
	}
    }
  else
    return (nb);
  return (nb);
}
