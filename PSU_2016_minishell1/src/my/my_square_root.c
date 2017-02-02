/*
** my_square_root.c for square_root in /home/gwendal.bazin/CPool_Day05
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Fri Oct  7 11:18:34 2016 Gwendal Bazin
** Last update Mon Nov 07 13:53:25 2016 Gwendal Bazin
*/

#include "my.h"

int	my_square_root(int nb)
{
  int	root;
  int	test;

  root = 0;
  test = 0;
  while (test != nb)
    {
      test = my_power_rec(root, 2);
      root++;
      if (test > nb)
	{
	  return (0);
	}
    }
  return (root - 1);
}
