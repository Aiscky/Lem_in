/*
** graph.h for  in /u/guest/hotplug/hotplug
** 
** Made by guillaumE clauzon
** Login   <hotplug@epita.fr>
** 
** Started on  Mon Mar 17 00:50:30 2003 guillaumE clauzon
** Last update Mon Apr 28 17:10:29 2014 Thibault Woivre
*/


#ifndef			        GRAPH_H_
# define			GRAPH_H_

# include			<stdio.h>
# include			<stdlib.h>

struct				s_adj_list
{
  int				numero_sommet;
  int				nb_sommet_adjacent;
  int				*adjacents;
  char				*name;
  struct s_adj_list		*next;
};

typedef struct s_adj_list	t_adj_list;

struct				s_graph
{
  int				nb_sommet;
  int				start;
  int				end;
  t_adj_list			*adj_list;
};

typedef struct s_graph		t_graph;

struct				s_way
{
  int				*chemin;
  int				size;
  int				nb_fourmis;
};

typedef struct s_way		t_way;

int				get_wayinout(char *s, int wayinout[2], t_graph *graphe);

#endif
