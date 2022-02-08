/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:31:46 by fgrossi           #+#    #+#             */
/*   Updated: 2022/02/08 15:51:10 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
size_t			ft_strlen(const char *s);
int				ft_putstr_v2(char *str);
int				ft_putnbr(int n);
int				ft_putperc(void);
int				ft_put_unsigned(unsigned int n);
unsigned int	ft_puthex(uintptr_t num, char lett);
int				ft_putchar(int c);
int				ft_len(uintptr_t n);

#endif
