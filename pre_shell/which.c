#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * str_concat - prototype
 *
 * @s1: function parameter
 * @s2: function parameter
 * Return: concat
 */
char *str_concat(char *s1, char *s2)
{
	int tam1, tam2, tam, i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	tam1 = 0;
	while (s1[tam1] != '\0')
	{
		tam1++;
	}
	tam2 = 0;
	while (s2[tam2] != '\0')
	{
		tam2++;
	}
	tam = tam1 + tam2;
	concat = malloc(tam + 1 * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[j++] = s2[i];
	}
	concat[tam] = '\0';
	return (concat);
}
/**
* main - stat example
*
* Return: Always 0.
*/
int main(int ac, char *av[])
{
	struct stat st;
	char buff[1024];
	char *save, *s, *s1;

	save = malloc(sizeof(char *));
	if (save == NULL)
		return (-1);
	save = getcwd(buff, 1024);
	s = str_concat(save, "/");
	s1 = str_concat(s,av[1]);
	if (stat(s1, &st) == 0)
	{
		printf(" FOUND\n");
	}
	else
	{
		printf(" NOT FOUND\n");
	}
	printf("%s\n", s1);
	return (0);
}
