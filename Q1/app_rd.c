#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>


#define RD_VALUE _IOR('a','b',int32_t char*)

int main()
{
	int fd;
        int32_t char*  Ubuff[100];
	int32_t char*  Kbuff[100];

        printf("*********************************\n");
 
        printf("\nOpening Driver\n");
        fd = open("/dev/etx_device", O_RDWR, 0777);
        if(fd < 0) 
	{
                printf("Cannot open device file...\n");
                return 0;
        }

        printf("Reading Value from Driver\n");
        ioctl(fd, RD_VALUE, (int32_t char*) Kbuff);
        printf("String is %s\n", Kbuff);

        printf("Closing Driver\n");
        close(fd);

}

