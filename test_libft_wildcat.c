#include "libft.h"      // ft_memset, ft_bzero, ft_memcpy, ft_memmove,
#include <bsd/string.h> // strlcpy
#include <stdio.h>      // printf
#include <string.h>     // strcmp
#include <unistd.h>     // sleep
#include <stdlib.h>     // malloc, calloc
#include <ctype.h>      // toupper, tolower
#include <strings.h>    // bzero
#include <limits.h>     // INT_MAX
#include <string.h>     // memset
#include <stdio.h>      // printf
#include <string.h>     // strcmp
#include <unistd.h>     // sleep

void	printer(char *fct_name)
{
	printf("🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪\n");
	printf("🟪 ⚡                                                                      ⚡ 🟪\n");
	printf("🟪                                                                            🟪\n");
	printf("🟪 Testing %s    🐈                \n", fct_name);
	printf("🟪 ╔..................🐈...╝                                                  🟪\n");
	printf("🟪 ╚.....🐈..╗                                                                🟪\n");
	sleep(0);
	printf("🟪           ║                                                                🟪\n");
	printf("🟪           ╚>  %s : 🥸👍'All tests passed!'  \n", fct_name);
	printf("🟪                                                                            🟪\n");
	printf("🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪\n");
	printf("\n");
}
void	printer_half1(char *fct_name)
{
	printf("🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪\n");
	printf("🟪 ⚡                                                                      ⚡ 🟪\n");
	printf("🟪                                                                            🟪\n");
	printf("🟪 Testing %s    🐈                  \n", fct_name);
	printf("🟪 ╔..................🐈...╝                                                  🟪\n");
	printf("🟪 ╚.....🐈..╗                                                                🟪\n");
	sleep(0);
}
void	printer_half2(char *fct_name)
{
	printf("🟪           ║                                                                🟪\n");
	printf("🟪           ╚>  %s : 🥸👍'All tests passed!'  \n", fct_name);
	printf("🟪                                                                            🟪\n");
	printf("🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪\n");
	printf("\n");
}
void	printer_half2_error(char *fct_name)
{
	printf("🟪           ║                                                                🟪\n");
	printf("🟪           ╚>  %s : ⛔'Some tests failed!'⛔  \n", fct_name);
	printf("🟪                                                                            🟪\n");
	printf("🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪🟪\n");
	printf("\n");
}
void	test_memset(void)
{
	char			*fct_name;
	unsigned char	test_tab[5];
	unsigned char	expected_tab[5];

	fct_name = "ft_memset";
	printer_half1(fct_name);
	// Test 1: Check if the function works with normal input
	memset(expected_tab, 0xAA, 5);
	ft_memset(test_tab, 0xAA, 5);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test 1 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
				printer_half2_error(fct_name);
			return ;
		}else{
			printf("🟪 Test 1 passed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
		}
	}
	// Test 2: Check if the function works when n is 0
	ft_memset(test_tab, 0xBB, 5);
	memset(expected_tab, 0xBB, 5);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test 2 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
				printer_half2_error(fct_name);
			return ;
		}else{
			printf("🟪 Test 2 passed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
		}
	}
	// Test 3: Check if the function works with size 1
	memset(expected_tab, 0xBB, 1);
	ft_memset(test_tab, 0xBB, 1);
	if (test_tab[0] != expected_tab[0])
	{
		printf("🟪 Test 3 failed: expected %d, got %d\n", expected_tab[0],
			test_tab[0]);
			printer_half2_error(fct_name);
		return ;
	}else{
		printf("🟪 Test 3 passed: expected %d, got %d\n", expected_tab[0],
			test_tab[0]);
	}
	// Test 4: Check if the function works with egde case (int 255)
	//memset(expected_tab, 0xFF, 10);
	ft_memset(test_tab, 0xFF, 4);
	memset(expected_tab, 0xFF, 4);
	for (int i = 0; i < 4; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test 4 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			printer_half2_error(fct_name);
			return;
		}else{
			printf("🟪 Test 4 passed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
		}
	}
	printer_half2(fct_name);
}

