/*
** my_put_nbr.c for putnbr in /home/bazni
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Mon Jan  1 19:33:53 2017 Gwendal Bazin
** Last update Mon Jan  9 22:01:21 2017 Gwendal Bazin
*/

#include "my.h"

void	disp_positive(int nb)
{
  if (nb / 10)
    disp_positive(nb / 10);
  my_putchar(nb % 10 + '0');
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  disp_positive(nb);
  return (0);
}
