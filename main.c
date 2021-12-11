#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	int		fd;
	char	*line = "temp";
	char 	test[10];
	test[0] = '\0';
	printf("%s\n", test);
	//char	input[10];


	//input[0] = 'y';
	fd = open("NewLine.txt", O_RDWR);//"sample.txt" "empty"
	if (fd < 0)
	{
		printf("couldn't open file\n");
		return (0);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("Enterered\n");
		printf("%s", line);
		line = get_next_line(fd);
		//printf("Please provide input\n");
		//fgets(input,10,stdin);
	}
	return (0);
}

/*
int main()
{
	int     fd;
	char    *buff;
	int     size;
	int     i = 0;
	int		r;

	r = 0;
	size = 20;
	fd = open("sample.txt", O_RDWR);
	if (fd < 0)
	{
		printf("FD < 0\n");
		return (0);
	}
	buff = (char *)malloc(sizeof(char) * (size + 1));
	if (buff == NULL)
		return (0);
	while ((i = i + 1)< 3)
	{
		r = read(-1,buff,size);
		if (r <= 0)
		{
		printf("error\n");
		return (-1);
		}
		printf("%d\n",r);
		printf("%s",buff);
	}
	return (0);
}*/