/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 23:41:19 by debian            #+#    #+#             */
/*   Updated: 2021/11/29 21:08:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strchr"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	strchr_test(void)
{
        int i = 1;

	const char	str1[] = "Hello World !";
	const char	str2[] = "";
	const char	str3[10] = "";
	char		str4[] = "bonjour";

	PRINT_STR_TEST(ft_strchr(str1, 'o'), strchr(str1, 'o'), FILE, i++);
	PRINT_PTR_TEST(ft_strchr(str1, 'o'), strchr(str1, 'o'), FILE, i++);
	PRINT_PTR_TEST(ft_strchr(str1, 'z'), strchr(str1, 'z'), FILE, i++);
	PRINT_PTR_TEST(ft_strchr(str2, 'o'), strchr(str2, 'o'), FILE, i++);
	PRINT_PTR_TEST(ft_strchr(str2, '\0'), strchr(str2, '\0'), FILE, i++);
	PRINT_STR_TEST(ft_strchr(str3, '\0'), strchr(str3, '\0'), FILE, i++);
	PRINT_PTR_TEST(ft_strchr(str4, '\0'), strchr(str4, '\0'), FILE, i++);
	printf("\n");
}
