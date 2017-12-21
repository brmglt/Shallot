#ifndef PRINT_H
#define PRINT_H

#include <openssl/rsa.h>

void base32_onion(char *dst, unsigned char *src);
void print_onion(FILE * stream, char *onion);
void print_prkey(FILE * stream, RSA *rsa);

#endif
