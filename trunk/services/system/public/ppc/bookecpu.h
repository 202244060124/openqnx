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

/*
 *  ppc/bookecpu.h
 *
 * Registers specific to the book E series
 *

 */

#ifndef __PPC_BOOKECPU_H_INCLUDED
#define __PPC_BOOKECPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

/*
 * TLB fields. Since Book E does not describe where these fields
 * go in a TLB (bah, humbug :-(), this structure is artificial and
 * any TLB reading/writing routines will have to munge where the
 * bits actually are to/from where they are positioned here.
 */

typedef struct ppcbke_tlb {
    _Paddr64t rpn;  /* Real Page Number */
    _Uintptrt epn;  /* Effective Page Number */
    _Uint32t tid;   /* Translation ID */
    _Uint16t attr;  /* Storage attributes */
    _Uint8t access; /* Access control */
    _Uint8t size;   /* Page size */
    _Uint8t ts;     /* Translation Space */
    _Uint8t v;      /* Valid */
} ppcbke_tlb_t;

#define PPCBKE_TLB_ATTR_E                 0x0001
#define PPCBKE_TLB_ATTR_G                 0x0002
#define PPCBKE_TLB_ATTR_M                 0x0004
#define PPCBKE_TLB_ATTR_I                 0x0008
#define PPCBKE_TLB_ATTR_W                 0x0010
#define PPCBKE_TLB_ATTR_U3                0x0100
#define PPCBKE_TLB_ATTR_U2                0x0200
#define PPCBKE_TLB_ATTR_U1                0x0400
#define PPCBKE_TLB_ATTR_U0                0x0800
/* Motorola has defined some additional attribute bits. See below */

#define PPCBKE_TLB_ACCESS_SR              0x01
#define PPCBKE_TLB_ACCESS_SW              0x02
#define PPCBKE_TLB_ACCESS_SX              0x04
#define PPCBKE_TLB_ACCESS_UR              0x08
#define PPCBKE_TLB_ACCESS_UW              0x10
#define PPCBKE_TLB_ACCESS_UX              0x20

#define PPCBKE_TLB_SIZE_1K                0x0
#define PPCBKE_TLB_SIZE_4K                0x1
#define PPCBKE_TLB_SIZE_16K               0x2
#define PPCBKE_TLB_SIZE_64K               0x3
#define PPCBKE_TLB_SIZE_256K              0x4
#define PPCBKE_TLB_SIZE_1M                0x5
#define PPCBKE_TLB_SIZE_4M                0x6
#define PPCBKE_TLB_SIZE_16M               0x7
#define PPCBKE_TLB_SIZE_64M               0x8
#define PPCBKE_TLB_SIZE_256M              0x9
#define PPCBKE_TLB_SIZE_1G                0xa
#define PPCBKE_TLB_SIZE_4G                0xb
#define PPCBKE_TLB_SIZE_16G               0xc
#define PPCBKE_TLB_SIZE_64G               0xd
#define PPCBKE_TLB_SIZE_256G              0xe
#define PPCBKE_TLB_SIZE_1T                0xf

#define PPCBKE_TLB_TS                     0x1

#define PPCBKE_TLB_V                      0x1

/*
 * Exception Syndrome Register bits
 */
#define PPCBKE_ESR_PIL                    _ONEBIT32B(36 - 32)
#define PPCBKE_ESR_PPR                    _ONEBIT32B(37 - 32)
#define PPCBKE_ESR_PTR                    _ONEBIT32B(38 - 32)
#define PPCBKE_ESR_FP                     _ONEBIT32B(39 - 32)
#define PPCBKE_ESR_ST                     _ONEBIT32B(40 - 32)
#define PPCBKE_ESR_DLK0                   _ONEBIT32B(42 - 32)
#define PPCBKE_ESR_DLK1                   _ONEBIT32B(43 - 32)
#define PPCBKE_ESR_AP                     _ONEBIT32B(44 - 32)
#define PPCBKE_ESR_PUO                    _ONEBIT32B(45 - 32)
#define PPCBKE_ESR_BO                     _ONEBIT32B(46 - 32)
#define PPCBKE_ESR_PIE                    _ONEBIT32B(47 - 32)

/*
 * Timer Control Register bits
 */
