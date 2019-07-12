#include <stdio.h>
#include <stdlib.h>


typedef struct		s_node {
	int				data;
	struct s_node	*next;
}					t_node;


void push(t_node** lst_du_main, int new_data) 
{ 
    t_node	*new_node; 
		
	if (!(new_node = (t_node*) malloc(sizeof(t_node))))
		return ;
    new_node->data = new_data; 
    new_node->next = *lst_du_main; 
    *lst_du_main = new_node; 
}

int main(int ac, char **av)
{
	(void)ac;
	t_node *lst;

	if (!(lst = (t_node *)malloc(sizeof(t_node))))
		return (-1);
	lst->next = NULL;
	push(&lst, 12);
	push(&lst, 42);
	push(&lst, 33);
	push(&lst, 1);
	/*lst->data = atoi(av[1]);*/

	while (lst->next)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
	return (0);
}
