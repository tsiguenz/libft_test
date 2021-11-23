/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:24 by thibautsi         #+#    #+#             */
/*   Updated: 2021/11/23 17:47:41 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	isprint_test();
	strlen_test();
	memset_test();
	bzero_test();
	memcpy_test();
	memmove_test();
	strlcpy_test();
	strlcat_test();
	toupper_test();
	tolower_test();
	strchr_test();
	strrchr_test();
	strncmp_test();
	memchr_test();
	memcmp_test();
	strnstr_test();
	atoi_test();
	calloc_test();
	strdup_test();
	substr_test();
	strjoin_test();
	strtrim_test();
	split_test();
//	itoa_test();
	return (0);
}