#define PPCBKE_TCR_WP_MASK                _BITFIELD32B(33 - 32, 0x3)
#define PPCBKE_TCR_WP_SHIFT               (31 - (33 - 32))
#define PPCBKE_TCR_WP_0                   _BITFIELD32B(33 - 32, 0x0)
#define PPCBKE_TCR_WP_1                   _BITFIELD32B(33 - 32, 0x1)
#define PPCBKE_TCR_WP_2                   _BITFIELD32B(33 - 32, 0x2)
#define PPCBKE_TCR_WP_3                   _BITFIELD32B(33 - 32, 0x3)
#define PPCBKE_TCR_WRC_MASK               _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_TCR_WRC_SHIFT              (31 - (35 - 32))
#define PPCBKE_TCR_WRC_NONE               _BITFIELD32B(35 - 32, 0x0)
#define PPCBKE_TCR_WRC_RESET              _BITFIELD32B(35 - 32, 0x1)
#define PPCBKE_TCR_WRC_IMPDEP0            _BITFIELD32B(35 - 32, 0x2)
#define PPCBKE_TCR_WRC_IMPDEP1            _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_TCR_WIE                    _ONEBIT32B(36 - 32)
#define PPCBKE_TCR_DIE                    _ONEBIT32B(37 - 32)
#define PPCBKE_TCR_FP_MASK                _BITFIELD32B(39 - 32, 0x3)
#define PPCBKE_TCR_FP_SHIFT               (31 - (39 - 32))
#define PPCBKE_TCR_FP_0                   _BITFIELD32B(39 - 32, 0x0)
#define PPCBKE_TCR_FP_1                   _BITFIELD32B(39 - 32, 0x1)
#define PPCBKE_TCR_FP_2                   _BITFIELD32B(39 - 32, 0x2)
#define PPCBKE_TCR_FP_3                   _BITFIELD32B(39 - 32, 0x3)
#define PPCBKE_TCR_FIE                    _ONEBIT32B(40 - 32)
#define PPCBKE_TCR_ARE                    _ONEBIT32B(41 - 32)
#define PPCBKE_TCR_EMU_PPCDEC             _ONEBIT32B(42 - 32) /* optional */

/*
 * Timer Status Register bits
 */
#define PPCBKE_TSR_ENW                    _ONEBIT32B(32 - 32)
#define PPCBKE_TSR_WIS                    _ONEBIT32B(33 - 32)
#define PPCBKE_TSR_WRS_MASK               _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_TSR_WRS_SHIFT              (31 - (35 - 32))
#define PPCBKE_TSR_WRS_NONE               _BITFIELD32B(35 - 32, 0x0)
#define PPCBKE_TSR_WRS_IMPDEP0            _BITFIELD32B(35 - 32, 0x1)
#define PPCBKE_TSR_WRS_IMPDEP1            _BITFIELD32B(35 - 32, 0x2)
#define PPCBKE_TSR_WRS_IMPDEP2            _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_TSR_DIS                    _ONEBIT32B(36 - 32)
#define PPCBKE_TSR_FIS                    _ONEBIT32B(37 - 32)

/*
 * Debug Control Register 0 bits
 */
#define PPCBKE_DBCR0_IMPL0                _ONEBIT32B(32 - 32)
#define PPCBKE_DBCR0_IDM                  _ONEBIT32B(33 - 32)
#define PPCBKE_DBCR0_RST_MASK             _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBCR0_RST_NORESET          _BITFIELD32B(35 - 32, 0)
#define PPCBKE_DBCR0_RST_IMPL1            _BITFIELD32B(35 - 32, 1)
#define PPCBKE_DBCR0_RST_IMPL2            _BITFIELD32B(35 - 32, 2)
#define PPCBKE_DBCR0_RST_IMPL3            _BITFIELD32B(35 - 32, 3)
#define PPCBKE_DBCR0_ICMP                 _ONEBIT32B(36 - 32)
#define PPCBKE_DBCR0_BRT                  _ONEBIT32B(37 - 32)
#define PPCBKE_DBCR0_IRPT                 _ONEBIT32B(38 - 32)
#define PPCBKE_DBCR0_TRAP                 _ONEBIT32B(39 - 32)
#define PPCBKE_DBCR0_IAC1                 _ONEBIT32B(40 - 32)
#define PPCBKE_DBCR0_IAC2                 _ONEBIT32B(41 - 32)
#define PPCBKE_DBCR0_IAC3                 _ONEBIT32B(42 - 32)
#define PPCBKE_DBCR0_IAC4                 _ONEBIT32B(43 - 32)
#define PPCBKE_DBCR0_DAC1_MASK            _BITFIELD32B(45 - 32, 0x3)
#define PPCBKE_DBCR0_DAC1_NONE            _BITFIELD32B(45 - 32, 0x0)
#define PPCBKE_DBCR0_DAC1_STORE           _BITFIELD32B(45 - 32, 0x1)
#define PPCBKE_DBCR0_DAC1_LOAD            _BITFIELD32B(45 - 32, 0x2)
#define PPCBKE_DBCR0_DAC1_BOTH            _BITFIELD32B(45 - 32, 0x3)
#define PPCBKE_DBCR0_DAC2_MASK            _BITFIELD32B(47 - 32, 0x3)
#define PPCBKE_DBCR0_DAC2_NONE            _BITFIELD32B(47 - 32, 0x0)
#define PPCBKE_DBCR0_DAC2_STORE           _BITFIELD32B(47 - 32, 0x1)
#define PPCBKE_DBCR0_DAC2_LOAD            _BITFIELD32B(47 - 32, 0x2)
#define PPCBKE_DBCR0_DAC2_BOTH            _BITFIELD32B(47 - 32, 0x3)
#define PPCBKE_DBCR0_RET                  _ONEBIT32B(48 - 32)
#define PPCBKE_DBCR0_FT                   _ONEBIT32B(63 - 32)

