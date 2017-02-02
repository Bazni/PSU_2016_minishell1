/*
** my_strcapitalize.c for my_strcapitalize in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 20:32:44 2016 Gwendal Bazin
** Last update Mon Oct 10 21:02:48 2016 Gwendal Bazin
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if ((str[i - 1] == ' ') || (str[i - 1] == '+') || (str[i - 1] == '-'))
	{
	  if (str[i] >= 'a' && str[i] <= 'z')
	    str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
