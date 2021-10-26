/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:08:03 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/25 14:43:45 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void    print_test(int my_ft, int real_ft, char *ft_name, int i)
{
    if (my_ft == real_ft)
    {
        printf(GREEN);
        if(i > 9)
            printf("OK %s %d : my_ft = %d, real_ft : %d\n", ft_name, i, my_ft, real_ft);
        else
            printf("OK %s 0%d : my_ft = %d, real_ft : %d\n", ft_name, i, my_ft, real_ft);
    } else 
    {
        printf(RED);
        if (i > 9)
            printf("K0 %s %d : my_ft = %d, real_ft : %d\n", ft_name, i, my_ft, real_ft);
        else
            printf("K0 %s 0%d : my_ft = %d, real_ft : %d\n", ft_name, i, my_ft, real_ft);
        }
    printf(DEFAULT_COLOR);
}