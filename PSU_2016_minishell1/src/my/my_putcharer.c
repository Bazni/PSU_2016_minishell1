/*
** my_putcharer.c for my_putcharer in /home/gwendal.bazin/CPool_infinadd/lib/my
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 24 09:27:14 2016 Gwendal Bazin
** Last update Mon Jan  9 22:00:03 2017 Gwendal Bazin
*/

#include <unistd.h>
#include "my.h"

void	 my_putcharer(char c)
{
  write(2, &c, 1);
}
