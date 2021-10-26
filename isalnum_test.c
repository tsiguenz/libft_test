/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:55:28 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/22 12:03:39 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_alnum"

void	isalnum_test(void)
{
        int i;

        i = 1;
        print_test(ft_isalnum(-65), isalnum(-65), FILE, i++);
        print_test(ft_isalnum(0), isalnum(0), FILE, i++);
        print_test(ft_isalnum(47), isalnum(47), FILE, i++);
	print_test(ft_isalnum(48), isalnum(48), FILE, i++);
        print_test(ft_isalnum(56), isalnum(56), FILE, i++);
        print_test(ft_isalnum(57), isalnum(57), FILE, i++);
        print_test(ft_isalnum(30), isalnum(30), FILE, i++);
        print_test(ft_isalnum(64), isalnum(64), FILE, i++);
        print_test(ft_isalnum(65), isalnum(65), FILE, i++);
        print_test(ft_isalnum(96), isalnum(96), FILE, i++);
        print_test(ft_isalnum(97), isalnum(97), FILE, i++);
        print_test(ft_isalnum(123), isalnum(123), FILE, i++);
        print_test(ft_isalnum(-2147483648), isalnum(-2147483648), FILE, i++);
        print_test(ft_isalnum(2147483647), isalnum(2147483647), FILE, i++);
        printf("\n");

}