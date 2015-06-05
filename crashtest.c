/*
 *  Exposes the ioctl functions. 
 */

#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

// Used in order to 
#include <sys/ioctl.h>
#include "ospfs.h"

int main(int argc, char **argv)
{

    // Opens the file to get its file descriptor. 
	const char filename[] = "base/crashfile";
    int fd = open(filename, O_RDWR | O_CREAT);

    // If there is no argument called with the function, returns nwrites_to_crash
    if (argc == 1)
    {
        ioctl(
    } 


	if (argc != 3)
	{
		printf("Usage: %s <filename> <desired_length>\n", argv[0]);
		printf("Calls truncate(filename, desired_length).\n");
		exit(1);
	}

	filename = argv[1];
	trunced_len = atoi(argv[2]);
    
    

	return 0;
}
