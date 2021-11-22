/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:06:54 by debian            #+#    #+#             */
/*   Updated: 2021/11/22 23:07:13 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "calloc"
# define PRINT_TAB_TEST	print_tab_test
# define PRINT_STR_TEST	print_str_test

void	calloc_test(void)
{
	int i = 1;

	int	*mytab1 = ft_calloc(5, 4);
	int	*tab1 = calloc(5, 4);
	char	*mystr1 = ft_calloc(10, 1);
	char	*str1 = calloc(10, 1);
	
	PRINT_TAB_TEST( mytab1, tab1, 5, FILE, i++);
	PRINT_STR_TEST( mystr1, str1, FILE, i++);
	free(mytab1);
	free(tab1);
	free(mystr1);
	free(str1);
	printf("\n");
}
