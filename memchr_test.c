/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:15:37 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/17 16:06:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "memchr"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	memchr_test(void)
{
        int i = 1;

	char	str1[] = "Hello World !";
	char	str2[] = "";
	int	tab[3] = {1, 5, 10};

	PRINT_PTR_TEST(ft_memchr(str1, 'o', 3), memchr(str1, 'o', 3), FILE, i++);
	PRINT_PTR_TEST(ft_memchr(str1, 'z', 3), memchr(str1, 'z', 3), FILE, i++);
	PRINT_PTR_TEST(ft_memchr(str2, 'o', 1), memchr(str2, 'o', 1), FILE, i++);
	PRINT_PTR_TEST(ft_memchr(str2, '\0', 1), memchr(str2, '\0', 1), FILE, i++);
	PRINT_PTR_TEST(ft_memchr(tab, 10, 12), memchr(tab, 10, 12), FILE, i++);
	PRINT_PTR_TEST(ft_memchr(tab, 5, 4), memchr(tab, 5, 4), FILE, i++);
	printf("\n");
}
