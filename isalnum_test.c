/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:55:28 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/27 02:03:10 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_alnum"
# define MY_FT(a)	bool_test(ft_isalnum(a))
# define REAL_FT(a)	bool_test(isalnum(a))

void	isalnum_test(void)
{
        int i;

        i = 1;
        print_test(MY_FT(-65), REAL_FT(-65), FILE, i++);
        print_test(MY_FT(-1), REAL_FT(-1), FILE, i++);
        print_test(MY_FT(0), REAL_FT(0), FILE, i++);
        print_test(MY_FT(47), REAL_FT(47), FILE, i++);
	print_test(MY_FT(48), REAL_FT(48), FILE, i++);
        print_test(MY_FT(56), REAL_FT(56), FILE, i++);
        print_test(MY_FT(57), REAL_FT(57), FILE, i++);
        print_test(MY_FT(30), REAL_FT(30), FILE, i++);
        print_test(MY_FT(64), REAL_FT(64), FILE, i++);
        print_test(MY_FT(65), REAL_FT(65), FILE, i++);
        print_test(MY_FT(96), REAL_FT(96), FILE, i++);
        print_test(MY_FT(97), REAL_FT(97), FILE, i++);
        print_test(MY_FT(123), REAL_FT(123), FILE, i++);
        print_test(MY_FT(255), REAL_FT(255), FILE, i++);
        printf("\n");

}
