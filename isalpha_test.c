/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:07:27 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/22 12:04:03 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_alpha"

void	isalpha_test(void)
{
        int i;

        i = 1;
        print_test(ft_isalpha(-65), isalpha(-65), FILE, i++);
        print_test(ft_isalpha(0), isalpha(0), FILE, i++);
        print_test(ft_isalpha(64), isalpha(64), FILE, i++);
	print_test(ft_isalpha(65), isalpha(65), FILE, i++);
        print_test(ft_isalpha(96), isalpha(96), FILE, i++);
        print_test(ft_isalpha(97), isalpha(97), FILE, i++);
        print_test(ft_isalpha(122), isalpha(122), FILE, i++);
        print_test(ft_isalpha(123), isalpha(123), FILE, i++);
        print_test(ft_isalpha(-2147483648), isalpha(-2147483648), FILE, i++);
        print_test(ft_isalpha(2147483647), isalpha(2147483647), FILE, i++);
        printf("\n");
}