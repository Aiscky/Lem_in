/*
** graph2.c for lem_in in /home/woivre_t/rendu/prog_elem/lem_in
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Sat Apr 26 14:53:57 2014 Thibault Woivre
** Last update Mon Apr 28 16:58:14 2014 Thibault Woivre
*/

#include	"graph.h"

int		get_salle(t_graph **graphe, int wayinout[2], char *s)
{
  int		nb_salle;
  char		**tab;

  if (s[0] != '#')
    {
      tab = check_salle(*graphe, s);
      nb_salle = add_room(graphe, tab);
      wayinout[0] == 1 ? (*graphe)->start = nb_salle : 0;
      wayinout[0] == 1 ? wayinout[0] = 0 : 0;
      wayinout[1] == 1 ? (*graphe)->end = nb_salle : 0;
      wayinout[1] == 1 ? wayinout[1] = 0 : 0;
    }
  get_wayinout(s, wayinout, *graphe);
  free(s);
  return (0);
}

int		cut_salle(char **salle1, char **salle2, char *s)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (s[i] && s[i] != '-')
    i++;
  if (s[i] == 0)
    {
      my_putstr("Usage: salle1-salle2\n");
      exit(1);
    }
  *salle1 = xmalloc(i + 1);
  my_strncpy(*salle1, s, i);
  i++;
  while (s[i + j])
    j++;
  *salle2 = xmalloc(j + 1);
  my_strcpy(*salle2, &s[i]);
  return (0);
}

int		check_tube(t_graph *graphe, char *s)
{
  t_adj_list	*list;
  int		*tab_salle;
  char		*salle1;
  char		*salle2;

  tab_salle = xmalloc(8);
  cut_salle(&salle1, &salle2, s);
  list = graphe->adj_list;
  while (list != NULL && my_strcmp(list->name, salle1))
    list = list->next;
  if (list == NULL)
    aff_exit("You can't link rooms that haven't been declared\n");
  tab_salle[0] = list->numero_sommet;
  list = graphe->adj_list;
  while (graphe != NULL && my_strcmp(list->name, salle2))
    list = list->next;
  if (list == NULL)
    {
      my_putstr("You can't link rooms that haven't been declared\n");
      exit(1);
    }
  tab_salle[1] = list->numero_sommet;
  return (tab_salle);
}

int		add_liaison(int *tab_salle, t_graph *graphe)
{
  t_adj_list	*list;
  t_adj_list	*begin;

  list = graphe->adj_list;
  while (list->numero_sommet != tab_salle[0])
    list = list->next;
  if (check_tab(tab_salle[1], list->adjacents, list->nb_sommet_adjacent))
    {
      aff_liaison(tab_salle);
      my_putstr(": Warning: Link already exist\n");
      return (0);
    }
  list->adjacents = realloc(list->adjacents,
			    (list->nb_sommet_adjacent + 1) * 4);
  list->adjacents[list->nb_sommet_adjacent] = tab_salle[1];
  list->nb_sommet_adjacent += 1;
  list = graphe->adj_list;
  while (list->numero_sommet != tab_salle[1])
    list = list->next;
  list->adjacents = realloc(list->adjacents,
			    (list->nb_sommet_adjacent + 1) * 4);
  list->adjacents[list->nb_sommet_adjacent] = tab_salle[0];
  list->nb_sommet_adjacent += 1;
  return (0);
}

int		get_tube(t_graph *graphe, char *s)
{
  char		**tab;
  int		*tab_salle;

  if (s[0] != '#')
    {
      tab_salle = check_tube(graphe, s);
      if (tab_salle[0] == tab_salle[1])
	{
	  my_putstr(s);
	  my_putstr(": Warning: You linked a room to itself\n");
	}
      else
	add_liaison(tab_salle, graphe);
    }
  free(s);
  return (0);
}
