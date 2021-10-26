/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:43:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/25 14:44:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_ascii"

void	isascii_test(void)
{
        int i;

        i = 1;
        print_test(ft_isascii(-20), isascii(-20), FILE, i++);
        print_test(ft_isascii(0), isascii(0), FILE, i++);
        print_test(ft_isascii(47), isascii(47), FILE, i++);
	    print_test(ft_isascii(127), isascii(127), FILE, i++);
        print_test(ft_isascii(128), isascii(128), FILE, i++);
        print_test(ft_isascii(254), isascii(254), FILE, i++);
        print_test(ft_isascii(255), isascii(255), FILE, i++);
        print_test(ft_isascii(256), isascii(256), FILE, i++);
        print_test(ft_isascii(-2147483648), isascii(-2147483648), FILE, i++);
        print_test(ft_isascii(2147483647), isascii(2147483647), FILE, i++);
        printf("\n");

}