#ifndef OSPFSIOCTL_H
#define OSPFSIOCTL_H


/*********************************************************************
 * IOCTL CONSTANTS AND DEFINITIONS
 *
 *
*********************************************************************/
#define MAJOR_NUM 222           // SAME AS THE Lab2 MAJOR_NUM


// Defines integers using _IO macro.
#define OSPFS_IOC_SETWRITES _IO(MAJOR_NUM, 0)
#define OSPFS_IOC_GETWRITES _IO(MAJOR_NUM, 1)

#endif
