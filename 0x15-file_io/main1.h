#ifndef _main1_h_
#define _maini1_h_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_addr(char *ptr);
void print_type(char *ptr);
void print_osabi(char *ptr);
void print_version(char *ptr);
void print_data(char *ptr);
void print_magic(char *ptr);
void check_sys(char *ptr);
int check_elf(char *ptr);


#endif
