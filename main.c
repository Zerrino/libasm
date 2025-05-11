#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>


void free_list(t_list *list)
{
    t_list *tmp;
    while (list)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}


int cmp_str(void *a, void *b)
{
    return strcmp((char*)a, (char*)b);
}

int cmp_str_2(void *a, void *b)
{
    printf("function called!\n");
    printf("rdi : %s, rsi : %s\n", (char *)a, (char *)b);
    return strcmp((char*)a, (char*)b);
}

void my_free(void *ptr)
{
    printf("function de nottoyage appele pour : %s\n", (char *)ptr);
    (void)ptr;
}


void hey(void)
{
    t_list *lst = NULL;
    // on construit une liste : "Troisième" -> "Deuxième" -> "Premier"
    //ft_list_push_front(&lst, "Sixième");
    //ft_list_push_front(&lst, "Cinqième");
    ft_list_push_front(&lst, "ZZZ");
    ft_list_push_front(&lst, "ZZZ");
    ft_list_push_front(&lst, "ZZZ");
    ft_list_push_front(&lst, "ZZZ");
    ft_list_push_front(&lst, "ZZZ");
    ft_list_push_front(&lst, "ZZZ");
    ft_list_push_front(&lst, "ZZZ");

    ft_list_sort(&lst, cmp_str);
    printf("(%d éléments) :\n", ft_list_size(lst));
    ft_list_remove_if(&lst, "ZZZ", cmp_str_2, my_free);

    printf("\nSuppression des \"Z\"...  (%d éléments) :\n", ft_list_size(lst));
    for (t_list *n = lst; n; n = n->next)
        printf(" - %s\n", (char*)n->data);
    free_list(lst);
}


int	main(void)
{

	char *st = "sallt\n";
	//char *xs = "saxllt\n";
	char te[10] = {0};
	ft_write(1, st, 6);
	//int a = ft_strlen(st);
	//printf("value : %d\n", a);
	//ft_strcpy(te, st);
	ft_write(1, ft_strcpy(te, st), 6);
	printf("len : %ld, %ld\n", ft_strlen(st), ft_strlen(te));
	printf("len : %ld, %ld\n", strlen(st), strlen(te));
	printf("size : %d\n", ft_strcmp(st, st));
	ft_strcmp(st, te);
	//printf("size : %d\n", strcmp(st, st));

	char *sec = ft_strdup(st);
	//ft_strcpy(sec, st);
	ft_write(1, sec, 6);
	printf("len : %ld, %ld\n", ft_strlen(sec), ft_strlen(sec));
	free(sec);
	hey();
	return 0;
}

