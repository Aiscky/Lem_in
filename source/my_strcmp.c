/*
** my_strcmp.c for my_strcmp in /home/woivre_t/rendu/Piscine-C-Jour_06/ex_5
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Mon Oct  7 23:22:04 2013 Thibault Woivre
** Last update Mon Mar 31 13:22:03 2014 Thibault Woivre
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != 0)
    i++;
  return (s1[i] - s2[i]);
}
