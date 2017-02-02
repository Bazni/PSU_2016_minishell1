/*
** my_strcpy.c for my_strcpy in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 08:54:09 2016 Gwendal Bazin
** Last update Tue Oct 11 17:45:29 2016 Gwendal Bazin
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  if (dest[i] != '\0')
    {
      dest[i] = '\0';
    }
  return (dest);
}
