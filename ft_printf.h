/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:07:11 by hdougoud          #+#    #+#             */
/*   Updated: 2024/10/28 14:12:05 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	putchar_pf(char c, int value);
int	putstr_pf(char *s, int value);
int	putnbr_pf(int n, int *value);
int	unsigned_putnbr_pf(unsigned int n, int *value);
int	print_hex_pf(unsigned int un, int *value, char param);
int	write_pointer_pf(unsigned long un, int *value);

#endif