/* $Id$ */

#ifndef MIME_H_
#define MIME_H_
#include "dbmysql.h"
#include "debug.h"
#include "list.h"

void mime_list(char *blkdata, unsigned long blksize);
int mail_adr_list(char *scan_for_field, struct list *targetlist);
#endif
