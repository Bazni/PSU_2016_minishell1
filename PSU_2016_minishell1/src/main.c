/*
** main.c for main in /home/bazni/Minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Mon Jan  2 13:37:01 2017 Gwendal Bazin
** Last update Mon Jan 23 11:55:55 2017 Gwendal Bazin
*/

#include "sh.h"
#include "my.h"
#include "gnl.h"

int	prompt(char **new_env)
{
  char	*s;
  int	err;
  t_env	*list;

  list = tab_to_list(new_env);
  err = 0;
  while (1)
    {
      my_putstr("BaznisH:> ");
      if ((s = get_next_line(0)))
	{
	  if (built(list, s) == 0)
	    err = jean_fork(new_env, s);
	  if (err != 0)
	    error_fork(err, s);
	}
    }
  return (0);
}

char	**fake_env()
{
  char	**fake_env;
  char	cwd[1024];
  
  if ((fake_env = malloc(sizeof(char **) * 3)) == NULL)
    exit(84);
  fake_env[0] = my_strdup("PATH=/bin:/usr/bin");
  getcwd(cwd, 1024);
  fake_env[1] = cat_alloc(my_strdup("PWD="), cwd);
  fake_env[2] = 0;
  return (fake_env);
}

int	main(int ac, char **av, char **env)
{
  char	*s;
  char	**new_env;

  (void)av;
  (void)ac;
  if (env[0] != NULL)
    new_env = copy_env(env);
  else
    new_env = fake_env();
  if (isatty(0) == 0)
    {
      while ((s = get_next_line(0)))
	error_fork(jean_fork(new_env, s), s);
      return (0);
    }
  else
    prompt(new_env);
  return (0);
}
