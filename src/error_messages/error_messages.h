/*   $OSSEC, error_messages.h, v0.1, 2005/03/22, Daniel B. Cid$   */

/* Copyright (C) 2004,2005 Daniel B. Cid <dcid@ossec.net>
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

/* Part of OSSEC HIDS (http://www.ossec.net/ossec/)
 * Error/debug messages
 */


#ifndef _ERROR_MESSAGES__H

#define _ERROR_MESSAGES__H


	/***  Error messages - English ***/

/* SYSTEM ERRORS */
#define EXITING       "Exiting."
#define FORK_ERROR	  "%s(1101): Unable to fork. Exiting."
#define MEM_ERROR	  "%s(1102): Memory error. Exiting."
#define FOPEN_ERROR   "%s(1103): Unable to open file '%s'."
#define SIZE_ERROR    "%s(1104): Maximum string size reached for: %s."
#define NULL_ERROR    "%s(1105): Null string used. "
#define FORMAT_ERROR  "%s(1106): String not correctly formated."  
#define MKDIR_ERROR   "%s(1107): Unable to create directory: '%s'"
#define PERM_ERROR    "%s(1108): Permission error. Operation not completed."
#define THREAD_ERROR  "%s(1109): Error creating new pthread."
#define READ_ERROR    "%s(1110): Error reading socket."
#define WAITPID_ERROR "%s(1111): Waitpid error."                                
#define SETSID_ERROR  "%s(1112): Setsid error."
#define MUTEX_ERROR   "%s(1113): Error setting pthread mutex."
#define SELECT_ERROR  "%s(1114): Unable to select."
#define FREAD_ERROR   "%s(1115): Error reading file '%s'."
#define FSEEK_ERROR   "%s(1116): Error handling file '%s' (fseek)."
#define FILE_ERROR    "%s(1117): Error handling file '%s' (date of change)."
#define SYSTEM_ERROR  "%s(1118): Internal error. Exiting.."
#define FGETS_ERROR   "%s(1119): Invalid line on file '%s': %s."


/* COMMON ERRORS */
#define CONN_ERROR 	    "%s(1201): No remote connection configured."
#define CONFIG_ERROR	"%s(1202): Configuration problem. Exiting."
#define USER_ERROR	    "%s(1203): Invalid user '%s' or group '%s' given."
#define CONNTYPE_ERROR 	"%s(1204): Invalid connection type: '%s'."
#define PORT_ERROR	    "%s(1205): No port specified. Using default: '%d'."
#define BIND_ERROR	    "%s(1206): Unable to Bind port '%d'"
#define SETGID_ERROR	"%s(1207): Unable to switch to group: '%s'."	
#define SETUID_ERROR	"%s(1208): Unable to switch to user: '%s'."
#define CHROOT_ERROR	"%s(1209): Unable to chroot to directory: '%s'."
#define QUEUE_ERROR	    "%s(1210): Queue '%s' not accessible."
#define QUEUE_FATAL	    "%s(1211): Unable to access queue: '%s'. Giving up.."
#define PID_ERROR	    "%s(1212): Unable to create PID file."
#define DENYIP_ERROR	"%s(1213): Message from %s not allowed."
#define MSG_ERROR	    "%s(1214): Problem receiving message from %s."
#define CLIENT_ERROR	"%s(1215): No client configured. Exiting."
#define CONNS_ERROR	    "%s(1216): Connection error to %s."
#define SEC_ERROR	    "%s(1217): Error creating encrypted message."
#define SEND_ERROR	    "%s(1218): Unable to send message to %s."
#define RULESLOAD_ERROR	"%s(1219): Unable to access the rules directory."
#define RULES_ERROR	    "%s(1220): Error loading the rules: '%s'."
#define QUEUE_SEND      "%s(1224): Error sending message to queue."
#define SIGNAL_RECV     "%s(1225): SIGNAL Received. Exit Cleaning..."
#define XML_ERROR       "%s(1226): Error reading XML file '%s': %s (line %d)."
#define XML_ERROR_VAR   "%s(1227): Error applying XML variables."
#define XML_NO_ELEM     "%s(1228): Element '%s' without any option."
#define XML_INVALID     "%s(1229): Invalid element '%s' on the '%s' config."
#define XML_INVELEM     "%s(1230): Invalid element in the configuration: %s."
#define XML_ELEMNULL    "%s(1231): Invalid NULL element in the configuration."
#define XML_READ_ERROR  "%s(1232): Error reading XML. Unknown."
#define XML_VALUENULL   "%s(1234): Invalid NULL content for element: %s."
#define XML_VALUEERR    "%s(1235): Invalid value for element '%s': %s."
#define XML_MAXREACHED  "%s(1236): Maximum number of elements reached for: %s."
#define INVALID_IP      "%s(1237): Invalid ip address: '%s'."
#define INVALID_ELEMENT "%s(1238): Invalid value for element '%s': %s"
#define NO_CONFIG       "%s(1239): Configuration file not found: '%s'."
#define INVALID_TIME    "%s(1240): Invalid time format: '%s'."
#define INVALID_DAY     "%s(1241): Invalid day format: '%s'."

