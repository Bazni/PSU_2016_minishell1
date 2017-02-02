/*
** builtin.c for builtin in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Tue Jan 17 13:34:05 2017 Gwendal Bazin
** Last update Sun Jan 22 22:59:15 2017 Gwendal Bazin
*/

#include <string.h>
#include "my.h"
#include "sh.h"

void	my_exit(char *s)
{
  int	exi;
  int	i;

  exi = i = 0;
  if (my_strcmp(s, "exit") == 0)
    exi = 0;
  else
    {
      while (s[i] != 0)
	i++;
      exi = my_atoi(&s[i + 1]);
    }
  write(2, "exit\n", 5);
  exit(exi);
}

int	built(t_env *env, char *s)
{
  int	i;

  i = 0;
  if (my_strcmp("exit", s) == 0)
    my_exit(s);
  else if (my_strncmp(s, "cd", 2) == 0)
    {
      my_cd(env, s);
      i = 1;
    }
  else if (my_strcmp("env", s) == 0)
    {
      env_print(env);
      i = 1;
    }
  return (i);
}
