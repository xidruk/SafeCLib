#ifndef GDEFS_H
#define GDEFS_H 

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdint.h>
#include <wchar.h> 

//--> SafeClib calls 

/* dataconcat_tools */
size_t mem_concat(void *_dst_mem__, const void *_src_mem__, size_t _dst_size__, size_t _used_size__, size_t _src_size__);
size_t sdata_concat(char *_dst_data__, const char *_src_data__, size_t _max_size__);
char *sdata_dup_concat(const char *_first_str__, const char *_second_str__);

/* datadup_tools */
char *data_dup(const char *_data__);
void *data_ndup(void *_data__, size_t _n__);
char *rev_data_dup(const char *_data__);
void *rev_data_ndup(void *_data__, ssize_t _n__);
char *tcut_sdata(const char *_data__, size_t _start__, size_t _end__);
void *tcut_data(const void *_data__, size_t _start__, size_t _end__);
char *zuth_dup(const char *_data__, size_t _n__);

/* datacpy_tools */
void *data_memccpy(void *_dest__, const void *_src__, int _c__, size_t _n__);
void *data_memcpy(void *_dest__, const void *_src__, size_t _n__);
void *data_memmove(void *_dest__, const void *_src__, size_t _n__);
void *data_memset(void *_mem__, int _c__, size_t _n__);
char *data_strcpy(char *_dest__, const char *_src__);
char *data_strncpy(char *_dest__, const char *_src__, size_t _n__);
wchar_t *data_wmemcpy(wchar_t *_dest__, const wchar_t *_src__, size_t _n__);
wchar_t *data_wmemmove(wchar_t *_dest__, const wchar_t *_src__, size_t _n__);

/* datamatching_tools */
size_t find_blpos(const char *_data__, char _t_c__);
size_t find_bpos(const char *_data__, char _t_c__);
char *find_tslptr(const char *_data__, char _t_c__);
char *find_tsptr(const char *_data__, char _t_c__);
int mem_mth(const void *_fs_data__, const void *_sc_data__, size_t _dst__);
int sdata_mth(const char *_f_data__, const char *_sc_data__);

/* get_size */
size_t get_dsize(const char *_data__);

#endif