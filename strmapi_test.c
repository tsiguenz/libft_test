/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:52:41 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/24 16:07:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strmapi"
# define PRINT_STR_TEST	print_str_test
# define PRINT_INT_TEST	print_int_test

char	mapi(unsigned int i, char c)
{
	return (c + i);
}

void	strmapi_test(void)
{
	int i = 1;
	const char	*str = ft_strmapi("aaaaaaaaaa", mapi);
	PRINT_STR_TEST(ft_strmapi("aaaaaaaaaa", mapi), "abcdefghij", FILE, i++);
	PRINT_STR_TEST(ft_strmapi("aaaaaaaaaa", mapi), "abcdefghij", FILE, i++);
	PRINT_INT_TEST(str[10], 0, FILE, i++);
	printf("\n");
}
