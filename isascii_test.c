/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:43:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/27 02:06:16 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_ascii"
# define MY_FT(a)	bool_test(ft_isascii(a))
# define REAL_FT(a)	bool_test(isascii(a))

void	isascii_test(void)
{
        int i;

        i = 1;
        print_test(MY_FT(-20), REAL_FT(-20), FILE, i++);
        print_test(MY_FT(-1), REAL_FT(-1), FILE, i++);
        print_test(MY_FT(0), REAL_FT(0), FILE, i++);
       	print_test(MY_FT(47), REAL_FT(47), FILE, i++);
	print_test(MY_FT(127), REAL_FT(127), FILE, i++);
        print_test(MY_FT(128), REAL_FT(128), FILE, i++);
        print_test(MY_FT(254), REAL_FT(254), FILE, i++);
        print_test(MY_FT(255), REAL_FT(255), FILE, i++);
        print_test(MY_FT(256), REAL_FT(256), FILE, i++);
        printf("\n");

}
