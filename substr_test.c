/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:04:28 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/22 19:28:36 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "substr"
# define PRINT_STR_TEST	print_str_test

void	substr_test(void)
{
	int i = 1;

	char	str1[] = "Hello World";
	char	str2[] = "";

	PRINT_STR_TEST( ft_substr(str1, 6, 5), "World", FILE, i++);
	PRINT_STR_TEST( ft_substr(str2, 0, 0), "", FILE, i++);
	printf("\n");
}
