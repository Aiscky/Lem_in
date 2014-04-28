/*
** my_str_isnum.c for my_str_isnum in /home/woivre_t/rendu/Piscine-C-Jour_06/ex_11
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Tue Oct  8 15:22:08 2013 Thibault Woivre
** Last update Sun Apr 13 14:59:01 2014 Thibault Woivre
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (str[0] == 0)
    return (1);
  while (str[i] != 0)
    {
      if ((str[i] > '9' || str[i] < '0') && str[i] != '-')
	return (0);
      i = i + 1;
    }
  return (1);
}
