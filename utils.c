/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:08:03 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/17 01:19:24 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void    print_int_test(int my_ft, int real_ft, char *ft_name, int i)
{
	if (my_ft == real_ft)
	{
		printf(GREEN);
		printf("OK %s %d : my_ft = [%d] real_ft :[%d]\n", ft_name, i, my_ft, real_ft);
	} else 
	{
        	printf(RED);
		printf("K0 %s %d : my_ft = [%d] real_ft : [%d]\n", ft_name, i, my_ft, real_ft);
	}
}

void	print_str_test(char *my_str, char *real_str, char *ft_name, int i)
{
	if (!strcmp(my_str, real_str))
	{
		printf(GREEN);
		printf("OK %s %d : my_str = [%s] real_str : [%s]\n", ft_name, i, my_str, real_str);
	} else 
	{
		printf(RED);
		printf("K0 %s %d : my_str = [%s] real_str : [%s]\n", ft_name, i, my_str, real_str);
	}
}
void	print_tab_test(int *my_tab, int *real_tab, int tab_len, char *ft_name, int i)
{
	if (!tab_cmp(my_tab, real_tab, tab_len))
	{
		printf(GREEN);
		printf("OK %s %d : my_tab = [", ft_name, i);
	} else
	{
		printf(RED);
		printf("KO %s %d : my_tab = [", ft_name, i);
	}
	print_int_tab(my_tab, tab_len);
	printf("] real_tab : ["); 
	print_int_tab(real_tab, tab_len);
	printf("]\n");
}

int	bool_test(int i)
{
	return(i == 0) ? 0 : 1;
}

int	tab_cmp(int *tab1, int *tab2, int tab_len)
{
	int	i;

	i = 0;
	while(i < tab_len)
	{
		if(tab1[i] != tab2[i])
			return (1);
		i++;
	}
	return (0);
}

void	print_int_tab(int *tab, int tab_len)
{
	int	i;

	i = 0;
	while(i < tab_len)
	{
		printf("%d", tab[i]);
		if(i != tab_len -1)
			printf(" ");
		i++;
	}
}

void	print_ptr_test(void *my_ptr, void *real_ptr, char *ft_name, int i)
{
	if (my_ptr == real_ptr)
	{
		printf(GREEN);
		printf("OK %s %d : my_ptr = [%p] real_ptr : [%p]\n", ft_name, i, my_ptr, real_ptr);
	} else 
	{
		printf(RED);
		printf("K0 %s %d : my_ptr = [%p] real_ptr : [%p]\n", ft_name, i, my_ptr, real_ptr);
	}
}
