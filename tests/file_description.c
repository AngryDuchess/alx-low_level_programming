#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int fd;
	char buf[14];

	/*write operation*/

	fd = open("myfile.txt", O_CREAT | OWRONLY, 0600);

	if(fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}

	write(fd, "Hi i am Hamida, your RULER\n,23")

		close (fd);

	/*read operation*/

	fd = open("myfile.txt", O_RDONLY);

	if(fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}

	read(fd, buf, 13)
	buf[]13 = '\0';	