#define MAILQ_ERROR	    "%s(1221): No Mail queue at %s"
#define IMSG_ERROR	    "%s(1222): Invalid msg: %s"
#define SNDMAIL_ERROR	"%s(1223): Error Sending email to %s (smtp server)"


/* rootcheck */
#define MAX_RK_MSG      "%s(1250): Maximum number of global files reached: %d"


/* syscheck */
#define SYSCHECK_NO_OPT "%s(1701): No option provided for directories: '%s',"\
                        "ignoring it."
#define SK_NO_DIR       "%s(1702): No directory provided for 'directories' "\
                        "element."
#define SK_INV_ATTR     "%s(1703): Invalid attribute '%s' for directory option"
#define SK_INV_OPT      "%s(1704): Invalid option '%s' for attribute '%s'"
#define SK_NO_DB        "%s(1705): No integrity database found at '%s'."
#define SK_CREATE_DB    "%s(1750): Creating new database for integrity check"


/* Analysisd */
#define FTS_LIST_ERROR  "%s(1260): Error initiating FTS list"
#define CRAFTED_IP      "%s(1271): Invalid IP Address '%s'. Possible attack."
#define CRAFTED_USER    "%s(1272): Invalid username '%s'. Possible attack."
#define INVALID_CAT     "%s(1273): Invalid category '%s' chosen."
#define INVALID_CONFIG  "%s(1274): Invalid configuration. Element '%s': %s."


/* Log collector */

/* Remoted */
#define NO_REM_CONN     "%s(1701): No remote connection configured."

/* Active response */
#define AR_CMD_MISS     "%s(1280): Missing command options. " \
                        "You must specify a 'name', 'executable' and 'expect'."
#define AR_MISS         "%s(1281): Missing options in the active response " \
                        "configuration. "                        
#define ARQ_ERROR       "%s(1301): Unable to connect to active response queue."
#define AR_INV_LOC      "%s(1302): Invalid active response location: '%s'."
#define AR_INV_CMD      "%s(1303): Invalid command '%s' in the active response."
#define AR_DEF_AGENT    "%s(1304): No agent defined for response."
#define AR_NO_TIMEOUT   "%s(1305): Timeout not allowed for command: '%s'."


#define EXECD_INV_MSG   "%s(1310): Invalid active response (execd) message '%s'."
#define EXEC_INV_NAME   "%s(1311): Invalid command name '%s' provided."
#define EXEC_CMDERROR   "%s(1312): Error executing '%s': %s"
#define EXEC_INV_CONF   "%s(1313): Invalid active response config: '%s'."
#define EXEC_DISABLED   "%s(1350): Active response disabled. Exiting."

#define AR_NOAGENT_ERROR    "%s(1320): Agent '%s' not found."


/* List operations */
#define LIST_ERROR      "%s(1290); Error creating a new list (calloc)."
#define LIST_ADD_ERROR  "%s(1291): Error adding nodes to list."
#define LIST_SIZE_ERROR "%s(1292): Error setting error size."
#define LIST_FREE_ERROR "%s(1293): Error setting data free pointer."

