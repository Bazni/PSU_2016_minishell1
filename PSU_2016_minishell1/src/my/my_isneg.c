/*
** my_isneg.c for my_isneg in /home/gwendal.bazin/CPool_Day03
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Wed Oct  5 13:20:11 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:23 2016 Gwendal Bazin
*/

#include "my.h"

int     my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }else
    {
      my_putchar('P');
    }
  return (0);
}
