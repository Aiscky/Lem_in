/*
** my_strdup.c for my_strdup in /home/woivre_t/rendu/Piscine-C-Jour_08/ex_01
**
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
**
** Started on  Thu Oct 10 08:17:54 2013 Thibault Woivre
** Last update Mon Mar 31 13:32:56 2014 Thibault Woivre
*/

#include	"source.h"

char		*my_strdup(char *src)
{
  char		*str;
  int		n;

  n = 0;
  str = xmalloc(my_strlen(src) + 1);
  while (src[n])
    {
      str[n] = src[n];
      n++;
    }
  str[n] = 0;
  return (str);
}
