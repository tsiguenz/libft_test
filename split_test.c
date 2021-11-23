/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:11:11 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/23 17:35:54 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "split"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	split_test(void)
{
	int i = 1;

	const char	str1[] = "   Hello   World !  ";
	const char	str2[] = "Hello World !";
	const char	str3[] = "";

	PRINT_STR_TEST(ft_split(str1, ' ')[0], "Hello", FILE, i++);
	PRINT_STR_TEST(ft_split(str1, ' ')[1], "World", FILE, i++);
	PRINT_STR_TEST(ft_split(str1, ' ')[2], "!", FILE, i++);
	PRINT_STR_TEST(ft_split(str2, ' ')[0], "Hello", FILE, i++);
	PRINT_STR_TEST(ft_split(str2, ' ')[1], "World", FILE, i++);
	PRINT_PTR_TEST(ft_split(str3, ' ')[0], 0, FILE, i++);
	printf("\n");
}
