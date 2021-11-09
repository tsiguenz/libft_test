/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:16:20 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/09 23:51:05 by tsiguenz         ###   ########.fr       */
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
#include "../libft/libft.h"

void    print_int_test(int my_ft, int real_ft, char *ft_name, int i);
void    print_str_test(char *my_ft, char *real_ft, char *ft_name, int i);
int	bool_test(int c);
void	isalpha_test(void);
void	isdigit_test(void);
void	isalnum_test(void);
void	isascii_test(void);
void	isprint_test(void);
void    strlen_test(void);
void	memset_test(void);
void	tolower_test(void);
void	toupper_test(void);

#endif //TEST_LIBFT_H
