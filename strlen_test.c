/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:59:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/26 15:03:45 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define FILE "strlen"

void	strlen_test(void)
{
        int i;

        i = 1;
        print_test(ft_strlen("Salut"), strlen("Salut"), FILE, i++);
        print_test(ft_strlen("Salut 45678"), strlen("Salut 45678"), FILE, i++);
        print_test(ft_strlen(""), strlen(""), FILE, i++);
        print_test(ft_strlen("yutrvechnbgfv        "), strlen("yutrvechnbgfv        "), FILE, i++);
        print_test(ft_strlen("yutrvechnbgfv     \0   "), strlen("yutrvechnbgfv     \0   "), FILE, i++);
        print_test(ft_strlen("yutrvechnbgfv     \0  bgrvfds "), strlen("yutrvechnbgfv     \0  bgrvfds "), FILE, i++);
        print_test(ft_strlen("    uyrtrez"), strlen("    uyrtrez"), FILE, i++);

        printf("\n");

}