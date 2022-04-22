/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:01:08 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/22 13:12:42 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

/**
 * @brief According to the format specifier %c, sends to the standard
 * output a single character.
 * @param c A character character
 * @return The length of the printed character (1).
 */
int	ft_print_c(int c);

/**
 * @brief According to the format specifiers %x and %X, sends to the standard
 * output a value in hexadecimal format, uppercsed (case %X)
 * or lowercased (case %x).
 * @param n A value, alphabetic or numeric.
 * @param format The format specifier: 'x' for lowercased hexadecimal or 'X'
 * for uppercased hexadecimal.
 * @return The length of the printed hexadecimal string.
 */
int	ft_print_hex(unsigned long int n, const char format);

/**
 * @brief According to the format specifiers %i and %d, sends to the standard
 * output a signed or unsigned decimal integer.
 * @param n A signed or unsigned decimal integer.
 * @return The length of the printed integer number.
 */
int	ft_print_num(int n);

/**
 * @brief According to the format specifier %s, sends to the standard output
 * a string.
 * @param s A character string.
 * @return The length of the printed string.
 */
int	ft_print_s(char *s);

/**
 * @brief According to the format specifier %u, sends to the standard output
 * an unsigned number. If the number is signed originally, it will be parsed to
 * unsigned inside the function.
 * @param n An integer number, signed or unsigned.
 * @return The length of the printed unsigned number.
 */
int	ft_print_u(int n);

/**
 * @brief According to the format specifier %p, sends to the standard output
 * in hexadecimal format, the value of a pointer. It's frecuently used to
 * print memory addresses.
 * @param n A value, alphabetic or numeric. 
 * @return The length of the printed hexadecimal value.
 */
int	ft_print_p(unsigned long int n);

/**
* @brief Sends a formatted string to the standard output (the display). 
* @param format String which contains the text to send to the standard ouput.
* If includes format specifiers (subsequences beginning with %), the
* additional arguments following format are formatted and inserted in the
* resulting string replacing their respective specifiers.
* @param additional Depending on the format string, the function may expect a
* sequence of additional arguments, each containing one value to be inserted
* instead of each %-tag specified in the format parameter (if any).
* There should be the same number of these arguments as the number of %-tags
* that expect a value.
* @returns int, which is the length of the message printed. 
*/
int	ft_printf(const char *format, ...);

#endif /* FT_PRINTF_H */
