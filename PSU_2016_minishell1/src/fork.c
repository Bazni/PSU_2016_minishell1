/*
** fork.c for fork in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Mon Jan 16 17:53:43 2017 Gwendal Bazin
** Last update Sun Jan 22 23:04:21 2017 Gwendal Bazin
*/

#include "my.h"
#include "sh.h"

char            **pars(char *string, size_t arg)
{
  char		**tab;
  size_t	i, x, y, t;

  i = x = y = t = 0;
  if ((tab = malloc(sizeof(char*) * (arg + 1))) == NULL)
    return (NULL);
  while (x < arg)
    {
      if ((tab[x] = malloc(sizeof(char) * (my_strlen(string) + 1))) == NULL)
	return (NULL);
      while (string[i] != ' ' && string[i] != '\0')
	{
	  tab[x][y] = string[i];
	  y++;
	  i++;
	}
      tab[x][y] = '\0';
      x++;
      i++;
      y = 0;
    }
  tab[x] = NULL;
  return (tab);
}

int		get_arg(char *av)
{
  size_t	i;
  size_t	nb;

  i = nb = 0;
  while (av[i] != '\0')
    {
      if (av[i] == ' ')
	nb++;
      i++;
    }
  return (nb);
}

int	jean_fork(char **env, char *cmd)
{
  pid_t	pid;
  int	status;
  char	*name;
  char	**tab_cmd;

  tab_cmd = pars(cmd, get_arg(cmd) + 1);
  name = good_path(env, tab_cmd[0]);
  if (name == NULL)
    return (NOCMD);
  tab_cmd[0] = name;
  pid = fork();
  if (pid > 0)
    {
      waitpid(-1, &status, 0);
      if (WIFSIGNALED(status))
	if (WTERMSIG(status))
	  printf("Segmentation fault (core dumped)\n");
    }
  else if (pid == 0)
    execve(name, tab_cmd, env);
  else
    return (-1);
  return (0);
}
