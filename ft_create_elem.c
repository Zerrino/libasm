#include "libasm.h"

t_list	*ft_create_elem(void *data)
{
		t_list  *new;

		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (0);
		new->data = data;
		new->next = 0;
		return (new);
}
