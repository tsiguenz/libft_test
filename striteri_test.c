/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:57 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 16:34:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "striteri"
# define PRINT_STR_TEST	print_str_test
# define PRINT_INT_TEST	print_int_test

void	iteri(unsigned int i, char *c)
{
	*c = *c + i;
}

void	striteri_test(void)
{
	int 	i = 1;
	char	str[] = "aaaaaaaaaa";
	ft_striteri(str, iteri);
	PRINT_STR_TEST(str, "abcdefghij", FILE, i++);
	PRINT_INT_TEST(str[10], 0, FILE, i++);
	printf("\n");
}
