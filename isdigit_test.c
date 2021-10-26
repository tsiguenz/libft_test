/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:47:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/22 11:52:58 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_digit"

void	isdigit_test(void)
{
        int i;

        i = 1;
        print_test(ft_isdigit(0), isdigit(0), FILE, i++);
        print_test(ft_isdigit(47), isdigit(47), FILE, i++);
	    print_test(ft_isdigit(48), isdigit(48), FILE, i++);
        print_test(ft_isdigit(56), isdigit(56), FILE, i++);
        print_test(ft_isdigit(57), isdigit(57), FILE, i++);
        print_test(ft_isdigit(30), isdigit(30), FILE, i++);
        print_test(ft_isdigit(123), isdigit(123), FILE, i++);
        print_test(ft_isdigit(-2147483648), isdigit(-2147483648), FILE, i++);
        print_test(ft_isdigit(2147483647), isdigit(2147483647), FILE, i++);
        printf("\n");

}