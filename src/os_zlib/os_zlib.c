/* @(#) $Id$ */

/* Copyright (C) 2006 Daniel B. Cid <dcid@ossec.net>
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */
       
#include "shared.h"
#include "os_zlib.h"

/* os_compress: Compress a string with zlib. */
int os_compress(char *src, char *dst, int src_size, int dst_size)
{
    /* We make sure to do not allow long sizes */
    if(compress2((unsigned char *)dst, 
                (unsigned long int*)&dst_size, 
                (unsigned char *)src,
                (unsigned long int)src_size, 9) == Z_OK)
    {
        dst[dst_size] = '\0';
        return(dst_size);
    }

    return(0);
}


/* os_uncompress: Uncompress a string with zlib. */
int os_uncompress(char *src, char *dst, int src_size, int dst_size)
{
    if(uncompress((unsigned char *)dst, 
                 (unsigned long int*)&dst_size, 
                 (unsigned char *)src, 
                 (unsigned long int)src_size) == Z_OK)
    {
        dst[dst_size] = '\0';
        return(dst_size);
    }
    return(0);
}


/* EOF */
