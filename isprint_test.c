/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:44:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/09 23:33:31 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_print"
# define MY_FT(a)	bool_test(ft_isprint(a))
# define REAL_FT(a)	bool_test(isprint(a))
# define PRINT_TEST	print_int_test

void	isprint_test(void)
{
        int i;

        i = 1;
        PRINT_TEST(MY_FT(-255), REAL_FT(-255), FILE, i++);
        PRINT_TEST(MY_FT(-1), REAL_FT(-1), FILE, i++);
        PRINT_TEST(MY_FT(0), REAL_FT(0), FILE, i++);
        PRINT_TEST(MY_FT(31), REAL_FT(31), FILE, i++);
	PRINT_TEST(MY_FT(32), REAL_FT(32), FILE, i++);
        PRINT_TEST(MY_FT(75), REAL_FT(75), FILE, i++);
        PRINT_TEST(MY_FT(110), REAL_FT(110), FILE, i++);
        PRINT_TEST(MY_FT(127), REAL_FT(127), FILE, i++);
        PRINT_TEST(MY_FT(128), REAL_FT(128), FILE, i++);
        PRINT_TEST(MY_FT(255), REAL_FT(255), FILE, i++);
        printf("\n");
}
