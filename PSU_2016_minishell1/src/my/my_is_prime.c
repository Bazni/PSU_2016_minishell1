/*
** my_is_prime.c for is_prime in /home/gwendal.bazin/CPool_Day05
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Fri Oct  7 13:36:33 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:18 2016 Gwendal Bazin
*/

#include "my.h"

int	my_is_prime(int nb)
{
  int	i;
  int	prime;

  prime = 1;
  i = nb - 1;
  while (i != 1)
    {
      if (nb % i == 0)
	{
	  prime = 0;
	  i--;
	}
      else
	i--;
    }
  if (prime == 0)
    return (0);
  else
    return (1);
}
