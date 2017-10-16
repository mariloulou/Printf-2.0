/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:30:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/28 09:41:06 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>

void	ft_min(char *test)
{	
	char	c = 'a';
	int d = 42;
	int i = 42;
	int o = 42;
	int u = 42;
	char *s = "Je suis une string.";

	if (strcmp(test, "c") == 0)
	{
		ft_printf("%c", c);
		printf("\n------\n%c", c);
	}	
	else if (strcmp(test, "d") == 0)
	{
		ft_printf("%d", d);
		printf("\n------\n%d", d);
	}
	else if (strcmp(test, "i") == 0)
	{
		ft_printf("%i", i);
		printf("\n------\n%i", i);
	}
	else if (strcmp(test, "o") == 0)
	{
		ft_printf("%o", o);
		printf("\n------\n%o", o);
	}
	else if (strcmp(test, "p") == 0)
	{
		ft_printf("%p", &s);
		printf("\n------\n%p", &s);
	}
	else if (strcmp(test, "s") == 0)
	{
		ft_printf("uuu%suuu", s);
		printf("\n------\nuuu%suuu", s);
	}
	else if (strcmp(test, "u") == 0)
	{
		ft_printf("%u", u);
		printf("\n------\n%u", u);
	}
	else if (strcmp(test, "x") == 0)
	{
		ft_printf("%x", d);
		printf("\n------\n%x", d);
	}
	return ;
}

void	ft_maj(char *test)
{
	wchar_t cmaj = 945;
	wchar_t *smaj = L"안녕하세요";	unsigned int dmaj = 42;	unsigned int umaj = 42;
	int	omaj = 42;
	int d = 42;

	if (strcmp(test, "C") == 0)
	{
		ft_printf("%C", cmaj);
		printf("\n------\n%C", cmaj);
	}
	else if (strcmp(test, "D") == 0)
	{
		ft_printf("%D", dmaj);
		printf("\n------\n%D", dmaj);
	}
	else if (strcmp(test, "O") == 0)
	{
		ft_printf("%O", omaj);
		printf("\n------\n%O", omaj);
	}
	else if (strcmp(test, "S") == 0)
	{
		ft_printf("%S", smaj);
		printf("\n------\n%S", smaj);
	}
	else if (strcmp(test, "U") == 0)
	{
		ft_printf("%U", umaj);
		printf("\n------\n%U", umaj);
	}
	else if (strcmp(test, "X") == 0)
	{
		ft_printf("%X", d);
		printf("\n------\n%X", d);
	}
	return ;
}

void	ft_hash(char *test)
{
	int d = 42;
	int o = 42;

	if (strcmp(test, "#X") == 0)
	{
		ft_printf("%#X", d);
		printf("\n------\n%#X", d);
	}
	if (strcmp(test, "#o") == 0)
	{
		ft_printf("%#o", o);
		printf("\n------\n%#o\n", o);
	}
}

void	ft_ell(char *test)
{
	long int ld = 0;
	if (strcmp(test, "ld") == 0)
	{
		ft_printf("nn%ldnn", ld);
		printf("\n------\nnn%ldnn\n", ld);
	}
	return ;
}

void	ft_ell_ell(char *test)
{
	long long int lld = 42;

	if (strcmp(test, "lld") == 0)
	{
		ft_printf("%lld", lld);
		printf("\n------\n%lld\n", lld);
	}

	return ;
}

int	main(void)
{
	char *locale;
	char *test;

	test = "ld";
	setlocale(LC_ALL, "");
	if (test[0] >= 'a' && test[0] <= 'z' && test[0] != 'l')
		ft_min(test);
	else if (test[0] == '#')
		ft_hash(test);
	else if (test[0] >= 'A' && test[0] <= 'Z')
		ft_maj(test);
	else if (test[0] == 'l' && test[1] != 'l')
		ft_ell(test);
	else if (test[0] == 'l' && test[1] == 'l')
		ft_ell_ell(test);
	else if (test[0] == '#')
		ft_hash(test);
	else if (test[0] == '%')
	{
		ft_printf("%%salut");
		printf("\n------\n%%salut");
	}
	return (0);
}
