/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:41:13 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/10 00:41:54 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "memset"
# define PRINT_TEST	print_str_test

void	memset_test(void)
{
        int i = 1;
	char    mystr1[50] = "Salut";
//	int     mytab1[5] = {10, 11, 12, 13, 14};
	char    str1[50] = "Salut";
//	int     tab1[5] = {10, 11, 12, 13, 14};



	PRINT_TEST(ft_memset(mystr1, '0', 30), memset(str1, '0', 30), FILE, i++);
	PRINT_TEST(mystr1, str1, FILE, i++);
//	PRINT_TEST(ft_memset(mytab1, 0, 3), memset(tab1, 0, 3), FILE, i++);
//	PRINT_TEST(mytab1, tab1, FILE, i++);
        printf("\n");
}
