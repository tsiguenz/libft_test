/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:15:47 by debian            #+#    #+#             */
/*   Updated: 2021/11/15 02:16:00 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "memcpy"
# define PRINT_STR_TEST	print_str_test
# define PRINT_TAB_TEST	print_tab_test

void	memcpy_test(void)
{
        int i = 1;

	char	mysrc1[12] = "Hello World";
	char	src1[12] = "Hello World";
	char	mydest1[12];
	char	dest1[12];
	int	mysrc2[5] = {10, 11, 12, 13, 14};
	int	src2[5] = {10, 11, 12, 13, 14};
	int	mydest2[5];
	int	dest2[5];
	char	mystring[] = "stackoverflow";
	char	*p_string1 = mystring;
	char	string[] = "stackoverflow";
	char	*p_string2 = string;

	PRINT_STR_TEST(ft_memcpy(mydest1, mysrc1, 12), memcpy(dest1, src1, 12), FILE, i++);
	PRINT_STR_TEST(mydest1, dest1, FILE, i++);
	PRINT_TAB_TEST(ft_memcpy(mydest2, mysrc2, 20), memcpy(dest2, src2, 20), 5, FILE, i++);
	PRINT_TAB_TEST(mydest2, dest2, 5, FILE, i++);
	ft_memcpy(p_string1 + 5, p_string1, 7);
	puts(mystring);
	memcpy(p_string2 + 5, p_string2, 7);
	puts(string);
	printf("\n");
}
