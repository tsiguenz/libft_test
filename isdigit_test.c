/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:47:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/27 01:59:38 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "is_digit"
# define MY_FT(a)	bool_test(ft_isdigit(a))
# define REAL_FT(a)	bool_test(isdigit(a))

void	isdigit_test(void)
{
	int	i;

	i = 1;
	print_test(MY_FT(-1), REAL_FT(-1), FILE, i++);
	print_test(MY_FT(0), REAL_FT(0), FILE, i++);
	print_test(MY_FT(47), REAL_FT(47), FILE, i++);
	print_test(MY_FT(48), REAL_FT(48), FILE, i++);
	print_test(MY_FT(56), REAL_FT(56), FILE, i++);
	print_test(MY_FT(57), REAL_FT(57), FILE, i++);
	print_test(MY_FT(30), REAL_FT(30), FILE, i++);
	print_test(MY_FT(123), REAL_FT(123), FILE, i++);
	print_test(MY_FT(255), REAL_FT(255), FILE, i++);
	printf("\n");
}
