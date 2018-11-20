/*-----------------------------------------------------------------------*/
/* name: thomaz                                                          */
/* goals: create a program wich breaks passwords!                        */
/* notes: 1- '!' is the first printable character of the ascii table.    */
/*        2- '~' is the last printable character of the ascii table      */
/*-----------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
# define BUF 4048

void	cracker(char *str)
{
	char	letter;
	int		i;

	letter = '!';
	i = 0;
	while (str[i] != '\0')
	{
		letter = '!';
		while ((letter >= '!' && letter <= '~') && (letter != str[i]))
		{	
			letter += 1;
		}
		if (letter == str[i])
			printf("\nchar number %c - %c discovered\n", letter, str[i]);
		i++;
	}
}

int		main(void)
{
	// Variables
	char name[BUF];
	char password[BUF];
	int i;	
	
	i = 0;	
	// Program
	printf("\n------------- WELCOME TO THE CRACKER ---------------\n\n");
	printf("what's your name?\n");
	scanf("%s", name);
	printf("pleased to meet you %s\n", name);
	printf("please choose a password: \n");
	scanf("%s", password);
	cracker(password);
	printf("\n\n------------ THANK YOU COME BACK SOON ---------------\n");
	// End
	return (0);
}
