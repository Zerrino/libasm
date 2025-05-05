#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

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
	printf("size : %d\n", strcmp(st, st));

	char *sec = ft_strdup(st);
	//ft_strcpy(sec, st);
	ft_write(1, sec, 6);
	printf("len : %ld, %ld\n", ft_strlen(sec), ft_strlen(sec));
	free(sec);
	return 0;
}
