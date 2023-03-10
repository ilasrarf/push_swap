/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:47:24 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/03/10 20:22:07 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_norm
{
	int				i;
	int				j;
	int				rang;
	int				h;
}					t_norm;

typedef struct s_var
{
	int	size_a;
	int	size_b;
}		t_var;

typedef struct s_stk
{
	int				i;
	int				cnt;
	struct s_stk	*next;
}					t_stack;

int					ft_atoi(char *str, t_stack **s_a);
void				pars(char **args, t_stack **s_a);
void				ft_empty_arg(char *str);
void				ft_error_char(char **args);
int					ft_strlen(char *str);
void				ft_error_writer(char *str);
char				*ft_strdup(char *str);
char				*ft_strjoin(char *s1, char *s2);
void				*ft_calloc(size_t count, size_t size);
char				**ft_split(char const *s, char c);
char				*ft_substr(char *s, int start, int len);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
t_stack				*ft_lstnew(int cnt, int i);
int					ft_lstsize(t_stack *lst);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
void				ft_check_dup(t_stack **s_a);
int					ft_get_min(t_stack *s_a);
void				ft_def_index(t_stack *s_a);
void				ft_sort_index(t_stack *s_a);
void				ft_free(char **str);

/*--------The rules---------*/

void				ft_swap(t_stack **stk);
void				ft_push(t_stack **src, t_stack **dest);
void				ft_rotate(t_stack **stk);
void				ft_revers(t_stack **stk);

void				ft_sa(t_stack **s_a);
void				ft_sb(t_stack **s_b);
void				ft_ss(t_stack **s_a, t_stack **s_b);

void				ft_pa(t_stack **s_a, t_stack **s_b);
void				ft_pb(t_stack **s_a, t_stack **s_b);

void				ft_ra(t_stack **s_a);
void				ft_rb(t_stack **s_b);
void				ft_rr(t_stack **s_a, t_stack **s_b);

void				ft_rra(t_stack **s_a);
void				ft_rrb(t_stack **s_b);
void				ft_rrr(t_stack **s_a, t_stack **s_b);

void				ft_first_push_to_b(t_var *var, t_stack **s_a,
						t_stack **s_b);
void				ft_final_sort(t_stack **s_a, t_stack **s_b);
int					ft_cnt_inst(int pos, int size);
void				ft_push_too(t_stack **s_a, t_stack **s_b, int pos);
int					ft_get_max_index(t_stack **stk);
int					ft_get_be_max_index(t_stack **stk);
int					ft_get_pos(t_stack *stk, int indx);

void				ft_sort_3(t_stack **s_a);
void				ft_sort_5(t_stack **s_a, t_stack **s_b);
void				ft_sort_4(t_stack **s_a, t_stack **s_b);

void				ft_deja_msorty(t_stack **s_a);

void				ft_lstclear(t_stack **lst);
void				ft_lstdelone(t_stack *lst);

#endif