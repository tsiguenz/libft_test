/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:43:52 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/22 19:01:51 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strdup"
# define PRINT_STR_TEST	print_str_test

void	strdup_test(void)
{
	int i = 1;

	char	mystr1[] = "Hello World";
	char	str1[] = "Hello World";
	char	mystr2[] = "";
	char	str2[] = "";

	PRINT_STR_TEST( ft_strdup(mystr1), strdup(str1), FILE, i++);
	PRINT_STR_TEST( ft_strdup(mystr2), strdup(str2), FILE, i++);
	printf("\n");
}
