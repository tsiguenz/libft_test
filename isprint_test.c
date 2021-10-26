/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:44:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/25 14:53:59 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_print"

void	isprint_test(void)
{
        int i;

        i = 1;
        print_test(ft_isprint(-1), isprint(-1), FILE, i++);
        print_test(ft_isprint(0), isprint(0), FILE, i++);
        print_test(ft_isprint(31), isprint(31), FILE, i++);
	    print_test(ft_isprint(32), isprint(32), FILE, i++);
        print_test(ft_isprint(75), isprint(75), FILE, i++);
        print_test(ft_isprint(110), isprint(110), FILE, i++);
        print_test(ft_isprint(127), isprint(127), FILE, i++);
        print_test(ft_isprint(128), isprint(128), FILE, i++);
        print_test(ft_isprint(-2147483648), isprint(-2147483648), FILE, i++);
        print_test(ft_isprint(2147483647), isprint(2147483647), FILE, i++);
        printf("\n");

}