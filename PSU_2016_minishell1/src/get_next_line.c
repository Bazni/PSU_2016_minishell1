/*
** get_next_line.c for getnextline in /home/bazni/CPE_2016_getnextline
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Tue Jan 10 23:38:40 2017 Gwendal Bazin
** Last update Sun Jan 22 22:56:02 2017 Gwendal Bazin
*/

#include "get_next_line.h"

long    my_strlen(char *s)
{
  long  i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}

long    find(char *buffer)
{
  long  i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
	return (i);
      i++;
    }
  return (-1);
}

char    *cat_alloc(char *end, char *buffer)
{
  char  *tmp;
  long   i, j;

  i = j = 0;
  if ((tmp = malloc(sizeof(char) *
		    (my_strlen(end) + my_strlen(buffer) + 1))) == NULL)
    return (NULL);
  if (end != NULL)
    {
      while (i < my_strlen(end) && end[i] != '\n')
	{
	  tmp[i] = end[i];
	  i++;
	}
      free(end);
    }
  while (j < my_strlen(buffer) && buffer[j] != '\n')
    tmp[i++] = buffer[j++];
  tmp[i] = '\0';
  return (tmp);
}

char	*push(char *buffer)
{
  char	*s;
  long	i;

  i = 0;
  if (buffer != NULL)
    {
      if ((s = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
	return (NULL);
      while (buffer[i] != '\0')
	{
	  s[i] = buffer[i];
	  i++;
	}
      s[i] = '\0';
    }
  return (s);
}

char		*get_next_line(const int fd)
{
  char		*line;
  static char	*buf, *tmp;
  static long	p;
  long		bytes = READ_SIZE;

  if (buf == NULL)
    {
      buf = malloc(sizeof(char) * (READ_SIZE + 1));
      if ((tmp = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL || buf == NULL)
	return (NULL);
      tmp[0] = buf[0] = '\0';
    }
  line = push(tmp);
  while (bytes == READ_SIZE && (bytes = read(fd, buf, READ_SIZE)) > 0)
    {
      buf[bytes] = '\0';
      if ((p = find(buf)) == -1)
	line = cat_alloc(line, buf);
      else
	{
	  tmp = push(&buf[p + 1]);
	  return (cat_alloc(line, buf));
	}
    }
  return (NULL);
}
