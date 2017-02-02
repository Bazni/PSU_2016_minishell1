/*
** my_strncpy.c for my_strncpy gwendal.bazin in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 10:15:23 2016 Gwendal Bazin
** Last update Tue Oct 11 19:56:02 2016 Gwendal Bazin
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != 0 && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
