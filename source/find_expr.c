/*
** find_expr.c for source in /home/woivre_t/rendu/prog_elem/lem_in/source
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Sat Apr 26 15:27:24 2014 Thibault Woivre
** Last update Mon Apr 28 13:18:35 2014 Thibault Woivre
*/

int		find_expr(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] != 0)
    {
      if (my_strncmp(&s1[i], s2, my_strlen(s2)) == 0)
        return (1);
      i++;
    }
  return (0);
}