/*
 * Debug Control Register 1 bits
 */
#define PPCBKE_DBCR1_IAC1US_MASK          _BITFIELD32B(33 - 32, 0x3)
#define PPCBKE_DBCR1_IAC1US_BOTH          _BITFIELD32B(33 - 32, 0x0)
#define PPCBKE_DBCR1_IAC1US_RESERVED      _BITFIELD32B(33 - 32, 0x1)
#define PPCBKE_DBCR1_IAC1US_SYSTEM        _BITFIELD32B(33 - 32, 0x2)
#define PPCBKE_DBCR1_IAC1US_USER          _BITFIELD32B(33 - 32, 0x3)
#define PPCBKE_DBCR1_IAC1ER_MASK          _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBCR1_IAC1ER_EFFECTIVE     _BITFIELD32B(35 - 32, 0x0)
#define PPCBKE_DBCR1_IAC1ER_REAL          _BITFIELD32B(35 - 32, 0x1)
#define PPCBKE_DBCR1_IAC1ER_EFFECTIVE_IS0 _BITFIELD32B(35 - 32, 0x2)
#define PPCBKE_DBCR1_IAC1ER_EFFECTIVE_IS1 _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBCR1_IAC2US_MASK          _BITFIELD32B(37 - 32, 0x3)
#define PPCBKE_DBCR1_IAC2US_BOTH          _BITFIELD32B(37 - 32, 0x0)
#define PPCBKE_DBCR1_IAC2US_RESERVED      _BITFIELD32B(37 - 32, 0x1)
#define PPCBKE_DBCR1_IAC2US_SYSTEM        _BITFIELD32B(37 - 32, 0x2)
#define PPCBKE_DBCR1_IAC2US_USER          _BITFIELD32B(37 - 32, 0x3)
#define PPCBKE_DBCR1_IAC2ER_MASK          _BITFIELD32B(39 - 32, 0x3)
#define PPCBKE_DBCR1_IAC2ER_EFFECTIVE     _BITFIELD32B(39 - 32, 0x0)
#define PPCBKE_DBCR1_IAC2ER_REAL          _BITFIELD32B(39 - 32, 0x1)
#define PPCBKE_DBCR1_IAC2ER_EFFECTIVE_IS0 _BITFIELD32B(39 - 32, 0x2)
#define PPCBKE_DBCR1_IAC2ER_EFFECTIVE_IS1 _BITFIELD32B(39 - 32, 0x3)
#define PPCBKE_DBCR1_IAC12M_MASK          _BITFIELD32B(41 - 32, 0x3)
#define PPCBKE_DBCR1_IAC12M_EXACT         _BITFIELD32B(41 - 32, 0x0)
#define PPCBKE_DBCR1_IAC12M_BITMATCH      _BITFIELD32B(41 - 32, 0x1)
#define PPCBKE_DBCR1_IAC12M_INCLUSIVE     _BITFIELD32B(41 - 32, 0x2)
#define PPCBKE_DBCR1_IAC12M_EXCLUSIVE     _BITFIELD32B(41 - 32, 0x2)
#define PPCBKE_DBCR1_IAC3US_MASK          _BITFIELD32B(49 - 32, 0x3)
#define PPCBKE_DBCR1_IAC3US_BOTH          _BITFIELD32B(49 - 32, 0x0)
#define PPCBKE_DBCR1_IAC3US_RESERVED      _BITFIELD32B(49 - 32, 0x1)
#define PPCBKE_DBCR1_IAC3US_SYSTEM        _BITFIELD32B(49 - 32, 0x2)
#define PPCBKE_DBCR1_IAC3US_USER          _BITFIELD32B(49 - 32, 0x3)
#define PPCBKE_DBCR1_IAC3ER_MASK          _BITFIELD32B(51 - 32, 0x3)
#define PPCBKE_DBCR1_IAC3ER_EFFECTIVE     _BITFIELD32B(51 - 32, 0x0)
#define PPCBKE_DBCR1_IAC3ER_REAL          _BITFIELD32B(51 - 32, 0x1)
#define PPCBKE_DBCR1_IAC3ER_EFFECTIVE_IS0 _BITFIELD32B(51 - 32, 0x2)
#define PPCBKE_DBCR1_IAC3ER_EFFECTIVE_IS1 _BITFIELD32B(51 - 32, 0x3)
#define PPCBKE_DBCR1_IAC4US_MASK          _BITFIELD32B(53 - 32, 0x3)
#define PPCBKE_DBCR1_IAC4US_BOTH          _BITFIELD32B(53 - 32, 0x0)
#define PPCBKE_DBCR1_IAC4US_RESERVED      _BITFIELD32B(53 - 32, 0x1)
#define PPCBKE_DBCR1_IAC4US_SYSTEM        _BITFIELD32B(53 - 32, 0x2)
#define PPCBKE_DBCR1_IAC4US_USER          _BITFIELD32B(53 - 32, 0x3)
#define PPCBKE_DBCR1_IAC4ER_MASK          _BITFIELD32B(55 - 32, 0x3)
#define PPCBKE_DBCR1_IAC4ER_EFFECTIVE     _BITFIELD32B(55 - 32, 0x0)
#define PPCBKE_DBCR1_IAC4ER_REAL          _BITFIELD32B(55 - 32, 0x1)
#define PPCBKE_DBCR1_IAC4ER_EFFECTIVE_IS0 _BITFIELD32B(55 - 32, 0x2)
#define PPCBKE_DBCR1_IAC4ER_EFFECTIVE_IS1 _BITFIELD32B(55 - 32, 0x3)
#define PPCBKE_DBCR1_IAC34M_MASK          _BITFIELD32B(57 - 32, 0x3)
#define PPCBKE_DBCR1_IAC34M_EXACT         _BITFIELD32B(57 - 32, 0x0)
#define PPCBKE_DBCR1_IAC34M_BITMATCH      _BITFIELD32B(57 - 32, 0x1)
#define PPCBKE_DBCR1_IAC34M_INCLUSIVE     _BITFIELD32B(57 - 32, 0x2)
#define PPCBKE_DBCR1_IAC34M_EXCLUSIVE     _BITFIELD32B(57 - 32, 0x2)

