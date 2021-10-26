/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:16:20 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/10/25 15:02:41 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# define RED      "\033[1;31m"
# define GREEN    "\033[1;32m"
# define DEFAULT_COLOR "\033[0;m"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../src/libft.h"

void    print_test(int my_ft, int real_ft, char *ft_name, int i);
void	isalpha_test(void);
void	isdigit_test(void);
void	isalnum_test(void);
void	isascii_test(void);
void	isprint_test(void);
void    strlen_test(void);

#endif //TEST_LIBFT_H