/* Log collector messages */
#define MISS_LOG_FORMAT "%s(1901): Missing 'log_format' element."
#define MISS_FILE       "%s(1902): Missing 'location' element."
#define INV_EVTLOG      "%s(1903): Invalid event log: '%s'."
#define LOGC_FILE_ERROR "%s(1904): Unable to read file: '%s'"
#define NO_FILE         "%s(1905): No file configured to monitor."
#define PARSE_ERROR     "%s(1906): Error parsing file: '%s'."
#define READING_FILE    "%s(1950): Analyzing file: '%s'."
#define READING_EVTLOG  "%s(1951): Analyzing event log: '%s'."


/* Encryption/ auth errors */
#define INVALID_KEY     "%s(1401): Error reading authentication key: '%s'."
#define NO_AUTHFILE     "%s(1402): Authentication key file '%s' not found."
#define ENCFORMAT_ERROR "%s(1403): Incorrectly formated message from '%s'."
#define ENCKEY_ERROR    "%s(1404): Authentication error. Wrong key from '%s'."
#define ENCSIZE_ERROR   "%s(1405): Message size not valid: '%s'."                                   
#define ENCSUM_ERROR    "%s(1406): Checksum mismatch on message from '%s'."
#define ENCTIME_ERROR   "%s(1407): Duplicated counter for '%s'."

                                   
/* Regex errors */
#define REGEX_COMPILE   "%s(1450): Syntax error on regex: '%s': %d."
#define REGEX_SUBS      "%s(1451): Missing sub_strings on regex: '%s'."

/* Mail errors */
#define INVALID_SMTP    "%s(1501): Invalid SMTP Server: %s"
#define INVALID_MAIL    "%s(1502): Invalid Email Address: %s"

/* Decoders */
#define PPLUGIN_INV     "%s(2101): Parent decoder name invalid: '%s'"
#define PDUP_INV        "%s(2102): Duplicated decoder with prematch: '%s'"
#define PDUPFTS_INV     "%s(2103): Duplicated decoder with fts set: '%s'"
#define DUP_INV         "%s(2104): Invalid duplicated decoder: '%s'"
#define DEC_PLUGIN_ERR  "%s(2105): Error loading decoder options."
#define DECODER_ERROR   "%s(2106): Error adding decoder plugin."
#define DEC_REGEX_ERROR "%s(2107): Decoder configuration error: '%s'"
#define DECODE_NOPRE    "%s(2108): No 'prematch' found in decoder: '%s'"
#define DUP_REGEX       "%s(2109): Duplicated offsets for same regex: '%s'"
#define INV_OFFSET      "%s(2120): Invalid offset value: '%s'"
#define INV_ATTR        "%s(2121): Invalid decoder attribute: '%s'"

/* os_zlib */
#define COMPRESS_ERR    "%s(2201): Error compressing string: '%s'."
#define UNCOMPRESS_ERR  "%s(2202): Error uncompressing string."

/* read defines */
#define DEF_NOT_FOUND   "%s(2301): Definition not found for: '%s.%s'."
#define INV_DEF         "%s(2302): Invalid definition for %s.%s: '%s'."


/* Verbose messages */
#define STARTUP_MSG	"%s: Started (pid: %d)."
#define PRIVSEP_MSG	"%s: Chrooted to directory: %s, using user: %s"

#define NO_SYSLOG       "%s(1501): No IP or network allowed in the access list" \
                        " for syslog. No reason for running it. Exiting."
#define CONN_TO     "%s: Connected to '%s' (%s queue)"
#define MAIL_DIS    "%s: E-Mail notification disabled. Clean Exit."

                        
/* Debug Messages */
#define STARTED_MSG "%s: Starting ..."
#define FOUND_USER  "%s: Found user/group ..."
#define ASINIT      "%s: Active response initialized ..."
#define READ_CONFIG "%s: Read configuration ..."


#endif /* _ERROR_MESSAGES__H */