/*
 * Debug Control Register 2 bits
 */
#define PPCBKE_DBCR2_DAC1US_MASK          _BITFIELD32B(33 - 32, 0x3)
#define PPCBKE_DBCR2_DAC1US_BOTH          _BITFIELD32B(33 - 32, 0x0)
#define PPCBKE_DBCR2_DAC1US_RESERVED      _BITFIELD32B(33 - 32, 0x1)
#define PPCBKE_DBCR2_DAC1US_SYSTEM        _BITFIELD32B(33 - 32, 0x2)
#define PPCBKE_DBCR2_DAC1US_USER          _BITFIELD32B(33 - 32, 0x3)
#define PPCBKE_DBCR2_DAC1ER_MASK          _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBCR2_DAC1ER_EFFECTIVE     _BITFIELD32B(35 - 32, 0x0)
#define PPCBKE_DBCR2_DAC1ER_REAL          _BITFIELD32B(35 - 32, 0x1)
#define PPCBKE_DBCR2_DAC1ER_EFFECTIVE_IS0 _BITFIELD32B(35 - 32, 0x2)
#define PPCBKE_DBCR2_DAC1ER_EFFECTIVE_IS1 _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBCR2_DAC2US_MASK          _BITFIELD32B(37 - 32, 0x3)
#define PPCBKE_DBCR2_DAC2US_BOTH          _BITFIELD32B(37 - 32, 0x0)
#define PPCBKE_DBCR2_DAC2US_RESERVED      _BITFIELD32B(37 - 32, 0x1)
#define PPCBKE_DBCR2_DAC2US_SYSTEM        _BITFIELD32B(37 - 32, 0x2)
#define PPCBKE_DBCR2_DAC2US_USER          _BITFIELD32B(37 - 32, 0x3)
#define PPCBKE_DBCR2_DAC2ER_MASK          _BITFIELD32B(39 - 32, 0x3)
#define PPCBKE_DBCR2_DAC2ER_EFFECTIVE     _BITFIELD32B(39 - 32, 0x0)
#define PPCBKE_DBCR2_DAC2ER_REAL          _BITFIELD32B(39 - 32, 0x1)
#define PPCBKE_DBCR2_DAC2ER_EFFECTIVE_IS0 _BITFIELD32B(39 - 32, 0x2)
#define PPCBKE_DBCR2_DAC2ER_EFFECTIVE_IS1 _BITFIELD32B(39 - 32, 0x3)
#define PPCBKE_DBCR2_DAC12M_MASK          _BITFIELD32B(41 - 32, 0x3)
#define PPCBKE_DBCR2_DAC12M_EXACT         _BITFIELD32B(41 - 32, 0x0)
#define PPCBKE_DBCR2_DAC12M_BITMATCH      _BITFIELD32B(41 - 32, 0x1)
#define PPCBKE_DBCR2_DAC12M_INCLUSIVE     _BITFIELD32B(41 - 32, 0x2)
#define PPCBKE_DBCR2_DAC12M_EXCLUSIVE     _BITFIELD32B(41 - 32, 0x2)
#define PPCBKE_DBCR2_DVC1M_MASK           _BITFIELD32B(45 - 32, 0x3)
#define PPCBKE_DBCR2_DVC1M_ENABLED        _BITFIELD32B(45 - 32, 0x0)
#define PPCBKE_DBCR2_DVC1M_ALL            _BITFIELD32B(45 - 32, 0x1)
#define PPCBKE_DBCR2_DVC1M_SOME           _BITFIELD32B(45 - 32, 0x2)
#define PPCBKE_DBCR2_DVC1M_HALF           _BITFIELD32B(45 - 32, 0x3)
#define PPCBKE_DBCR2_DVC2M_MASK           _BITFIELD32B(47 - 32, 0x3)
#define PPCBKE_DBCR2_DVC2M_ENABLED        _BITFIELD32B(47 - 32, 0x0)
#define PPCBKE_DBCR2_DVC2M_ALL            _BITFIELD32B(47 - 32, 0x1)
#define PPCBKE_DBCR2_DVC2M_SOME           _BITFIELD32B(47 - 32, 0x2)
#define PPCBKE_DBCR2_DVC2M_HALF           _BITFIELD32B(47 - 32, 0x3)
#define PPCBKE_DBCR2_DVC1BE_MASK          _BITFIELD32B(55 - 32, 0xff)
#define PPCBKE_DBCR2_DVC1BE_SHIFT         (31 - (55 - 32))
#define PPCBKE_DBCR2_DVC2BE_MASK          _BITFIELD32B(63 - 32, 0xff)
#define PPCBKE_DBCR2_DVC2BE_SHIFT         (31 - (63 - 32))

