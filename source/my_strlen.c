/*
** my_strlen.c for my_strlen in /home/woivre_t/rendu/Piscine-C-Jour_04
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Thu Oct  3 11:23:14 2013 Thibault Woivre
** Last update Fri Oct  4 18:51:12 2013 Thibault Woivre
*/
int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
