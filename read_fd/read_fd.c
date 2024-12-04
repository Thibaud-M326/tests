#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int fd;
	char buf[1000];

	fd = open("foo.txt", O_RDONLY);
	read(fd, buf, 1000);
	printf("%s", buf);
}
