/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:32:52 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/24 01:23:57 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
#include <stdio.h>

int	ft_atoi(const char	*str);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
static int	ft_len(long int n);
void	ft_putnbr_base(int	nbr, char	*base);
#endif