/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:02:51 by debian            #+#    #+#             */
/*   Updated: 2021/11/09 23:31:17 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "tolower"
# define MY_FT(a)	ft_tolower(a)
# define REAL_FT(a)	tolower(a)
# define PRINT_TEST	print_int_test

void	tolower_test(void)
{
        int i;

        i = 1;
        PRINT_TEST(MY_FT(0), REAL_FT(0), FILE, i++);
        PRINT_TEST(MY_FT(64), REAL_FT(64), FILE, i++);
        PRINT_TEST(MY_FT(65), REAL_FT(65), FILE, i++);
        PRINT_TEST(MY_FT(85), REAL_FT(85), FILE, i++);
        PRINT_TEST(MY_FT(90), REAL_FT(90), FILE, i++);
        PRINT_TEST(MY_FT(123), REAL_FT(123), FILE, i++);
        PRINT_TEST(MY_FT(255), REAL_FT(255), FILE, i++);
        printf("\n");

}
