#ifndef __LZMA_H
#define __LZMA_H

extern int encode_file(const char *in_file_name, const char* out_file_name, char* buf);
extern int decode_file(const char *in_file_name, const char* out_file_name, char* buf);

#endif