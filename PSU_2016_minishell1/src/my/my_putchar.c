/*
** my_putchar.c for putchar in /home/gwendal.bazin/CPool_Day03
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Wed Oct  5 21:37:25 2016 Gwendal Bazin
** Last update Sat Nov 19 14:31:54 2016 Gwendal Bazin
*/

#include <unistd.h>

void	 my_putchar(char c)
{
  write(1, &c, 1);
}