void	test_bzero(void)
{
	char			*fct_name;
	unsigned char	test_tab[5];
	unsigned char	expected_tab[5];

	fct_name = "ft_bzero";
	printer_half1(fct_name);
	ft_bzero(test_tab, 5);
	bzero(expected_tab, 5);
	// Test 1: Check if the function works with normal input
		for (int i = 0; i < 5; i++)
		{
			if (test_tab[i] != expected_tab[i])
			{
				printf("🟪 Test I failed: expected %d, got %d\n", expected_tab[i],
					   test_tab[i]);
				return;
			} else {
				printf("🟪 Test I passed: expected %d, got %d\n", expected_tab[i],
					   test_tab[i]);
			}
		}
	// Test 2: Check if the function works when n is 0
	ft_bzero(test_tab, 0);
	bzero(expected_tab, (0));
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test II failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			return ;
		}else{
			printf("🟪 Test II passed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
		}
		
	}
	
	char	*hellotest = "Hello 42 ! :)";
	char	*hellotest_ft = "Hello 42 ! :)";
	char	hello_tab[14];
	char	hello_tab_ft[14];
	//ft_strlcpy(hello_tab, hellotest, 13);
	ft_strlcpy(hello_tab_ft, hellotest_ft, 14);
	ft_strlcpy(hello_tab, hellotest, 14);
	ft_bzero(hello_tab, 5);
	bzero(hello_tab_ft, 5);

	//printf("hellotest[i] = %c\n", hello_tab_ft[0]);
	for (int i = 0; i < 13; i++)
	{
		if (hello_tab[i] != hello_tab_ft[i])
		{
			printf("🟪 Test III failed: expected %c, got %c\n", hello_tab[i],
				hello_tab_ft[i]);
			return ;
		}else{
			printf("🟪 Test III passed: expected %c, got %c\n", hello_tab[i],
				hello_tab_ft[i]);
		}
	}
	printer_half2(fct_name);	
}

void	test_memcpy(void)
{
	char			*fct_name;
	unsigned char	test_tab[5];
	unsigned char	expected_tab[5];

	fct_name = "ft_memcpy";
	// Test 1: Check if the function works with normal input
	memset(expected_tab, 0xAA, 5);
	ft_memcpy(test_tab, expected_tab, 5);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("Test 1 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			return ;
		}
	}
	// Test 2: Check if the function works when n is 0
	ft_memcpy(test_tab, expected_tab, 0);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("Test 2 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			return ;
		}
	}
	// Test 3: Check if the function works with size 1
	memset(expected_tab, 0xBB, 1);
	ft_memcpy(test_tab, expected_tab, 1);
	if (test_tab[0] != expected_tab[0])
	{
		printf("Test 3 failed: expected %d, got %d\n", expected_tab[0],
			test_tab[0]);
		return ;
	}
	// Test 4: Check if the function works with egde case (int 255)
	memset(expected_tab, 0xFF, 5);
	ft_memcpy(test_tab, expected_tab, 5);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("Test 4 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			return ;
		}
	}
	printer(fct_name);
}
void	test_memmove(void)
{
	char			*fct_name;
	unsigned char	test_tab[5];
	unsigned char	expected_tab[5];

	fct_name = "ft_memmove";
	printer_half1(fct_name);
	// Test 1: Check if the function works with normal input
	
	memset(expected_tab, 0xAA, 5);
	ft_memmove(test_tab, expected_tab, 5);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test 1 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			return ;
		}else
		{
			printf("🟪 Test 1 passed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
		}
	}

	// Test 2: Check if the function works when n is 0
	
	ft_memmove(test_tab, expected_tab, 0);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test 2 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			return ;
		}
	}
	// Test 3: Check if the function works with size 1
	memset(expected_tab, 0xBB, 1);
	ft_memmove(test_tab, expected_tab, 1);
	if (test_tab[0] != expected_tab[0])
	{
		printf("🟪 Test 3 failed: expected %d, got %d\n", expected_tab[0],
			test_tab[0]);
		return ;
	}
	// Test 4: Check if the function works with egde case (int 255)
	
	memset(expected_tab, 0xFF, 5);
	ft_memmove(test_tab, expected_tab, 5);
	for (int i = 0; i < 5; i++)
	{
		if (test_tab[i] != expected_tab[i])
		{
			printf("🟪 Test 4 failed: expected %d, got %d\n", expected_tab[i],
				test_tab[i]);
			printer_half2_error(fct_name);
			return;
		}
	}
	printer_half2(fct_name);
}

void	test_move(char *string, int d, int s, int n, char *expected)
{
	char	*tmp;
	char	*tmp_orig;
	char	*res_orig;

	printf("🟪 - depl. de %d caracteres de %s de position %d à %d.Attendu = %s\n", n, string, s, d, expected);
	tmp = strdup(string);
	tmp_orig = strdup(string);
	res_orig = memmove(tmp_orig + d, tmp_orig + s, n);
	ft_memmove(tmp + d, tmp + s, n);
	if (strcmp(tmp, expected) != 0)
	{
		printf("🟪 - depl. de %d caracteres de %s de position %d à %d.Attendu = %s mais : \n", n, string, s, d, expected);
		printf("🟪 ECHEC, resultat obtenu = %s\n", tmp);
		printf("🟪 ECHEC, resultat origine = %s\n", res_orig);
	}
	free(tmp);
}