/*
 * Debug Status Register bits
 */
#define PPCBKE_DBSR_IDE                   _ONEBIT32B(32 - 32)
#define PPCBKE_DBSR_UDE                   _ONEBIT32B(33 - 32)
#define PPCBKE_DBSR_MRR_MASK              _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBSR_MRR_SHIFT             (31 - (35 - 32))
#define PPCBKE_DBSR_MRR_NORESET           _BITFIELD32B(35 - 32, 0x0)
#define PPCBKE_DBSR_MRR_IMPL1             _BITFIELD32B(35 - 32, 0x1)
#define PPCBKE_DBSR_MRR_IMPL2             _BITFIELD32B(35 - 32, 0x2)
#define PPCBKE_DBSR_MRR_IMPL3             _BITFIELD32B(35 - 32, 0x3)
#define PPCBKE_DBSR_ICMP                  _ONEBIT32B(36 - 32)
#define PPCBKE_DBSR_BRT                   _ONEBIT32B(37 - 32)
#define PPCBKE_DBSR_IRPT                  _ONEBIT32B(38 - 32)
#define PPCBKE_DBSR_TRAP                  _ONEBIT32B(39 - 32)
#define PPCBKE_DBSR_IAC1                  _ONEBIT32B(40 - 32)
#define PPCBKE_DBSR_IAC2                  _ONEBIT32B(41 - 32)
#define PPCBKE_DBSR_IAC3                  _ONEBIT32B(42 - 32)
#define PPCBKE_DBSR_IAC4                  _ONEBIT32B(43 - 32)
#define PPCBKE_DBSR_DAC1R                 _ONEBIT32B(44 - 32)
#define PPCBKE_DBSR_DAC1W                 _ONEBIT32B(45 - 32)
#define PPCBKE_DBSR_DAC2R                 _ONEBIT32B(46 - 32)
#define PPCBKE_DBSR_DAC2W                 _ONEBIT32B(47 - 32)
#define PPCBKE_DBSR_RET                   _ONEBIT32B(48 - 32)

/*
 * SPR numbers
 */
