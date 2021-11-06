/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:30:28 by debian            #+#    #+#             */
/*   Updated: 2021/11/06 02:32:41 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "toupper"
# define MY_FT(a)	ft_toupper(a)
# define REAL_FT(a)	toupper(a)

void	toupper_test(void)
{
        int i;

        i = 1;
        print_test(MY_FT(0), REAL_FT(0), FILE, i++);
        print_test(MY_FT(50), REAL_FT(50), FILE, i++);
        print_test(MY_FT(97), REAL_FT(97), FILE, i++);
        print_test(MY_FT(110), REAL_FT(110), FILE, i++);
        print_test(MY_FT(122), REAL_FT(122), FILE, i++);
        print_test(MY_FT(123), REAL_FT(123), FILE, i++);
        print_test(MY_FT(255), REAL_FT(255), FILE, i++);
        printf("\n");

}

