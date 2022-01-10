#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
 
#define WR_VALUE _IOW('a','a',int32_t char*)

int main()
{
        int fd;
	int32_t char* Kbuff[100];

        printf("*********************************\n");

        printf("\nOpening Driver\n");
        fd = open("/dev/etx_device", O_RDWR, 0777);
        if(fd < 0)
	{
                printf("Cannot open device file...\n");
                return 0;
        }

	printf("Enter the string to send\n");
        scanf("%s",Kbuff);

        printf("Closing Driver\n");
        close(fd);
}
