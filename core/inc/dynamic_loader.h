// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

/** @file       dynamic_loader.h
 *  @brief      Library for loading gateway modules from dynamically-linked
 *              libraries (Windows) or shared objects (Linux).
 *
 *  @details    The gateway SDK uses this module loader library by default to
 *              load modules from DLLs or SOs.
 */

#ifndef DYNAMIC_LOADER_H
#define DYNAMIC_LOADER_H

#include "module.h"
#include "module_loader.h"

#ifdef __cplusplus
extern "C"
{
#endif

/** @brief Structure to load a dynamically linked module */
typedef struct DYNAMIC_LOADER_CONFIG_TAG
{
    /** @brief file name, path to shared library */
    const char * moduleLibraryFileName;
} DYNAMIC_LOADER_CONFIG;

/** @brief      The API for the dynamically linked module loader. */
extern const MODULE_LOADER_API * DynamicLoader_GetApi(void);

#ifdef __cplusplus
}
#endif

#endif // DYNAMIC_LOADER_H
