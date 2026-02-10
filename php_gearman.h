/*
 * Gearman PHP Extension
 *
 * Copyright (C) 2008 James M. Luedke <contact@jamesluedke.com>,
 *                    Eric Day <eday@oddments.org>
 * All rights reserved.
 *
 * Use and distribution licensed under the PHP license.  See
 * the LICENSE file in this directory for full text.
 */

#ifndef __PHP_GEARMAN_H
#define __PHP_GEARMAN_H

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"

#include "zend_exceptions.h"
#include "zend_interfaces.h"

#include <libgearman-1.0/gearman.h>
#include <libgearman-1.0/interface/status.h>
#include <libgearman-1.0/status.h>

/* module version */
#define PHP_GEARMAN_VERSION "2.1.5"

extern zend_module_entry gearman_module_entry;
#define phpext_gearman_ptr &gearman_module_entry

typedef enum {
        GEARMAN_OBJ_CREATED = (1 << 0)
} gearman_obj_flags_t;

extern zend_class_entry *gearman_exception_ce;

#define GEARMAN_EXCEPTION(__error, __error_code) { \
        zend_throw_exception(gearman_exception_ce, __error, __error_code); \
        return; \
}

void *_php_malloc(size_t size, void *arg);
void _php_free(void *ptr, void *arg);

/* backward compat macros */

#ifndef ZVAL_EMPTY_ARRAY
#define ZVAL_EMPTY_ARRAY(value)         array_init(value)
#endif

#ifndef RETVAL_EMPTY_ARRAY
#define RETVAL_EMPTY_ARRAY()            ZVAL_EMPTY_ARRAY(return_value)
#endif

#ifndef RETURN_EMPTY_ARRAY
#define RETURN_EMPTY_ARRAY()            do { RETVAL_EMPTY_ARRAY(); return; } while (0)
#endif

#ifndef IS_MIXED
# define IS_MIXED 0
#endif

#ifndef ZEND_ARG_INFO_WITH_DEFAULT_VALUE
#define ZEND_ARG_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, default_value) \
    ZEND_ARG_INFO(pass_by_ref, name)
#endif

#if PHP_VERSION_ID < 70200
#undef ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX
#define ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, class_name, allow_null) \
    static const zend_internal_arg_info name[] = { \
        { (const char*)(zend_uintptr_t)(required_num_args), ( #class_name ), 0, return_reference, allow_null, 0 },
#endif

#ifndef ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX
# define ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(name, return_reference, required_num_args, class_name, allow_null) \
    ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, class_name, allow_null)
#endif

#ifndef ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX
# define ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(name, return_reference, num_args, type) \
    ZEND_BEGIN_ARG_INFO_EX(name, 0, return_reference, num_args)
#endif

#ifndef ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX
# define ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(name, return_reference, required_num_args, class_name, type) \
    ZEND_BEGIN_ARG_INFO_EX(name, 0, return_reference, required_num_args)
#endif

#ifndef ZEND_ARG_TYPE_MASK
# define ZEND_ARG_TYPE_MASK(pass_by_ref, name, type_mask, default_value) \
    ZEND_ARG_TYPE_INFO(pass_by_ref, name, 0, 0)
#endif

#ifndef ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE
# define ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, type_hint, allow_null, default_value) \
    ZEND_ARG_TYPE_INFO(pass_by_ref, name, type_hint, allow_null)
#endif

#endif  /* __PHP_GEARMAN_H */