#define PPCBKE_SPR_CSRR0                  58
#define PPCBKE_SPR_CSRR1                  59
#define PPCBKE_SPR_DAC1                   316
#define PPCBKE_SPR_DAC2                   317
#define PPCBKE_SPR_DBCR0                  308
#define PPCBKE_SPR_DBCR1                  309
#define PPCBKE_SPR_DBCR2                  310
#define PPCBKE_SPR_DBSR                   304
#define PPCBKE_SPR_DEAR                   61
#define PPCBKE_SPR_DECAR                  54
#define PPCBKE_SPR_DVC1                   318
#define PPCBKE_SPR_DVC2                   319
#define PPCBKE_SPR_ESR                    62
#define PPCBKE_SPR_IVPR                   63
#define PPCBKE_SPR_IAC1                   312
#define PPCBKE_SPR_IAC2                   313
#define PPCBKE_SPR_IAC3                   314
#define PPCBKE_SPR_IAC4                   315
#define PPCBKE_SPR_IVOR0                  400
#define PPCBKE_SPR_IVOR1                  401
#define PPCBKE_SPR_IVOR2                  402
#define PPCBKE_SPR_IVOR3                  403
#define PPCBKE_SPR_IVOR4                  404
#define PPCBKE_SPR_IVOR5                  405
#define PPCBKE_SPR_IVOR6                  406
#define PPCBKE_SPR_IVOR7                  407
#define PPCBKE_SPR_IVOR8                  408
#define PPCBKE_SPR_IVOR9                  409
#define PPCBKE_SPR_IVOR10                 410
#define PPCBKE_SPR_IVOR11                 411
#define PPCBKE_SPR_IVOR12                 412
#define PPCBKE_SPR_IVOR13                 413
#define PPCBKE_SPR_IVOR14                 414
#define PPCBKE_SPR_IVOR15                 415
/*
The following IVOR's aren't used yet, but these are the SPR numbers
they're 'supposed' to have.
*/
#define PPCBKE_SPR_IVOR16                 432
#define PPCBKE_SPR_IVOR17                 433
#define PPCBKE_SPR_IVOR18                 434
#define PPCBKE_SPR_IVOR19                 435
#define PPCBKE_SPR_IVOR20                 436
#define PPCBKE_SPR_IVOR21                 437
#define PPCBKE_SPR_IVOR22                 438
#define PPCBKE_SPR_IVOR23                 439
#define PPCBKE_SPR_IVOR24                 440
#define PPCBKE_SPR_IVOR25                 441
#define PPCBKE_SPR_IVOR26                 442
#define PPCBKE_SPR_IVOR27                 443
#define PPCBKE_SPR_IVOR28                 444
#define PPCBKE_SPR_IVOR29                 445
#define PPCBKE_SPR_IVOR30                 446
#define PPCBKE_SPR_IVOR31                 447
#define PPCBKE_SPR_IVOR32                 464
#define PPCBKE_SPR_IVOR33                 465
#define PPCBKE_SPR_IVOR34                 466
#define PPCBKE_SPR_IVOR35                 467
#define PPCBKE_SPR_IVOR36                 468
#define PPCBKE_SPR_IVOR37                 469
#define PPCBKE_SPR_IVOR38                 470
#define PPCBKE_SPR_IVOR39                 471
#define PPCBKE_SPR_IVOR40                 472
#define PPCBKE_SPR_IVOR41                 473
#define PPCBKE_SPR_IVOR42                 474
#define PPCBKE_SPR_IVOR43                 475
#define PPCBKE_SPR_IVOR44                 476
#define PPCBKE_SPR_IVOR45                 477
#define PPCBKE_SPR_IVOR46                 478
#define PPCBKE_SPR_IVOR47                 479
#define PPCBKE_SPR_IVOR48                 496
#define PPCBKE_SPR_IVOR49                 497
#define PPCBKE_SPR_IVOR50                 498
#define PPCBKE_SPR_IVOR51                 499
#define PPCBKE_SPR_IVOR52                 500
#define PPCBKE_SPR_IVOR53                 501
#define PPCBKE_SPR_IVOR54                 502
#define PPCBKE_SPR_IVOR55                 503
#define PPCBKE_SPR_IVOR56                 504
#define PPCBKE_SPR_IVOR57                 505
#define PPCBKE_SPR_IVOR58                 506
#define PPCBKE_SPR_IVOR59                 507
#define PPCBKE_SPR_IVOR60                 508
#define PPCBKE_SPR_IVOR61                 509
#define PPCBKE_SPR_IVOR62                 510
#define PPCBKE_SPR_IVOR63                 511

#define PPCBKE_SPR_PID                    48
#define PPCBKE_SPR_PIR                    286
#define PPCBKE_SPR_SPRG0                  272
#define PPCBKE_SPR_SPRG1                  273
#define PPCBKE_SPR_SPRG2                  274
#define PPCBKE_SPR_SPRG3RO                259
#define PPCBKE_SPR_SPRG3                  275
#define PPCBKE_SPR_SPRG4RO                260
#define PPCBKE_SPR_SPRG4                  276
#define PPCBKE_SPR_SPRG5RO                261
#define PPCBKE_SPR_SPRG5                  277
#define PPCBKE_SPR_SPRG6RO                262
#define PPCBKE_SPR_SPRG6                  278
#define PPCBKE_SPR_SPRG7RO                263
#define PPCBKE_SPR_SPRG7                  279
#define PPCBKE_SPR_SPRG8                  256
#define PPCBKE_SPR_USPRG0                 PPCBKE_SPR_SPRG8
#define PPCBKE_SPR_TCR                    340
#define PPCBKE_SPR_TSR                    336

/**************************************************************************
 **************************************************************************
 **
 ** From here on down are definitions that are available only on Motorola
 ** Book E implementations.
 **
 **************************************************************************
 **************************************************************************/

