/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:59:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/09 23:31:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strlen"
# define MY_FT(a)	ft_strlen(a)
# define REAL_FT(a)	strlen(a)
# define PRINT_TEST	print_int_test

void	strlen_test(void)
{
        int i;

        i = 1;
        PRINT_TEST(MY_FT("Salut"), REAL_FT("Salut"), FILE, i++);
        PRINT_TEST(MY_FT("Salut 45678"), REAL_FT("Salut 45678"), FILE, i++);
        PRINT_TEST(MY_FT(""), REAL_FT(""), FILE, i++);
        PRINT_TEST(MY_FT("yutrvechnbgfv        "), REAL_FT("yutrvechnbgfv        "), FILE, i++);
        PRINT_TEST(MY_FT("yutrvechnbgfv     \0   "), REAL_FT("yutrvechnbgfv     \0   "), FILE, i++);
        PRINT_TEST(MY_FT("yutrvechnbgfv     \0  bgrvfds "), REAL_FT("yutrvechnbgfv     \0  bgrvfds "), FILE, i++);
        PRINT_TEST(MY_FT("    uyrtrez"), REAL_FT("    uyrtrez"), FILE, i++);

        printf("\n");
}
