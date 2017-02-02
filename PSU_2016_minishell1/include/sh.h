/*
** sh.h for sh in /home/bazni/PSU_2016_minishell1/include
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Wed Jan 11 18:06:07 2017 Gwendal Bazin
** Last update Sun Jan 22 20:31:59 2017 Gwendal Bazin
*/

#ifndef SH_H
# define SH_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>

# include "get_next_line.h"
# include "error.h"
# include "builtin.h"

typedef struct	s_env
{
  char		*s;
  struct s_env	*next;
  struct s_env	*previous;
}		t_env;

typedef struct	s_menu
{
  struct s_env	*path;
  struct s_env	*oldpwd;
  struct s_env	*first;
  struct s_env	*home;
}		t_menu;

int	prompt(char**);
char	*my_strsep(char**, char);

char	**copy_env(char **);
char	*good_path(char**, char*);

int	jean_fork(char**, char*);

void	error(int, char*);
int	built(t_env*, char*);
void	my_cd(t_env*, char*);
char	*my_getenv(char **, char*);
size_t	my_strchar(char*, char);

t_env	*env_create(char*);
int	env_append(t_env*, char*);
int	env_insert(t_env*, char*);
t_env	*env_getlast(t_env*);
size_t	env_len(t_env*);
void    env_print_previous(t_env*);
void    env_print(t_env*);
t_env   *env_delete(t_env*);
t_env	*env_getpos(t_env*, size_t);

t_env	*tab_to_list(char**);
char	**list_to_tab(t_env*);

#endif
