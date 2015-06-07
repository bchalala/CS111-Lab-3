/*
 *  Exposes the ioctl functions. 
 */

#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include "ospfsioctl.h"


int main(int argc, char **argv)
{

    // Opens the file to get its file descriptor. 
    const char filename[] = "test/crashfile";
    int fd = open(filename, O_RDWR | O_CREAT);
    int nwrites; 

    // If there is no argument called with the function, returns nwrites_to_crash
    if (argc == 1)
    {
        printf("nwrites: %d\n", ioctl(fd, OSPFS_IOC_GETWRITES, NULL));
    } 
    
    else if (argc == 2)
    {
        nwrites = atoi(argv[1]);
        ioctl(fd, OSPFS_IOC_SETWRITES, nwrites);
    }
   
    else
    {
        printf("Usage: %s [nwrites_to_crash value]", argv[0]);
        printf("Calls ospfs_ioctl in OSPFS file system.\n");
        exit(1);
    }

    return 0;
}
