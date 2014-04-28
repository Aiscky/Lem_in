/*
** my_strncmp.c for my_strncmp in /home/woivre_t/rendu/Piscine-C-Jour_06/ex_6
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Tue Oct  8 00:49:59 2013 Thibault Woivre
** Last update Tue Dec 17 13:43:46 2013 Thibault Woivre
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != 0 && n != 1)
    {
      i++;
      n--;
    }
  return (s1[i] - s2[i]);
}
