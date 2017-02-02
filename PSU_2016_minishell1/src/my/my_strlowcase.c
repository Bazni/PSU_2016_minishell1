/*
** my_strlowcase.c for my_strlowcase in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 20:27:05 2016 Gwendal Bazin
** Last update Mon Oct 10 20:27:38 2016 Gwendal Bazin
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
	{
	  str[i] = str[i] + 32;
	}
      i++;
    }
  return (str);
}
