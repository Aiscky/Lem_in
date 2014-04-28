/*
** my_strcpy.c for my_strcpy in /home/woivre_t/rendu/Piscine-C-Jour_06
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Mon Oct  7 09:08:02 2013 Thibault Woivre
** Last update Tue Oct  8 21:44:01 2013 Thibault Woivre
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != 0)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}
