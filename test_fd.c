/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:24:31 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/11/26 15:33:31 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
# define PRINT_STR_TEST	print_str_test
# define FILE "test_fd"

void	fd_test()
{
	int		i = 1;
	int		ret = 0;
	int		fd = open("test_fd.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	char	str[BUFF_SIZE + 1];
// Set the file
	ft_putchar_fd('a', fd);
	ft_putstr_fd("putstr", fd);
	ft_putendl_fd("putendl", fd);
	ft_putnbr_fd(42, fd);
	close(fd);
// Set str
	fd = open("test_fd.txt", O_RDONLY);
	ret = read(fd, str, BUFF_SIZE);
	str[ret] = 0;
	close(fd);
// Tests
	PRINT_STR_TEST(str, "aputstrputendl\n42", FILE, i);
	remove("test_fd.txt");
	printf("\n");
}