/* Additional attribute bits for the struct ppcbke_tlb.attr field. See above */
#define PPCBKEM_TLB_ATTR_SHAREN           0x1000
#define PPCBKEM_TLB_ATTR_X0               0x2000
#define PPCBKEM_TLB_ATTR_X1               0x4000
#define PPCBKEM_TLB_ATTR_IPROT            0x8000

/*
 * MAS0 Register bits
 */
#define PPCBKEM_MAS0_TSEL_MASK            _BITFIELD32B(35 - 32, 0x3)
#define PPCBKEM_MAS0_TSEL_SHIFT           (31 - (35 - 32))
#define PPCBKEM_MAS0_TSEL_TLB0            _BITFIELD32B(35 - 32, 0x0)
#define PPCBKEM_MAS0_TSEL_TLB1            _BITFIELD32B(35 - 32, 0x1)
#define PPCBKEM_MAS0_TSEL_TLB2            _BITFIELD32B(35 - 32, 0x2)
#define PPCBKEM_MAS0_TSEL_TLB3            _BITFIELD32B(35 - 32, 0x3)
#define PPCBKEM_MAS0_ESEL_MASK            _BITFIELD32B(47 - 32, 0x3)
#define PPCBKEM_MAS0_ESEL_SHIFT           (31 - (47 - 32))
#define PPCBKEM_MAS0_NV_MASK              _BITFIELD32B(63 - 32, 0x3)
#define PPCBKEM_MAS0_NV_SHIFT             (31 - (63 - 32))

/*
 * MAS1 Register bits
 */
#define PPCBKEM_MAS1_V                    _ONEBIT32B(32 - 32)
#define PPCBKEM_MAS1_IPROT                _ONEBIT32B(33 - 32)
#define PPCBKEM_MAS1_TID_MASK             _BITFIELD32B(47 - 32, 0x3ff)
#define PPCBKEM_MAS1_TID_SHIFT            (31 - (47 - 32))
#define PPCBKEM_MAS1_TS                   _ONEBIT32B(51 - 32)
#define PPCBKEM_MAS0_TSIZE_MASK           _BITFIELD32B(55 - 32, 0xf)
#define PPCBKEM_MAS0_TSIZE_SHIFT          (31 - (55 - 32))

/*
 * MAS2 Register bits
 */
#define PPCBKEM_MAS2_EPN_MASK             _BITFIELD32B(51 - 32, 0x3ff)
#define PPCBKEM_MAS2_EPN_SHIFT            (31 - (51 - 32))
#define PPCBKEM_MAS2_X0                   _ONEBIT32B(57 - 32)
#define PPCBKEM_MAS2_X1                   _ONEBIT32B(58 - 32)
#define PPCBKEM_MAS2_W                    _ONEBIT32B(59 - 32)
#define PPCBKEM_MAS2_I                    _ONEBIT32B(60 - 32)
#define PPCBKEM_MAS2_M                    _ONEBIT32B(61 - 32)
#define PPCBKEM_MAS2_G                    _ONEBIT32B(62 - 32)
#define PPCBKEM_MAS2_E                    _ONEBIT32B(63 - 32)

/*
 * MAS3 Register bits
 */
#define PPCBKEM_MAS3_RPN_MASK             _BITFIELD32B(51 - 32, 0x3ff)
#define PPCBKEM_MAS3_RPN_SHIFT            (31 - (51 - 32))
#define PPCBKEM_MAS3_U0                   _ONEBIT32B(54 - 32)
#define PPCBKEM_MAS3_U1                   _ONEBIT32B(55 - 32)
#define PPCBKEM_MAS3_U2                   _ONEBIT32B(56 - 32)
#define PPCBKEM_MAS3_U3                   _ONEBIT32B(57 - 32)
#define PPCBKEM_MAS3_UX                   _ONEBIT32B(58 - 32)
#define PPCBKEM_MAS3_SX                   _ONEBIT32B(59 - 32)
#define PPCBKEM_MAS3_UW                   _ONEBIT32B(60 - 32)
#define PPCBKEM_MAS3_SW                   _ONEBIT32B(61 - 32)
#define PPCBKEM_MAS3_UR                   _ONEBIT32B(62 - 32)
#define PPCBKEM_MAS3_SR                   _ONEBIT32B(63 - 32)

/*
 * MAS4 Register bits
 */
