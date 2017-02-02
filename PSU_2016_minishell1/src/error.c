/*
** error.c for error in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Tue Jan 17 13:08:00 2017 Gwendal Bazin
** Last update Mon Jan 23 15:16:36 2017 Gwendal Bazin
*/

#include "my.h"
#include "sh.h"

void	error_fork(int err, char *s)
{
  if (err == NOCMD)
    {
      my_putstrer(s);
      write(2, ": Command not found.\n", 21);
    }
}
