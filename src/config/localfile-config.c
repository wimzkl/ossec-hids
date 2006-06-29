/* @(#) $Id$ */

/* Copyright (C) 2003-2006 Daniel B. Cid <dcid@ossec.net>
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

 

#include "shared.h" 
#include "localfile-config.h"


int Read_Localfile(XML_NODE node, void *d1, void *d2)
{
    int pl = 0;
    int i = 0;

    /* XML Definitions */
    char *xml_localfile_location = "location";
    char *xml_localfile_logformat = "log_format";

    logreader *logf;
    logreader_config *log_config;

    log_config = (logreader_config *)d1;

    
    if(!log_config->config)
    {
        os_calloc(2, sizeof(logreader), log_config->config);
        logf = log_config->config;
        logf[0].file = NULL;
        logf[0].logformat = NULL;
        logf[1].file = NULL;
        logf[1].logformat = NULL;
    }
    else
    {
        logf = log_config->config;
        while(logf[pl].file != NULL)
        {
            pl++;
        }
        /* Allocating more memory */
        os_realloc(logf, (pl +2)*sizeof(logreader), log_config->config);
        logf = log_config->config;
        logf[pl +1].file = NULL;
        logf[pl +1].logformat = NULL;
    }
    
    logf[pl].file = NULL;
    logf[pl].logformat = NULL;
    logf[pl].fp = NULL;
    logf[pl].ffile = NULL;
    
    /* Searching for entries related to files */
    i = 0;
    while(node[i])
    {
        if(!node[i]->element)
        {
            merror(XML_ELEMNULL, ARGV0);
            return(OS_INVALID);
        }
        else if(!node[i]->content)
        {
            merror(XML_VALUENULL, ARGV0, node[i]->element);
            return(OS_INVALID);
        }
        else if(strcmp(node[i]->element,xml_localfile_location) == 0)
        {
            /* We need the format file */
            if(strchr(node[i]->content, '%'))
            {
                struct tm *p;
                time_t l_time = time(0);
                char lfile[OS_FLSIZE + 1];
                size_t ret;

                p = localtime(&l_time);

                lfile[OS_FLSIZE] = '\0';
                ret = strftime(lfile, OS_FLSIZE, node[i]->content, p);
                if(ret == 0)
                {
                    merror(PARSE_ERROR, ARGV0, logf[i].ffile);
                    return(OS_INVALID);
                }

                os_strdup(node[i]->content, logf[pl].ffile);
            }
            os_strdup(node[i]->content, logf[pl].file);
        }

        else if(strcasecmp(node[i]->element,xml_localfile_logformat) == 0)
        {
            os_strdup(node[i]->content, logf[pl].logformat);

            if(strcmp(logf[pl].logformat, "syslog") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, "snort-full") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, "snort-fast") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, "apache") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, "iis") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, "squid") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, "nmapg") == 0)
            {
            }
            else if(strcmp(logf[pl].logformat, EVENTLOG) == 0)
            {
            }
            else
            {
                merror(XML_VALUEERR,ARGV0,node[i]->element,node[i]->content);
                return(OS_INVALID);
            }
        }
        else
        {
            merror(XML_INVELEM, ARGV0, node[i]->element);
            return(OS_INVALID);

        }

        i++;
    }

    /* Missing log format */
    if(!logf[pl].logformat)
    {
        merror(MISS_LOG_FORMAT, ARGV0);
        return(OS_INVALID);
    }

    /* Missing file */
    if(!logf[pl].file)
    {
        merror(MISS_FILE, ARGV0);
        return(OS_INVALID);
    }
    
    /* Verifying a valid event log config */
    if(strcmp(logf[pl].logformat, EVENTLOG) == 0)
    {
        if((strcmp(logf[pl].file, "Application") != 0)&&
           (strcmp(logf[pl].file, "System") != 0)&&
           (strcmp(logf[pl].file, "Security") != 0))
         {
             /* Invalid event log */
             merror(INV_EVTLOG, ARGV0, logf[pl].file);
             return(OS_INVALID);
         }
    }
    return(0);
}

/* EOF */
