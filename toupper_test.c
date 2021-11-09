/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:30:28 by debian            #+#    #+#             */
/*   Updated: 2021/11/09 23:31:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "toupper"
# define MY_FT(a)	ft_toupper(a)
# define REAL_FT(a)	toupper(a)
# define PRINT_TEST	print_int_test

void	toupper_test(void)
{
        int i;

        i = 1;
        PRINT_TEST(MY_FT(0), REAL_FT(0), FILE, i++);
        PRINT_TEST(MY_FT(50), REAL_FT(50), FILE, i++);
        PRINT_TEST(MY_FT(97), REAL_FT(97), FILE, i++);
        PRINT_TEST(MY_FT(110), REAL_FT(110), FILE, i++);
        PRINT_TEST(MY_FT(122), REAL_FT(122), FILE, i++);
        PRINT_TEST(MY_FT(123), REAL_FT(123), FILE, i++);
        PRINT_TEST(MY_FT(255), REAL_FT(255), FILE, i++);
        printf("\n");

}

