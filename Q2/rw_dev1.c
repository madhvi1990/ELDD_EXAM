#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd, var_rd1, var_rd2;

	fd = open("/dev/sample_cdev", O_RDONLY);
	if(fd < 0) {
		printf("Unable to open the file\n");
		return -1;
	}

	/* Fork the process and perform a concurrent read() on the device */
	if(fork() == 0) {

		read(fd, &var_rd1, sizeof(var_rd1));
		printf("Read first value : %d\n", var_rd1);


	} else {

		read(fd, &var_rd2, sizeof(var_rd2));
		printf("Read second value : %d\n", var_rd2);
		wait(NULL);

	}

	close(fd);
	return 0;
}
