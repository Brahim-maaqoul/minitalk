/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:09:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/28 01:07:32 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	get_bits(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		usleep(300);
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
	}
}

static void	check_args(char **av)
{
	int	num;

	num = ft_atoi(av[1]);
	if (num <= 0)
	{
		ft_putstr_fd("You must enter a valid pid !", 2);
		exit (0);
	}
}

static void	handler(int sig)
{
	(void)sig;
	ft_putstr_fd("Signal received !", 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	if (ac == 3)
	{
		check_args(av);
		pid = ft_atoi(av[1]);
		signal(SIGUSR2, &handler);
		i = 0;
		while (av[2][i])
		{
			get_bits(pid, av[2][i]);
			i++;
			usleep(300);
		}
	}
	else
	{
		ft_putstr_fd("Invalid arguments !", 2);
		exit (0);
	}
	return (0);
}
