/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:45:10 by debian            #+#    #+#             */
/*   Updated: 2021/11/17 01:48:12 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strrchr"
# define PRINT_PTR_TEST	print_ptr_test
# define PRINT_STR_TEST	print_str_test

void	strrchr_test(void)
{
        int i = 1;

	const char	str1[] = "Hello World !";
	const char	str2[] = "";
	const char	str3[10] = "";

	PRINT_STR_TEST(ft_strrchr(str1, 'o'), strrchr(str1, 'o'), FILE, i++);
	PRINT_PTR_TEST(ft_strrchr(str1, 'o'), strrchr(str1, 'o'), FILE, i++);
	PRINT_PTR_TEST(ft_strrchr(str1, 'z'), strrchr(str1, 'z'), FILE, i++);
	PRINT_PTR_TEST(ft_strrchr(str2, 'o'), strrchr(str2, 'o'), FILE, i++);
	PRINT_PTR_TEST(ft_strrchr(str2, '\0'), strrchr(str2, '\0'), FILE, i++);
	PRINT_STR_TEST(ft_strrchr(str3, '\0'), strrchr(str3, '\0'), FILE, i++);
	printf("\n");
}
