/*
** get_next_line.c for get_next_line in /home/woivre_t/rendu/get_nbext_line-2017-woivre_t
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Mon Nov 18 10:58:45 2013 Thibault Woivre
** Last update Mon Apr 28 17:04:38 2014 Thibault Woivre
*/

#include	"get_next_line.h"

char		*get_next_line(const int fd)
{
  static char	buffer[BUFFER_SIZE];
  static int	i = 0;
  static int	flag = 0;
  static int	k = 0;

  if (fd == -1)
    return (NULL);
  if (flag == 0)
    {
      k = read(fd, buffer, BUFFER_SIZE);
      flag = 1;
    }
  if (k == -1)
    return (NULL);
  return (creat_str(&flag, &i, &k, buffer));
}

char		*creat_str(int *flag, int *i, int *k, char *buffer)
{
  int		j;
  char		*str;

  j = 0;
  while (*i + j != *k && (buffer[*i + j] != '\n' && buffer[*i + j] != '\0'))
    j++;
  if (*i + j == *k)
    *flag = 0;
  if (j != 0)
    str = xmalloc(j + 1);
  else
    return (NULL);
  j = 0;
  while (*i != *k && buffer[*i] != '\n' && buffer[*i] != '\0')
    {
      str[j] = buffer[*i];
      *i = *i + 1;
      j++;
    }
  str[j] = 0;
  buffer[*i] == '\n' ? *i = *i + 1 : 1;
  return (str);
}
