/****************************************************************************
 * apps/examples/romfs/romfs_main.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <sys/types.h>
#include <sys/mount.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/boardctl.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>

#include <nuttx/drivers/ramdisk.h>

#include "romfs_appdir.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Configuration settings */

#ifndef CONFIG_EXAMPLES_ROMFS_RAMDEVNO
#  define CONFIG_EXAMPLES_ROMFS_RAMDEVNO 1
#endif

#ifndef CONFIG_EXAMPLES_ROMFS_SECTORSIZE
#  define CONFIG_EXAMPLES_ROMFS_SECTORSIZE 64
#endif

#ifndef CONFIG_EXAMPLES_ROMFS_MOUNTPOINT
#  define CONFIG_EXAMPLES_ROMFS_MOUNTPOINT "/nf"
#endif

#ifdef CONFIG_DISABLE_MOUNTPOINT
#  error "Mountpoint support is disabled"
#endif

#ifndef CONFIG_FS_ROMFS
#  error "ROMFS support not enabled"
#endif

#define NSECTORS(b)        (((b)+CONFIG_EXAMPLES_ROMFS_SECTORSIZE-1)/CONFIG_EXAMPLES_ROMFS_SECTORSIZE)
#define STR_RAMDEVNO(m)    #m
#define MKMOUNT_DEVNAME(m) "/dev/ram" STR_RAMDEVNO(m)
#define MOUNT_DEVNAME      MKMOUNT_DEVNAME(CONFIG_EXAMPLES_ROMFS_RAMDEVNO)

#define SCRATCHBUFFER_SIZE 1024

/* Test directory stuff */

#define WRITABLE_MODE      (S_IWOTH|S_IWGRP|S_IWUSR)
#define READABLE_MODE      (S_IROTH|S_IRGRP|S_IRUSR)
#define EXECUTABLE_MODE    (S_IXOTH|S_IXGRP|S_IXUSR)

#define DIRECTORY_MODE     (S_IFDIR|READABLE_MODE|EXECUTABLE_MODE)
#define FILE_MODE          (S_IFREG|READABLE_MODE)

/****************************************************************************
 * Name: romfs_main
 ****************************************************************************/

int main(int argc, FAR char *argv[])
{
  int ret;
  struct boardioc_romdisk_s desc;

  /* Create a RAM disk for the test */

  desc.minor    = CONFIG_EXAMPLES_ROMFS_RAMDEVNO;         /* Minor device number of the ROM disk. */
  desc.nsectors = NSECTORS(appdir_img_len);              /* The number of sectors in the ROM disk */
  desc.sectsize = CONFIG_EXAMPLES_ROMFS_SECTORSIZE;       /* The size of one sector in bytes */
  desc.image    = (FAR uint8_t *)appdir_img;             /* File system image */

  ret = boardctl(BOARDIOC_ROMDISK, (uintptr_t)&desc);

  if (ret < 0)
    {
      printf("ERROR: Failed to create RAM disk: %s\n", strerror(errno));
      return 1;
    }

  /* Mount the app file system */

  printf("Mounting ROMFS filesystem at target=%s with source=%s\n",
         CONFIG_EXAMPLES_ROMFS_MOUNTPOINT, MOUNT_DEVNAME);

  ret = mount(MOUNT_DEVNAME, CONFIG_EXAMPLES_ROMFS_MOUNTPOINT, "romfs",
              MS_RDONLY, NULL);
  if (ret < 0)
    {
      printf("ERROR: Mount failed: %s\n", strerror(errno));
      return 1;
    }

  /* please help me 🤫 */
  return 0;
}
