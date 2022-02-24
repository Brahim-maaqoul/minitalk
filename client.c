/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:09:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/24 01:31:45 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	get_bits(int pid, char c)
{
	int	ch;

	while (c)
	{
		ch = c & 1;
		if (ch == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c = c >> 1;
	}
}

static void	check_args(int ac, char **av)
{
	int	i;
	int	num;

	i = 0;
	if (ac != 3)
	{	
		ft_putstr_fd("Invalid arguments !", 2);
		exit (1);
	}
	num = ft_atoi(av[1]);
	if (num <= 0)
	{
		ft_putstr_fd("You must enter a valid pid !", 2);
		exit (1);
	}
}

int main(int ac, char **av)
{
	// struct sigaction sa;
	// sigset_t sigset;
	// sa.sa_handler = catcher;
	// sigaction(SIGUSR1, &sa, NULL);
	// puts("before first kill()");
  	// kill(getpid(), SIGUSR1);
	// sigaddset(&sigset, SIGUSR1);
	// sigprocmask(SIG_SETMASK, &sigset, NULL);
	// kill(getpid(), SIGUSR1);
	// int i = 5>>3;
	int i = 0;
	int ch;
	int a = 65;
	int b = 0b10000000;
	while (a)
	{
		ch = a & b;
		printf("%c", (char)ch);
		a = a >> 1;
	}
}