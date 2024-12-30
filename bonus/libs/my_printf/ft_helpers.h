/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:31:07 by usogukpi          #+#    #+#             */
/*   Updated: 2024/12/30 18:31:08 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HELPERS_H
# define FT_HELPERS_H

# include <stdarg.h>

int		ft_put_char(char c);
int		ft_str_len(char *str);
int		ft_print_char(va_list args);
int		ft_print_str(va_list args);

int		ft_print_int(va_list args, char *base);
int		ft_print_uns(va_list args, char *base);

int		ft_print_adress(va_list args, char *base);

#endif