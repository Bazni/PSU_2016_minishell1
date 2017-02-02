/*
** get_next_line.h for gnl in /home/bazni/CPE_2016_getnextline
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Mon Jan  2 18:32:32 2017 Gwendal Bazin
** Last update Mon Jan 23 11:54:41 2017 Gwendal Bazin
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef READ_SIZE
#  define READ_SIZE	4
# endif /* !READ_SIZE */

//char    *get_next_line(const int fd);
char	*cat_alloc(char*, char*);

#endif