void	test_memmove2(void)
{
	char	*fct_name;

	fct_name = "ft_memmove2";
	printer_half1(fct_name);
	test_move("abcd", 0, 0, 2, "abcd");
	test_move("abcd", 1, 0, 2, "aabd");
	test_move("abcd", 2, 0, 2, "abab");
	test_move("abcd", 0, 1, 2, "bccd");
	test_move("abcd", 1, 1, 2, "abcd");
	test_move("abcd", 2, 1, 2, "abbc");
	test_move("abcd", 0, 2, 2, "cdcd");
	test_move("abcd", 1, 2, 2, "acdd");
	test_move("abcd", 2, 2, 2, "abcd");
	printer_half2(fct_name);
}

void	test_strlcpy(void)
{
	int		ok;
	char	*fct_name;
	char	str_join_org[1024];
	char	*str_join_ft;
	char	*argv[3];
	int		argc;
	size_t	res_orig;
	size_t	res_ft;
	int		i;
	char	str_lcpy_org[2550] = "";
	char	str_lcpy_ft[2550] = "";

	ok = 1;
	fct_name = "ft_strlcpy";
	printer_half1(fct_name);
	str_join_ft = NULL;
	argc = 3;
	argv[0] = "Hello";
	argv[1] = "World";
	argv[2] = "42";
	i = 0;
	while (i < argc)
	{
		res_orig = strlcpy(str_lcpy_org, argv[i], 5);
		res_ft = ft_strlcpy(str_lcpy_ft, argv[i], 5);
		if (strcmp(str_lcpy_org, str_lcpy_ft) == 0)
		{
			printf("🟪 OK ✅\n");
		}
		else
		{
			ok = 0;
			printf("🟪 Erreur : [argv[i]] [str_join_org] [str_join_ft] [%s|%s|%s]\n",
				argv[i], str_join_org, str_join_ft);
		}
		if (res_orig == res_ft)
		{
			printf("🟪 OK ✅\n");
		}
		else
		{
			ok = 0;
			printf("🟪 Erreur : [argv[i]] [res_org] [res_ft] [%s|%zu|%zu]\n",
				argv[i], res_orig, res_ft);
		}
		i++;
	}
	if (ok)
		printer_half2(fct_name);
	else
		printer_half2_error(fct_name);
}
void	test_strlcat(void)
{
	int		ok;
	char	*fct_name;
	char	str_join_org[1024];
	char	*str_join_ft;
	char	*argv[3];
	int		argc;
	size_t	res_orig;
	size_t	res_ft;
	int		i;
	char	str_lcat_org[2550] = "";
	char	str_lcat_ft[2550] = "";

	ok = 1;
	fct_name = "ft_strlcat";
	printer_half1(fct_name);
	str_join_ft = NULL;
	argc = 3;
	argv[0] = "Hello";
	argv[1] = "World";
	argv[2] = "42";
	i = 0;
	while (i < argc)
	{
		res_orig = strlcat(str_lcat_org, argv[i], 5);
		res_ft = ft_strlcat(str_lcat_ft, argv[i], 5);
		if (strcmp(str_lcat_org, str_lcat_ft) == 0)
		{
			printf("🟪 OK ✅\n");
		}
		else
		{
			ok = 0;
			printf("🟪 Erreur : [argv[i]] [str_join_org] [str_join_ft] [%s|%s|%s]\n",
				argv[i], str_join_org, str_join_ft);
		}
		if (res_orig == res_ft)
		{
			printf("🟪 OK ✅\n");
		}
		else
		{
			ok = 0;
			printf("🟪 Erreur : [argv[i]] [res_org] [res_ft] [%s|%zu|%zu]\n",
				argv[i], res_orig, res_ft);
		}
		i++;
	}
	if (ok)
		printer_half2(fct_name);
	else
		printer_half2_error(fct_name);
}
void	test_toupper(void)
{
	int		ok;
	char	*fct_name;
	int		i;
	int		res_orig;
	int		res_ft;

	ok = 1;
	fct_name = "ft_toupper";
	printer_half1(fct_name);
	i = -1;
	while (i < 255)
	{
		res_orig = toupper(i);
		res_ft = ft_toupper(i);
		// printf("🟪");
		if (res_orig == res_ft)
		{
			{
				printf(" OK ✅  ");
			}
			if (i % 5 == 0 && i % 10 != 0)
			{
				printf("\n");
			}
		}
		else
		{
			ok = 0;
			printf("🟪 Erreur : [i] [res_orig] [res_ft] [%d|%d|%d]\n", i,
				res_orig, res_ft);
		}
		i++;
	}
	printf("\n");
	if (ok)
		printer_half2(fct_name);
	else
		printer_half2_error(fct_name);
}
void	test_tolower(void)
{
	int		ok;
	char	*fct_name;
	int		i;
	int		res_orig;
	int		res_ft;

	ok = 1;
	fct_name = "ft_tolower";
	printer_half1(fct_name);
	i = -1;
	while (i < 255)
	{
		res_orig = tolower(i);
		res_ft = ft_tolower(i);
		// printf("🟪");
		if (res_orig == res_ft)
		{
			{
				printf(" OK ✅  ");
			}
			if (i % 5 == 0 && i % 10 != 0)
			{
				printf("\n");
			}
		}
		else
		{
			ok = 0;
			printf("🟪 Erreur : [i] [res_orig] [res_ft] [%d|%d|%d]\n", i,
				res_orig, res_ft);
		}
		i++;
	}
	printf("\n");
	if (ok)
		printer_half2(fct_name);
	else
		printer_half2_error(fct_name);
}
void	test_strchr(void)
{
	char	*fct_name;
	char	*str;
	char	*res_orig;
	char	*res_ft;

	fct_name = "ft_strchr";
	printer_half1(fct_name);
	str = "Hello World";
	res_orig = strchr(str, 'W');
	res_ft = ft_strchr(str, 'W');
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	res_orig = strchr(str, 'z');
	res_ft = ft_strchr(str, 'z');
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_strrchr(void)
{
	char	*fct_name;
	char	*str;
	char	*res_orig;
	char	*res_ft;

	fct_name = "ft_strrchr";
	printer_half1(fct_name);
	str = "Hello World";
	res_orig = strrchr(str, 'W');
	res_ft = ft_strrchr(str, 'W');
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	res_orig = strrchr(str, 'z');
	res_ft = ft_strrchr(str, 'z');
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_strncmp(void)
{
	char	*fct_name;
	char	*str1;
	char	*str2;
	int		res_orig;
	int		res_ft;

	fct_name = "ft_strncmp";
	printer_half1(fct_name);
	str1 = "Hello World";
	str2 = "Hello World";
	res_orig = strncmp(str1, str2, 14);
	res_ft = ft_strncmp(str1, str2, 14);
	if (res_orig == res_ft)
	{
		printf("🟪 res_orig: %d | res_ft: %d\n", res_orig, res_ft);
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	str1 = "Hello World";
	str2 = "Hello World z";
	res_orig = strncmp(str1, str2, 14);
	res_ft = ft_strncmp(str1, str2, 14);
	if (res_orig == res_ft)
	{
		printf("🟪 res_orig: %d | res_ft: %d\n", res_orig, res_ft);
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	str1 = "Hello World";
	str2 = "Hello Worl";
	res_orig = strncmp(str1, str2, 12);
	res_ft = ft_strncmp(str1, str2, 12);
	if (res_orig == res_ft)
	{
		printf("🟪 res_orig: %d | res_ft: %d\n", res_orig, res_ft);
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_memchr(void)
{
	char	*fct_name;
	char	*str;
	char	*res_orig;
	char	*res_ft;

	fct_name = "ft_memchr";
	printer_half1(fct_name);
	str = "Hello World";
	res_orig = memchr(str, 'W', 5);
	res_ft = ft_memchr(str, 'W', 5);
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	res_orig = memchr(str, 'z', 5);
	res_ft = ft_memchr(str, 'z', 5);
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_memcmp(void)
{
	char	*fct_name;
	char	str1[5] = "Hello";
	char	str2[5] = "Hello";
	char	str3[5] = "Hella";
	int		res_orig;
	int		res_ft;

	fct_name = "ft_memcmp";
	printer_half1(fct_name);
	res_orig = memcmp(str1, str2, 5);
	res_ft = ft_memcmp(str1, str2, 5);
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = memcmp(str1, str2, 0);
	res_ft = ft_memcmp(str1, str2, 0);
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = memcmp(str1, str3, 5);
	res_ft = ft_memcmp(str1, str3, 5);
	if (res_orig == res_ft)
	{
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_strnstr(void)
{
	char	*fct_name;
	char	*str;
	char	*str2;
	char	*res_orig;
	char	*res_ft;

	fct_name = "ft_strnstr";
	printer_half1(fct_name);
	str = "Hello World";
	str2 = "Hello World z";
	res_orig = strnstr(str, "Wor", 5);
	res_ft = ft_strnstr(str, "Wor", 5);
	if (res_orig == res_ft)
	{
		printf("🟪 %s | %s || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	res_orig = strnstr(str2, "z", 5);
	res_ft = ft_strnstr(str2, "z", 5);
	if (res_orig == res_ft)
	{
		printf("🟪 %s | %s || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	res_orig = strnstr(str2, "z", 13);
	res_ft = ft_strnstr(str2, "z", 13);
	if (res_orig == res_ft)
	{
		printf("🟪 %s | %s || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_atoi(void)
{
	char	*fct_name;
	char	*str;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;
	int		res_orig;
	int		res_ft;

	fct_name = "ft_atoi";
	printer_half1(fct_name);
	str = "12345";
	str2 = "-12345";
	str3 = "12345a";
	str4 = "a12345";
	str5 = "12345a12345";
	str6 = "-+-12345a12345";
	res_orig = atoi(str);
	res_ft = ft_atoi(str);
	if (res_orig == res_ft)
	{
		printf("🟪 [%d || %d] || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = atoi(str2);
	res_ft = ft_atoi(str2);
	if (res_orig == res_ft)
	{
		printf("🟪 [%d || %d] || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = atoi(str3);
	res_ft = ft_atoi(str3);
	if (res_orig == res_ft)
	{
		printf("🟪 [%d || %d] || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = atoi(str4);
	res_ft = ft_atoi(str4);
	if (res_orig == res_ft)
	{
		printf("🟪 [%d || %d] || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = atoi(str5);
	res_ft = ft_atoi(str5);
	if (res_orig == res_ft)
	{
		printf("🟪 [%d || %d] || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	res_orig = atoi(str6);
	res_ft = ft_atoi(str6);
	if (res_orig == res_ft)
	{
		printf("🟪 [%d || %d] || OK ✅\n", res_orig, res_ft);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%d|%d]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_calloc(void)
{
	char	*fct_name;
	char	*res_orig;
	char	*res_ft;

	fct_name = "ft_calloc";
	printer_half1(fct_name);
	res_orig = calloc(5, 4);
	res_ft = ft_calloc(5, 4);
	//rest_add = 
	if (res_orig == res_ft)
	{
		for (int i = 0; i < 5; i++)
		{
			if (res_orig[i] != res_ft[i])
			{
				printf("🟪 Erreur : [res_orig] [res_ft] [%i|%i]\n",
					res_orig[i], res_ft[i]);
				return ;
			}
			else
			{
				printf("🟪 res_orig[i]: %d | res_ft[i]: %d ", res_orig[i],
					res_ft[i]);
			}
		}
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
	}
	printer_half2(fct_name);
}
void	test_strdup(void)
{
	char	*fct_name;
	char	*str;
	char	*res_orig;
	char	*res_ft;

	fct_name = "ft_strdup";
	printer_half1(fct_name);
	str = "Hello World";
	res_orig = strdup(str);
	res_ft = ft_strdup(str);
	if (strcmp(res_orig, res_ft) == 0)
	{
		printf("🟪 res_orig: %s || res_ft: %s", res_orig, res_ft);
		printf("🟪 OK ✅\n");
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_orig, res_ft);
		printer_half2_error(fct_name);
	}
	printer_half2(fct_name);
}
void	test_substr()
{
	char	*fct_name;
	char	*str;
	char	*res_ok;
	char	*res_ft;

	fct_name = "ft_substr";
	printer_half1(fct_name);
	str = "Hello World";
	res_ok = "World";
	res_ft = ft_substr(str, 7, 5);
	if (strcmp(res_ok, res_ft) == 0)
	{
		printf("🟪 res_orig: %s || res_ft: %s", res_ok, res_ft);
		printf("🟪 OK ✅\n");
		printer_half2(fct_name);
	}
	else
	{
		printf("🟪 Erreur : [res_orig] [res_ft] [%s|%s]\n", res_ok, res_ft);
		printer_half2_error(fct_name);
	}
}

int	main(void)
{
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_memmove2();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();

	return (EXIT_SUCCESS);
}