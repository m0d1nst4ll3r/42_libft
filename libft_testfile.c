/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_testfile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 02:53:43 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/14 23:09:03 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define BONUS 1
#define CUSTOM 1

//	Used in test_list_extreme
void	test_func(void *s, size_t n)
{
	(void)n;
	(void)s;
}

void	test_func2(t_list *elem)
{
	(void)elem;
}

t_list	*test_func3(t_list *elem)
{
	(void)elem;
	return (0);
}

//	Used in test_func_extreme
void	test_func4(char *s)
{
	(void)s;
}

void	test_func5(unsigned int n, char *s)
{
	(void)n;
	(void)s;
}

char	test_func6(char c)
{
	(void)c;
	return (0);
}

char	test_func7(unsigned int n, char c)
{
	(void)n;
	(void)c;

	return (0);
}

//	Regular test functions
//	Won't test beyond expected usage
static void	test_display(void)
{
	ft_putstr("==========Testing display funcs==========\n");
	ft_putstr("- ft_putchar      ");
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar('\n');
	ft_putstr_fd("- ft_putchar_fd   ", 2);
	ft_putchar_fd('H', 2);
	ft_putchar_fd('e', 2);
	ft_putchar_fd('l', 2);
	ft_putchar_fd('l', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('\n', 2);
	ft_putstr("- ft_putstr       ");
	ft_putstr("Hello\n");
	ft_putstr_fd("- ft_putstr_fd    ", 2);
	ft_putstr_fd("Hello\n", 2);
	ft_putstr("- ft_putendl      ");
	ft_putendl("Hello");
	ft_putstr_fd("- ft_putendl_fd   ", 2);
	ft_putendl_fd("Hello", 2);
	ft_putstr("- ft_putnbr       ");
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(1);
	ft_putchar(' ');
	ft_putnbr(-1);
	ft_putchar(' ');
	ft_putnbr(1000);
	ft_putchar(' ');
	ft_putnbr(-1000);
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putstr_fd("- ft_putnbr_fd    ", 2);
	ft_putnbr_fd(0, 2);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(1, 2);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(-1, 2);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(1000, 2);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(-1000, 2);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(-2147483648, 2);
	ft_putchar_fd(' ', 2);
	ft_putnbr_fd(2147483647, 2);
	ft_putchar_fd('\n', 2);
}

static void	test_char_checks(void)
{
	char	*test = "ThisStringIsOnlyAlpha";
	char	*test2 = "0123456789";
	char	*test3 = "09 This String Is Only Printable {!%$~?}";
	char	*test4 = "\x01 09 This String Is Ascii {!%$~?} \x7f";
	char	success;

	ft_putstr("=========Testing char type checks========\n");
	ft_putstr("- ft_isalpha   ");
	success = 1;
	for (int i = 0; test[i]; i++)
	{
		if (ft_isalpha(test[i]) == 0)
		{
			success = 0;
			break ;
		}
	}
	for (int i = 0; test2[i]; i++)
	{
		if (ft_isalpha(test2[i]) == 1)
		{
			success = 0;
			break ;
		}
	}
	if (success && ! ft_isalpha(' ') && ! ft_isalpha(0) && ! ft_isalpha('\xff'))
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	ft_putstr("- ft_isdigit   ");
	success = 1;
	for (int i = 0; test[i]; i++)
	{
		if (ft_isdigit(test[i]) == 1)
		{
			success = 0;
			break ;
		}
	}
	for (int i = 0; test2[i]; i++)
	{
		if (ft_isdigit(test2[i]) == 0)
		{
			success = 0;
			break ;
		}
	}
	if (success && ! ft_isdigit(' ') && ! ft_isdigit(0) && ! ft_isdigit('\xff'))
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	ft_putstr("- ft_isalnum   ");
	success = 1;
	for (int i = 0; test[i]; i++)
	{
		if (ft_isalnum(test[i]) == 0)
		{
			success = 0;
			break ;
		}
	}
	for (int i = 0; test2[i]; i++)
	{
		if (ft_isalnum(test2[i]) == 0)
		{
			success = 0;
			break ;
		}
	}
	if (success && ! ft_isalnum(' ') && ! ft_isalnum(0) && ! ft_isalnum('\xff'))
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	ft_putstr("- ft_isprint   ");
	success = 1;
	for (int i = 0; test3[i]; i++)
	{
		if (ft_isprint(test3[i]) == 0)
		{
			success = 0;
			break ;
		}
	}
	if (success && ! ft_isprint('\n') && ! ft_isprint('\x7f') && ! ft_isprint('\xff'))
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	ft_putstr("- ft_isascii   ");
	success = 1;
	for (int i = 0; test4[i]; i++)
	{
		if (ft_isascii(test4[i]) == 0)
		{
			success = 0;
			break ;
		}
	}
	if (success && ! ft_isascii('\x80') && ft_isascii(0) && ! ft_isascii('\xff'))
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
}

static void	test_char_manip(void)
{
	char	*test = "\x01 09 ThIs StRing Is AscII {!%$~?} \x7f";
	char	*test2 = "\x01 09 this string is ascii {!%$~?} \x7f";
	char	*test3 = "\x01 09 THIS STRING IS ASCII {!%$~?} \x7f";
	char	success;

	ft_putstr("============Testing char manip===========\n");
	ft_putstr("- ft_tolower   ");
	success = 1;
	for (int i = 0; test[i]; i++)
	{
		if (ft_tolower(test[i]) != test2[i])
		{
			success = 0;
			break ;
		}
	}
	if (success && ft_tolower(0) == 0)
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	ft_putstr("- ft_toupper   ");
	success = 1;
	for (int i = 0; test[i]; i++)
	{
		if (ft_toupper(test[i]) != test3[i])
		{
			success = 0;
			break ;
		}
	}
	if (success && ft_toupper(0) == 0)
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
}

static void	test_void()
{
	char	*test = ft_strdup("This is a test string");
	int		testlen = ft_strlen(test + 1);
	int		success;

	ft_putstr("============Testing void funcs===========\n");
	ft_putstr("- ft_memset   ");
	success = 1;
	if (ft_memset(test, 48, 0) != test)
		success = 0;
	if (ft_memset(test, 48, 1) != test)
		success = 0;
	if (test[0] != 48 || test[1] != 'h')
		success = 0;
	if (ft_memset(test, 48, testlen) != test)
		success = 0;
	for (int i = 0; i < testlen; i++)
	{
		if (test[i] != 48)
		{
			success = 0;
			break ;
		}
	}
	if (success)
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	free(test);
	test = ft_strdup("This is a test string");
	testlen = ft_strlen(test);
	ft_putstr("- ft_bzero    ");
	success = 1;
	ft_bzero(test, 0);
	if (test[0] != 'T' || test[1] != 'h')
		success = 0;
	ft_bzero(test, 1);
	if (test[0] != 0 || test[1] != 'h')
		success = 0;
	ft_bzero(test, testlen);
	for (int i = 0; i < testlen; i++)
	{
		if (test[i] != 0)
		{
			success = 0;
			break ;
		}
	}
	if (success)
		ft_putstr("Success!\n");
	else
		ft_putstr(">>>FAILED<<<\n");
	free(test);
	test = ft_strdup("This is a test string");
	testlen = ft_strlen(test);

}

static void	test_string_write()
{
	ft_putstr("========Testing string write funcs=======\n");
}

static void	test_string_read()
{
	ft_putstr("========Testing string read funcs========\n");
}

static void	test_string_advanced()
{
	ft_putstr("======Testing string advanced funcs======\n");
}

static void	test_malloc()
{
	ft_putstr("===========Testing malloc funcs==========\n");
}

static void	test_funcp()
{
	ft_putstr("========Testing func pointer funcs=======\n");
}

static void	test_list()
{
	ft_putstr("============Testing list funcs===========\n");
}

//	Extreme test functions
//	Test behavior when passing (predictably) incorrect
//		arguments, like NULL pointers
//	Will never pass anything bad that functions can't
//		detect by themselves, like non-NULL bad pointers
static void	test_display_extreme(void)
{
	ft_putstr(NULL);
	ft_putstr_fd(NULL, 1);
	ft_putendl(NULL);
	ft_putendl_fd(NULL, 1);
	ft_putstr("- Display functions           Success!\n");
}

static void	test_void_extreme(void)
{
	char	*test = ft_strdup("test");
	
	ft_memset(NULL, 10, 10);
	ft_bzero(NULL, 10);
	ft_memdup(NULL, 10);
	ft_memcpy(NULL, NULL, 10);
	ft_memcpy(test, NULL, 10);
	ft_memcpy(NULL, test, 10);
	ft_memccpy(NULL, NULL, 10, 10);
	ft_memccpy(test, NULL, 10, 10);
	ft_memccpy(NULL, test, 10, 10);
	ft_memmove(NULL, NULL, 10);
	ft_memmove(test, NULL, 10);
	ft_memmove(NULL, test, 10);
	ft_memchr(NULL, 10, 10);
	ft_memcmp(NULL, NULL, 10);
	ft_memcmp(test, NULL, 10);
	ft_memcmp(NULL, test, 10);
	free(test);
	ft_putstr("- Void functions              Success!\n");
}

static void	test_string_write_extreme(void)
{
	char	*test = ft_strdup("test");

	ft_strcat(NULL, NULL);
	ft_strcat(test, NULL);
	ft_strcat(NULL, test);
	ft_strncat(NULL, NULL, 10);
	ft_strncat(test, NULL, 10);
	ft_strncat(NULL, test, 10);
	ft_strlcat(NULL, NULL, 10);
	ft_strlcat(test, NULL, 10);
	ft_strlcat(NULL, test, 10);
	ft_strcpy(NULL, NULL);
	ft_strcpy(test, NULL);
	ft_strcpy(NULL, test);
	ft_strncpy(NULL, NULL, 10);
	ft_strncpy(test, NULL, 10);
	ft_strncpy(NULL, test, 10);
	ft_strdup(NULL);
	if (CUSTOM)
		ft_strndup(NULL, 10);
	ft_strclr(NULL);
	free(test);
	ft_putstr("- String write functions      Success!\n");
}

static void	test_string_read_extreme(void)
{
	char	*test = ft_strdup("test");

	ft_strlen(NULL);
	ft_strcmp(NULL, NULL);
	ft_strcmp(test, NULL);
	ft_strcmp(NULL, test);
	ft_strncmp(NULL, NULL, 10);
	ft_strncmp(test, NULL, 10);
	ft_strncmp(NULL, test, 10);
	ft_strequ(NULL, NULL);
	ft_strequ(test, NULL);
	ft_strequ(NULL, test);
	ft_strnequ(NULL, NULL, 10);
	ft_strnequ(test, NULL, 10);
	ft_strnequ(NULL, test, 10);
	ft_strchr(NULL, 10);
	ft_strrchr(NULL, 10);
	ft_strstr(NULL, NULL);
	ft_strstr(test, NULL);
	ft_strstr(NULL, test);
	ft_strnstr(NULL, NULL, 10);
	ft_strnstr(test, NULL, 10);
	ft_strnstr(NULL, test, 10);
	free(test);
	ft_putstr("- String read functions       Success!\n");
}

static void	test_string_advanced_extreme(void)
{
	char	*test = ft_strdup("test");

	ft_strsub(NULL, 10, 15);
	ft_strjoin(NULL, NULL);
	ft_strjoin(test, NULL);
	ft_strjoin(NULL, test);
	ft_strtrim(NULL);
	ft_strsplit(NULL, 10);
	ft_atoi(NULL);
	free(test);
	ft_putstr("- String advanced functions   Success!\n");
}

static void	test_malloc_extreme(void)
{
	char	*test = NULL;

	ft_memdel(NULL);
	ft_memdel((void **)&test);
	ft_strdel(NULL);
	ft_strdel(&test);
	ft_putstr("- Malloc functions            Success!\n");
}

static void	test_funcp_extreme(void)
{
	char	*test = ft_strdup("test");

	ft_striter(NULL, NULL);
	ft_striter(test, NULL);
	ft_striter(NULL, &test_func4);
	ft_striteri(NULL, NULL);
	ft_striteri(test, NULL);
	ft_striteri(NULL, &test_func5);
	ft_strmap(NULL, NULL);
	ft_strmap(test, NULL);
	ft_strmap(NULL, &test_func6);
	ft_strmapi(NULL, NULL);
	ft_strmapi(test, NULL);
	ft_strmapi(NULL, &test_func7);
	free(test);
	ft_putstr("- Func pointer functions      Success!\n");
}

static void	test_list_extreme(void)
{
	t_list	*test = ft_lstnew(NULL, 0);
	t_list	*test2 = NULL;

	ft_lstdelone(NULL, NULL);
	ft_lstdelone(NULL, &test_func);
	ft_lstdelone(&test, NULL);
	ft_lstdelone(&test2, NULL);
	ft_lstdelone(&test2, &test_func);
	ft_lstdel(NULL, NULL);
	ft_lstdel(NULL, &test_func);
	ft_lstdel(&test, NULL);
	ft_lstdel(&test2, NULL);
	ft_lstdel(&test2, &test_func);
	ft_lstadd(NULL, NULL);
	ft_lstadd(NULL, test);
	ft_lstiter(NULL, NULL);
	ft_lstiter(test, NULL);
	ft_lstiter(NULL, &test_func2);
	ft_lstmap(NULL, NULL);
	ft_lstmap(test, NULL);
	ft_lstmap(NULL, &test_func3);
	free(test);
	ft_putstr("- List functions              Success!\n");
}

int	main(void)
{
	test_display();
	test_char_checks();
	test_char_manip();
	test_void();
	test_string_write();
	test_string_read();
	test_string_advanced();
	test_malloc();
	test_funcp();
	test_list();
	ft_putstr("==============Extreme tests==============\n");
	test_display_extreme();
	test_void_extreme();
	test_string_write_extreme();
	test_string_read_extreme();
	test_string_advanced_extreme();
	test_malloc_extreme();
	test_funcp_extreme();
	if (BONUS)
		test_list_extreme();
}
