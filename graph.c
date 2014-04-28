/*
** graph.c for lem_in in /home/woivre_t/rendu/prog_elem/lem_in
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Sat Apr 26 13:02:20 2014 Thibault Woivre
** Last update Mon Apr 28 17:10:25 2014 Thibault Woivre
*/

#include	"graph.h"

t_graph		*creat_graphe()
{
  t_graph	*graphe;

  graphe = xmalloc(sizeof(*graphe));
  graphe->nb_sommet = 0;
  graphe->adj_list = NULL;
  graphe->start = -1;
  graphe->end = -1;
  return (graphe);
}

int		get_wayinout(char *s, int wayinout[2], t_graph *graphe)
{
  if (!my_strcmp("##start", s) && graphe->start == -1)
    wayinout[0] = 1;
  else if (my_strcmp("##start", s) == 0 && graphe->start != -1)
    {
      my_putstr("The anthill can only have one entrance\n");
      exit(1);
    }
  if (!my_strcmp("##end", s) && graphe->end == -1)
    wayinout[1] = 1;
  else if (!my_strcmp("##end", s) && graphe->end != -1)
    {
      my_putstr("The anthill can only have one way out\n");
      exit(1);
    }
  return (0);
}

char		**check_salle(t_graph *graphe, char *s)
{
  int		nb_salle;
  char		**tab;
  t_adj_list	*list;

  tab = my_str_to_wordtab(s);
  list = graphe->adj_list;
  if (my_tablen(tab) != 3)
    {
      my_putstr("Usage: nb_room coord-x coord-y\\n");
      exit(1);
    }
  while (list != NULL)
    {
      if (my_strcmp(tab[0], list->name) == 0)
	{
	  my_putstr("You can't use the same room multiple time");
	  exit(1);
	}
      list = list->next;
    }
  return (tab);
}

int		*add_room(t_graph **graphe, char **tab)
{
  t_adj_list	*cursor;
  t_adj_list	*list;

  list = xmalloc(sizeof(*list));
  list->numero_sommet = (*graphe)->nb_sommet;
  (*graphe)->nb_sommet += 1;
  list->name = my_strdup(tab[0]);
  list->nb_sommet_adjacent = 0;
  list->adjacents = NULL;
  list->next = NULL;
  if ((*graphe)->adj_list != NULL)
    {
      cursor = (*graphe)->adj_list;
      while (cursor->next != NULL)
	cursor = cursor->next;
      cursor->next = list;
    }
  else
    (*graphe)->adj_list = list;
  return (list->numero_sommet);
}

t_graph		*perl_to_graph()
{
  char		*s;
  t_graph	*graphe;
  int		nb_salle;
  int		wayinout[2];

  graphe = creat_graphe();
  wayinout[0] = 0;
  wayinout[1] = 0;
  while ((s = get_next_line(0)) != NULL && !find_expr(s, "-"))
    get_salle(&graphe, wayinout, s);
  if (s != NULL)
    get_tube(graphe, s);
  while ((s = get_next_line(0)) != NULL)
    get_tube(graphe, s);
  if (graphe->start == -1 || graphe->end == -1)
    {
      my_putstr("You have to set the entrance and the exit of the anthill: ");
      my_putstr("use ##start and ##end\n");
      exit(1);
    }
  if (graphe->start == graphe->end)
    aff_exit("The entrance and the exit can't be the same\n");
  return (graphe);
}
