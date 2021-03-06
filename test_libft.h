/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:16:20 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/26 12:47:04 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# define RED      "\033[1;31m"
# define GREEN    "\033[1;32m"
# define DEFAULT_COLOR "\033[0;m"
# define BUFF_SIZE 17

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../libft/libft.h"
#ifdef __linux__
	#include <bsd/string.h>
#else
	#include <string.h>
#endif
//utils fct

void    print_int_test(int my_ft, int real_ft, char *ft_name, int i);
void    print_str_test(char *my_ft, char *real_ft, char *ft_name, int i);
void	print_tab_test(int *my_tab, int *real_tab, int tab_len, char *ft_name, int i);
void	print_int_tab(int *tab, int tab_len);
int		bool_test(int c);
int		tab_cmp(int *tab1, int *tab2, int tab_len);
void	print_ptr_test(void *my_ptr, void *real_ptr, char *ft_name, int i);

// libft fct

void	isalpha_test(void);
void	isdigit_test(void);
void	isalnum_test(void);
void	isascii_test(void);
void	isprint_test(void);
void    strlen_test(void);
void	memset_test(void);
void	bzero_test(void);
void	memcpy_test(void);
void	memmove_test(void);
void	strlcpy_test(void);
void	strlcat_test(void);
void	tolower_test(void);
void	toupper_test(void);
void	strchr_test(void);
void	strrchr_test(void);
void	strncmp_test(void);
void	memchr_test(void);
void	memcmp_test(void);
void	strnstr_test(void);
void	atoi_test(void);
void	calloc_test(void);
void	strdup_test(void);
void	substr_test(void);
void	strjoin_test(void);
void	strtrim_test(void);
void	split_test(void);
void	itoa_test(void);
void	strmapi_test(void);
void	striteri_test(void);
void	fd_test(void);
void	lst_test(void);

#endif //TEST_LIBFT_H
