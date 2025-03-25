/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:37:16 by eanella           #+#    #+#             */
/*   Updated: 2025/01/21 18:41:05 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	print_type(const char c, va_list args, int *count);
void	print_char(char c, int *count);
void	print_str(char *str, int *count);
void	print_ptr(unsigned long ptr, int *count);
void	print_num(int n, int *count);
void	print_uns_num(unsigned int n, int *count);
void	print_hex(unsigned int n, const char c, int *count);
char	*uns_itoa(unsigned int n);
char	*hex_itoa(unsigned long n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

#endif