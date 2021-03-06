/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:29:32 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/06 15:27:35 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (**argv)
		{
			ft_putchar(**argv);
			(*argv)++;
		}
	}
	ft_putchar('\n');
	return (0);
}
