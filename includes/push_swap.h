#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdio.h"
# include "stdlib.h"
# include "string.h"
# include "limits.h"
# include "unistd.h"
# include "stdbool.h"
# include "../libft/libft.h"

typedef struct s_stack
{
	int		*a;
	int		*compression_a;
	int		*b;
	int		*compression_b;
	size_t	head_a;
	size_t	head_b;
	size_t	pb_count;
}	t_stack;

typedef struct s_info
{
	size_t	argc;
	char	**argv;
	t_stack	stack;
}	t_info;

//stack_argv.c
void	*xmalloc(t_info *info, size_t size);
void	stack_argv(t_info *info);
void	stack_memory_allocate(t_info *info, size_t size);

//compression_array.c
void	compression_array(t_info *info);

//sort_case_two.c
void	sort_case_two(t_info *info);

//sort_case_thre.c
void	sort_case_three(t_info *info);
void	sort_case_three_b(t_info *info);

//sort_case_under_six.c
void	sort_case_under_six(t_info *info);

//sort_case_over_seven.c
void	sort_case_over_seven(t_info *info);

//operation_swap.c
void	sa(t_info *info);
void	sb(t_info *info);

//operation_rotate.c
void	ra(t_info *info);
void	rb(t_info *info);

//operation_reverse_rotate.c
void	rra(t_info *info);
void	rrb(t_info *info);

//operation_push.c
void	pb(t_info *info);
void	pa(t_info *info);

//ps_atoi.c
void	error_message_and_exit(t_info *info);
int		ps_atoi(const char *str, t_info *info);

//check_duplicate.c
void	check_duplicate(t_info *info);

//is_sorted.c
void	is_sorted(t_info *info);

//error_message.c
void	error_message(t_info *info);

//free.c
void	free_element(t_info *info);

#endif