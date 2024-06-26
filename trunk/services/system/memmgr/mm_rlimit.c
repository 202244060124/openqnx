/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 *
 * You must obtain a written license from and pay applicable license fees to QNX
 * Software Systems before you may reproduce, modify or distribute this software,
 * or any work that includes all or part of this software.   Free development
 * licenses are available for evaluation and non-commercial purposes.  For more
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *
 * This file may contain contributions from others.  Please review this entire
 * file for other proprietary rights or license notices, as well as the QNX
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/
 * for other information.
 * $
 */

#include "vmm.h"

int rdecl rlimit_blown(PROCESS* prp, int which, size_t new)
{
    // RUSH3: There probably should be an rlimit_t type for when we
    // RUSH3: support 64bit machines.
    uint32_t rlimit = prp->rlimit_vals_soft[which];

    if (rlimit == RLIM_INFINITY)
        return 0;
    if (new < rlimit)
        return 0;
    return 1;
}

__SRCVERSION("mm_rlimit.c $Rev: 153052 $");
