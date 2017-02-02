/*
** raise.c for raise in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Tue Jan 17 15:53:44 2017 Gwendal Bazin
** Last update Tue Jan 17 15:57:01 2017 Gwendal Bazin
*/

#include <signal.h>

int	main()
{
  raise(SIGSEGV);
  return (0);
}
