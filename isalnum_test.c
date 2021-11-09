/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:55:28 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/09 23:30:02 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_alnum"
# define MY_FT(a)	bool_test(ft_isalnum(a))
# define REAL_FT(a)	bool_test(isalnum(a))
# define PRINT_TEST	print_int_test

void	isalnum_test(void)
{
        int i;

        i = 1;
        PRINT_TEST(MY_FT(-65), REAL_FT(-65), FILE, i++);
        PRINT_TEST(MY_FT(-1), REAL_FT(-1), FILE, i++);
        PRINT_TEST(MY_FT(0), REAL_FT(0), FILE, i++);
        PRINT_TEST(MY_FT(47), REAL_FT(47), FILE, i++);
	PRINT_TEST(MY_FT(48), REAL_FT(48), FILE, i++);
        PRINT_TEST(MY_FT(56), REAL_FT(56), FILE, i++);
        PRINT_TEST(MY_FT(57), REAL_FT(57), FILE, i++);
        PRINT_TEST(MY_FT(30), REAL_FT(30), FILE, i++);
        PRINT_TEST(MY_FT(64), REAL_FT(64), FILE, i++);
        PRINT_TEST(MY_FT(65), REAL_FT(65), FILE, i++);
        PRINT_TEST(MY_FT(96), REAL_FT(96), FILE, i++);
        PRINT_TEST(MY_FT(97), REAL_FT(97), FILE, i++);
        PRINT_TEST(MY_FT(123), REAL_FT(123), FILE, i++);
        PRINT_TEST(MY_FT(255), REAL_FT(255), FILE, i++);
        printf("\n");

}