#define PPCBKEM_MAS4_TLBSELD_MASK         _BITFIELD32B(35 - 32, 0x3)
#define PPCBKEM_MAS4_TLBSELD_SHIFT        (31 - (35 - 32))
#define PPCBKEM_MAS4_TIDSELD_MASK         _BITFIELD32B(47 - 32, 0xf)
#define PPCBKEM_MAS4_TIDSELD_SHIFT        (31 - (47 - 32))
#define PPCBKEM_MAS4_SHAREND              _ONEBIT32B(51 - 32)
#define PPCBKEM_MAS4_TSIZED_MASK          _BITFIELD32B(55 - 32, 0xf)
#define PPCBKEM_MAS4_TSIZED_SHIFT         (31 - (55 - 32))
#define PPCBKEM_MAS4_X0D                  _ONEBIT32B(57 - 32)
#define PPCBKEM_MAS4_X1D                  _ONEBIT32B(58 - 32)
#define PPCBKEM_MAS4_WD                   _ONEBIT32B(59 - 32)
#define PPCBKEM_MAS4_ID                   _ONEBIT32B(60 - 32)
#define PPCBKEM_MAS4_MD                   _ONEBIT32B(61 - 32)
#define PPCBKEM_MAS4_GD                   _ONEBIT32B(62 - 32)
#define PPCBKEM_MAS4_ED                   _ONEBIT32B(63 - 32)

/*
 * MAS5 Register bits
 */
#define PPCBKEM_MAS5_SPID2_MASK           _BITFIELD32B(47 - 32, 0x3ff)
#define PPCBKEM_MAS5_SPID2_SHIFT          (31 - (47 - 32))
#define PPCBKEM_MAS5_SPID3_MASK           _BITFIELD32B(63 - 32, 0x3ff)
#define PPCBKEM_MAS5_SPID3_SHIFT          (31 - (63 - 32))

/*
 * MAS6 Register bits
 */
#define PPCBKEM_MAS6_SPID0_MASK           _BITFIELD32B(47 - 32, 0x3ff)
#define PPCBKEM_MAS6_SPID0_SHIFT          (31 - (47 - 32))
#define PPCBKEM_MAS6_SPID1_MASK           _BITFIELD32B(63 - 32, 0x3ff)
#define PPCBKEM_MAS6_SPID1_SHIFT          (31 - (63 - 32))

/*
 * MMU Configuration Register bits
 */
#define PPCBKEM_MMUCFG_NPIDS_MASK         _BITFIELD32B(52 - 32, 0xf)
#define PPCBKEM_MMUCFG_NPIDS_SHIFT        (31 - (52 - 32))
#define PPCBKEM_MMUCFG_PIDSIZE_MASK       _BITFIELD32B(57 - 32, 0x1f)
#define PPCBKEM_MMUCFG_PIDSIZE_SHIFT      (31 - (57 - 32))
#define PPCBKEM_MMUCFG_NTLBS_MASK         _BITFIELD32B(61 - 32, 0x3)
#define PPCBKEM_MMUCFG_NTLBS_SHIFT        (31 - (61 - 32))
#define PPCBKEM_MMUCFG_MAVN_MASK          _BITFIELD32B(63 - 32, 0x3)
#define PPCBKEM_MMUCFG_MAVN_SHIFT         (31 - (63 - 32))

/*
 * TLB Configuration Register bits
 */
#define PPCBKEM_TLBCFG_ASSOC_MASK         _BITFIELD32B(39 - 32, 0xff)
#define PPCBKEM_TLBCFG_ASSOC_SHIFT        (31 - (39 - 32))
#define PPCBKEM_TLBCFG_MINSIZE_MASK       _BITFIELD32B(43 - 32, 0xf)
#define PPCBKEM_TLBCFG_MINSIZE_SHIFT      (31 - (43 - 32))
#define PPCBKEM_TLBCFG_MAXSIZE_MASK       _BITFIELD32B(47 - 32, 0xf)
#define PPCBKEM_TLBCFG_MAXSIZE_SHIFT      (31 - (47 - 32))
#define PPCBKEM_TLBCFG_IPROT              _ONEBIT32B(48 - 32)
#define PPCBKEM_TLBCFG_AVAIL              _ONEBIT32B(49 - 32)
#define PPCBKEM_TLBCFG_NENTRY_MASK        _BITFIELD32B(63 - 32, 0x3ff)
#define PPCBKEM_TLBCFG_NENTRY_SHIFT       (31 - (63 - 32))

/*
 * SPR numbers
 */
#define PPCBKEM_SPR_MAS0                  624
#define PPCBKEM_SPR_MAS1                  625
#define PPCBKEM_SPR_MAS2                  626
#define PPCBKEM_SPR_MAS3                  627
#define PPCBKEM_SPR_MAS4                  628
#define PPCBKEM_SPR_MAS5                  629
#define PPCBKEM_SPR_MAS6                  630
#define PPCBKEM_SPR_MAS7                  944
#define PPCBKEM_SPR_MMUCFG                1015
#define PPCBKEM_SPR_TLB0CFG               688
#define PPCBKEM_SPR_TLB1CFG               689
#define PPCBKEM_SPR_TLB2CFG               690
#define PPCBKEM_SPR_TLB3CFG               691
#define PPCBKEM_SPR_PID0                  PPCBKE_SPR_PID
#define PPCBKEM_SPR_PID1                  633
#define PPCBKEM_SPR_PID2                  634

#endif

/* __SRCVERSION("bookecpu.h $Rev: 153052 $"); */
