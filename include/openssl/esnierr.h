/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_ESNIERR_H
# define HEADER_ESNIERR_H

# ifndef HEADER_SYMHACKS_H
#  include <openssl/symhacks.h>
# endif

# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_ESNI_strings(void);

/*
 * ESNI function codes.
 */
# define ESNI_F_BASE64_DECODE                             101
# define ESNI_F_CHECKSUM_CHECK                            104
# define ESNI_F_DEC                                       106
# define ESNI_F_ENC                                       103
# define ESNI_F_ESNI_AEAD_DEC                             107
# define ESNI_F_ESNI_AEAD_ENC                             108
# define ESNI_F_ESNI_BASE64_DECODE                        109
# define ESNI_F_ESNI_CHECKSUM_CHECK                       110
# define ESNI_F_ESNI_MAKE_RD                              111
# define ESNI_F_ESNI_MAKE_SE_FROM_ER                      112
# define ESNI_F_KEY_DERIVATION                            113
# define ESNI_F_MAKEESNICONTENTHASH                       114
# define ESNI_F_NEW_FROM_BASE64                           102
# define ESNI_F_SERVER_ENABLE                             105
# define ESNI_F_SSL_ESNI_DEC                              115
# define ESNI_F_SSL_ESNI_DUP                              116
# define ESNI_F_SSL_ESNI_ENC                              117
# define ESNI_F_SSL_ESNI_NEW_FROM_BASE64                  118
# define ESNI_F_SSL_ESNI_NEW_FROM_BUFFER                  122
# define ESNI_F_SSL_ESNI_QUERY                            123
# define ESNI_F_SSL_ESNI_RECORD_NEW_FROM_BINARY           119
# define ESNI_F_SSL_ESNI_REDUCE                           124
# define ESNI_F_SSL_ESNI_SERVER_ENABLE                    120
# define ESNI_F_SSL_ESNI_WRAP_KEYSHARE                    121

/*
 * ESNI reason codes.
 */
# define ESNI_R_ASCIIHEX_DECODE_ERROR                     113
# define ESNI_R_BASE64_DECODE_ERROR                       110
# define ESNI_R_NOT_IMPL                                  112
# define ESNI_R_RR_DECODE_ERROR                           111

#endif
