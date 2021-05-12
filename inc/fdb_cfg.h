/*
 * Copyright (c) 2020, Armink, <armink.ztl@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief configuration file
 */

#ifndef _FDB_CFG_H_
#define _FDB_CFG_H_
#include "b_config.h"
/* using KVDB feature */
#if _FDB_USING_KVDB
#define FDB_USING_KVDB
#endif

#ifdef FDB_USING_KVDB
/* Auto update KV to latest default when current KVDB version number is changed. @see
 * fdb_kvdb.ver_num */
#if _FDB_KV_AUTO_UPDATE
#define FDB_KV_AUTO_UPDATE
#endif
/* #define FDB_KV_AUTO_UPDATE */
#endif

/* using TSDB (Time series database) feature */
#if _FDB_USING_TSDB
#define FDB_USING_TSDB
#endif

/* Using FAL storage mode */
#if _FDB_USING_FAL_MODE
#define FDB_USING_FAL_MODE
#endif

#ifdef FDB_USING_FAL_MODE
/* the flash write granularity, unit: bit
 * only support 1(nor flash)/ 8(stm32f2/f4)/ 32(stm32f1) */
#define FDB_WRITE_GRAN _FDB_WRITE_GRAN /* @note you must define it for a value */
#endif

/* Using file storage mode by LIBC file API, like fopen/fread/fwrte/fclose */
/* #define FDB_USING_FILE_LIBC_MODE */

/* Using file storage mode by POSIX file API, like open/read/write/close */
/* #define FDB_USING_FILE_POSIX_MODE */

/* MCU Endian Configuration, default is Little Endian Order. */
/* #define FDB_BIG_ENDIAN */

/* log print macro. default EF_PRINT macro is printf() */
/* #define FDB_PRINT(...)              my_printf(__VA_ARGS__) */

/* print debug information */
#if _FDB_DEBUG_ENABLE
#define FDB_DEBUG_ENABLE
#endif
#endif /* _FDB_CFG_H_ */
