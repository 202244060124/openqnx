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
 *  mips/cpu.h
 *

 */
#ifndef __MIPS_CPU_H_INCLUDED
#define __MIPS_CPU_H_INCLUDED

#ifdef __ASM__
#include <mips/context.h>
#else
#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

#ifndef __MIPS_CONTEXT_H_INCLUDED
#include _NTO_HDR_(mips / context.h)
#endif
#endif

#define MIPS_STRINGNAME                    "mips"

/*
 * R4K CPU specific literals
 */
#define MIPS_R4K_K0BASE                    (0x80000000)
#define MIPS_R4K_K0SIZE                    (0x20000000)
#define MIPS_R4K_K1BASE                    (0xA0000000)
#define MIPS_R4K_K1SIZE                    (0x20000000)
#define MIPS_R4K_KSBASE                    (0xC0000000)
#define MIPS_R4K_KSSIZE                    (0x20000000)
#define MIPS_R4K_K3BASE                    (0xE0000000)
#define MIPS_R4K_K3SIZE                    (0x20000000)
#define MIPS_R4K_KUBASE                    (0x00000000)
#define MIPS_R4K_KUSIZE                    (0x80000000)

#define MIPS_PHYS_TO_KSEG0(x)              (MIPS_R4K_K0BASE | (_Uint32t)(x))
#define MIPS_KSEG0_TO_PHYS(x)              ((_Uint32t)(x) & ~MIPS_R4K_K0BASE)
#define MIPS_IS_KSEG0(x)                   (((x) >= MIPS_R4K_K0BASE) && ((x) <= (MIPS_R4K_K0BASE + MIPS_R4K_K0SIZE)))

#define MIPS_PHYS_TO_KSEG1(x)              (MIPS_R4K_K1BASE | (_Uint32t)(x))
#define MIPS_KSEG1_TO_PHYS(x)              ((_Uint32t)(x) & ~MIPS_R4K_K1BASE)
#define MIPS_IS_KSEG1(x)                   (((x) >= MIPS_R4K_K1BASE) && ((x) <= (MIPS_R4K_K1BASE + MIPS_R4K_K1SIZE)))

#define MIPS_IS_KSSEG(x)                   (((x) >= MIPS_R4K_KSBASE) && ((x) <= (MIPS_R4K_KSBASE + MIPS_R4K_KSSIZE)))

#define MIPS_IS_KUSEG(x)                   (((x) >= MIPS_R4K_KUBASE) && ((x) < (MIPS_R4K_KUBASE + MIPS_R4K_KUSIZE)))

/*
 * CPU/CP0 Resources
 */
#define MIPS_MAX_TLB_ENTRIES               48

/*
 * CP0 TLB Lo0 and Lo1 Register
 */
#define MIPS_TLB_LO_PFNMASK                0x3FFFFFC0
#define MIPS_TLB_LO_CMASK                  0x00000038
#define MIPS_TLB_LO_DMASK                  0x00000004
#define MIPS_TLB_LO_VMASK                  0x00000002
#define MIPS_TLB_LO_GMASK                  0x00000001

#define MIPS_TLB_LO_PFNSHIFT               6
#define MIPS_TLB_LO_CSHIFT                 3
#define MIPS_TLB_LO_DSHIFT                 2
#define MIPS_TLB_LO_VSHIFT                 1
#define MIPS_TLB_LO_GSHIFT                 0

#define MIPS_TLB_GLOBAL                    1 /* globally accessible */
#define MIPS_TLB_VALID                     2 /* valid */
#define MIPS_TLB_WRITE                     4 /* writable */

#define MIPS_TLB_CACHE_WT                  0 /* write-through (4600 only) */
#define MIPS_TLB_CACHE_WTWA                1 /* wt & write-allocate (4600 only) */
#define MIPS_TLB_UNCACHED                  2
#define MIPS_TLB_CACHE_NONCOHERENT         3
#define MIPS_TLB_CACHE_COH_EXCL            4 /* unimplemented, rsvd on R4600 */
#define MIPS_TLB_CACHE_EXCL_WRITE          5 /* unimplemented, rsvd on R4600 */
#define MIPS_TLB_CACHE_UPDATE_WRITE        6 /* unimplemented, rsvd on R4600 */

#define MIPS3K_TLB_LO_PFNSHIFT             12
#define MIPS3K_TLB_LO_PFNMASK              0xfffff000

#define MIPS3K_TLB_GLOBAL                  0x00000100
#define MIPS3K_TLB_VALID                   0x00000200
#define MIPS3K_TLB_WRITE                   0x00000400
#define MIPS3K_TLB_NOCACHE                 0x00000800

/*
 * CP0 TLB Hi Register
 */
#define MIPS_TLB_HI_GLOBAL                 0x1000 /* location of global bit */

#define MIPS_TLB_MAX_ASID                  0xFF
#define MIPS_TLB_HI_ASIDSHIFT              0
#define MIPS_TLB_HI_ASIDMASK               (MIPS_TLB_MAX_ASID << MIPS_TLB_HI_ASIDSHIFT)
#define MIPS_TLB_HI_VPN2MASK               0xFFFFE000
#define MIPS_TLB_HI_VPN2SHIFT              13

#define MIPS3K_TLB_MAX_ASID                0x3f
#define MIPS3K_TLB_HI_ASIDSHIFT            6
#define MIPS3K_TLB_HI_ASIDMASK             (MIPS3K_TLB_MAX_ASID << MIPS3K_TLB_HI_ASIDSHIFT)
#define MIPS3K_TLB_HI_VPNMASK              0xfffff000
#define MIPS3K_TLB_HI_VPNSHIFT             12

/*
 * CP0 TLB Pagemask Register
 */
/* valid TLB pagesizes */
#define MIPS_TLB_PAGESIZE_4K               0x00001000
#define MIPS_TLB_PAGESIZE_16K              0x00004000
#define MIPS_TLB_PAGESIZE_64K              0x00010000
#define MIPS_TLB_PAGESIZE_256K             0x00040000
#define MIPS_TLB_PAGESIZE_1M               0x00100000
#define MIPS_TLB_PAGESIZE_4M               0x00400000
#define MIPS_TLB_PAGESIZE_16M              0x01000000

#define MIPS_NUM_TLB_PAGESIZES             7

#define MIPS_TLB_PAGE_MASK                 0x01FFE000
#define MIPS_TLB_PAGE_SHIFT                13

/* Values for the pagemask register */
#define MIPS_TLB_PGMASK_4K                 0x000
#define MIPS_TLB_PGMASK_16K                0x003
#define MIPS_TLB_PGMASK_64K                0x00F
#define MIPS_TLB_PGMASK_256K               0x03F
#define MIPS_TLB_PGMASK_1M                 0x0FF
#define MIPS_TLB_PGMASK_4M                 0x3FF
#define MIPS_TLB_PGMASK_16M                0xFFF

#define MIPS_TLB_4K_SHIFT                  0
#define MIPS_TLB_16K_SHIFT                 2
#define MIPS_TLB_64K_SHIFT                 4
#define MIPS_TLB_256K_SHIFT                6
#define MIPS_TLB_1M_SHIFT                  8
#define MIPS_TLB_4M_SHIFT                  10
#define MIPS_TLB_16M_SHIFT                 12

/*#define MIPS_TLB_RW            1*/
/*#define MIPS_TLB_RO            0*/

/*
 * CP0 TLB Index Register
 */
#define MIPS_TLB_INX_INXDEXMASK            0x0000003F
#define MIPS_TLB_INX_INDEXSHIFT            0

#define MIPS_TLB_INX_PROBEMASK             0x80000000
#define MIPS_TLB_INX_PROBESHIFT            31

#define MIPS3K_TLB_INX_INXDEXMASK          0x00003F00
#define MIPS3K_TLB_INX_INDEXSHIFT          8

/*
 * CP0 TLB Random Register
 */
#define MIPS_TLB_RANDOM_MASK               0x0000003F
#define MIPS_TLB_RANDOM_SHIFT              0

#define MIPS3K_TLB_RANDOM_MASK             0x00003F00
#define MIPS3K_TLB_RANDOM_SHIFT            8

/*
 * CP0 TLB Wired Register
 */
#define MIPS_TLB_WIRED_MASK                0x0000003F
#define MIPS_TLB_WIRED_SHIFT               0

/*
 * CP0 TLB Context Register
 */
#define MIPS_TLB_CTXT_PTEBASE              0xFF800000
#define MIPS_TLB_CTXT_BADVPN2_MASK         0x007FFFF0

#define MIPS_TLB_CTXT_BASEPTE_SHIFT        23
#define MIPS_TLB_CTXT_BADVPN2_SHIFT        4

/*
 * CP0 Status Register
 */
#define MIPS_SREG_CU1                      0x20000000
#define MIPS_SREG_CU0                      0x10000000
#define MIPS_SREG_BEV                      0x00400000
#define MIPS_SREG_TS                       0x00200000
#define MIPS_SREG_SR                       0x00100000
#define MIPS_SREG_CH                       0x00040000
#define MIPS_SREG_CE                       0x00020000
#define MIPS_SREG_TX79_EIE                 0x00010000
#define MIPS_SREG_DE                       0x00010000
#define MIPS_SREG_RP                       0x08000000
#define MIPS_SREG_FR                       0x04000000
#define MIPS_SREG_RE                       0x02000000
#define MIPS_SREG_KX                       0x00000080
#define MIPS_SREG_SX                       0x00000040
#define MIPS_SREG_UX                       0x00000020
#define MIPS_SREG_KSU                      0x00000018
#define MIPS_SREG_MODE_USER                0x00000010
#define MIPS_SREG_MODE_SUPER               0x00000008
#define MIPS_SREG_MODE_KERNEL              0x00000000
#define MIPS_SREG_ERL                      0x00000004
#define MIPS_SREG_EXL                      0x00000002
#define MIPS_SREG_IE                       0x00000001
/*#define MIPS_SREG_IMASK8    0x00000000*/
#define MIPS_SREG_IMASK7                   0x00008000
#define MIPS_SREG_IMASK6                   0x00004000
#define MIPS_SREG_IMASK5                   0x00002000
#define MIPS_SREG_IMASK4                   0x00001000
#define MIPS_SREG_IMASK3                   0x00000800
#define MIPS_SREG_IMASK2                   0x00000400
#define MIPS_SREG_IMASK1                   0x00000200
#define MIPS_SREG_IMASK0                   0x00000100

#define MIPS_SREG_DS_MASK                  0x00770000
#define MIPS_SREG_CU_MASK                  0xF0000000
#define MIPS_SREG_IMASK                    0x0000FF00

#define MIPS_SREG_CU_SHIFT                 28
#define MIPS_SREG_DS_SHIFT                 16
#define MIPS_SREG_IMASK_SHIFT              8

#define MIPS3K_SREG_CU3                    0x80000000
#define MIPS3K_SREG_CU2                    0x40000000
#define MIPS3K_SREG_NMI                    0x00100000
#define MIPS3K_SREG_KUo                    0x00000020
#define MIPS3K_SREG_IEo                    0x00000010
#define MIPS3K_SREG_KUp                    0x00000008
#define MIPS3K_SREG_IEp                    0x00000004
#define MIPS3K_SREG_KUc                    0x00000002
#define MIPS3K_SREG_IEc                    0x00000001

/*
 * CP0 Cause register
 */
#define MIPS_CAUSE_BD_SLOT                 0x80000000

#define MIPS_CAUSE_MASK                    0x0000007C
#define MIPS_CAUSE_CEMASK                  0x30000000
#define MIPS_CAUSE_IV                      0x00800000 /* MIPS32, MIPS64 only */
#define MIPS_CAUSE_WP                      0x00400000 /* MIPS32, MIPS64 only */
#define MIPS_CAUSE_IMASK                   0x0000FF00

#define MIPS_CAUSE_SHIFT                   2
#define MIPS_CAUSE_CESHIFT                 28
#define MIPS_CAUSE_ISHIFT                  8

#define MIPS_CAUSE_INTERRUPT               0
#define MIPS_CAUSE_TLB_MOD                 1
#define MIPS_CAUSE_TLB_LOAD                2
#define MIPS_CAUSE_TLB_SAVE                3
#define MIPS_CAUSE_ADDR_LOAD               4
#define MIPS_CAUSE_ADDR_SAVE               5
#define MIPS_CAUSE_BUS_INSTR               6
#define MIPS_CAUSE_BUS_DATA                7
#define MIPS_CAUSE_SYSCALL                 8
#define MIPS_CAUSE_BP                      9
#define MIPS_CAUSE_ILLOP                   10
#define MIPS_CAUSE_CP_UNUSABLE             11
#define MIPS_CAUSE_OVFLW                   12
#define MIPS_CAUSE_TRAP                    13
#define MIPS_CAUSE_VIRT_COHERENCY_INSTR    14
#define MIPS_CAUSE_FPE                     15
#define MIPS_CAUSE_WATCH                   23
#define MIPS_CAUSE_VIRT_COHERENCY_DATA     31

#define MIPS_CAUSE_IBIT7                   0x00008000
#define MIPS_CAUSE_IBIT6                   0x00004000
#define MIPS_CAUSE_IBIT5                   0x00002000
#define MIPS_CAUSE_IBIT4                   0x00001000
#define MIPS_CAUSE_IBIT3                   0x00000800
#define MIPS_CAUSE_IBIT2                   0x00000400
#define MIPS_CAUSE_IBIT1                   0x00000200
#define MIPS_CAUSE_IBIT0                   0x00000100

#define MIPS_CAUSE_IP01_MASK               (MIPS_CAUSE_IBIT0 | MIPS_CAUSE_IBIT1)
#define MIPS_CAUSE_IP3456                  (MIPS_CAUSE_IBIT3 | MIPS_CAUSE_IBIT4 | MIPS_CAUSE_IBIT5 | MIPS_CAUSE_IBIT6)
#define MIPS_CAUSE_IP23456                 (MIPS_CAUSE_IP3456 | MIPS_CAUSE_IBIT2)

/*
 * CP0 Config Register
 */
#define MIPS_CONFIG_MASTER_CHECKER         0x80000000
#define MIPS_CONFIG_SYS_CLOCK              0x70000000
#define MIPS_CONFIG_PATTERN                0x0F000000
#define MIPS_CONFIG_CACHE2_BLOCKSIZE       0x00C00000
#define MIPS_CONFIG_R5K_CACHE2_SIZE        0x00300000
#define MIPS_CONFIG_CACHE2_SPLIT           0x00200000
#define MIPS_CONFIG_CACHE2_WIDTH           0x00100000
#define MIPS_CONFIG_SYSPORT_WIDTH          0x000C0000
#define MIPS_CONFIG_TX79_DIE_ENABLE        0x00040000
#define MIPS_CONFIG_TX79_ICACHE_ENABLE     0x00020000
#define MIPS_CONFIG_CACHE2_PRESENT         0x00020000
#define MIPS_CONFIG_TX79_DCACHE_ENABLE     0x00010000
#define MIPS_CONFIG_DIRTY_SHARED           0x00010000
#define MIPS_CONFIG_BIG_INDIAN             0x00008000
#define MIPS_CONFIG_ECC_MODE               0x00004000
#define MIPS_CONFIG_BLOCK_ORDER            0x00002000
#define MIPS_CONFIG_TX79_NBE_ENABLE        0x00002000
#define MIPS_CONFIG_R5K_CACHE2_ENABLE      0x00001000
#define MIPS_CONFIG_TX79_BPE_ENABLE        0x00001000
#define MIPS_CONFIG_CACHE_SIZE_MODE        0x0001000
#define MIPS_CONFIG_ICACHE_SIZE            0x00000E00
#define MIPS_CONFIG_DCACHE_SIZE            0x000001C0
#define MIPS_CONFIG_ICACHE_BLOCK           0x00000020
#define MIPS_CONFIG_DCACHE_LINE            0x00000010
#define MIPS_CONFIG_CACHE2_CU              0x00000008
#define MIPS_CONFIG_KSEG0_COHERENCY        0x00000007

#define MIPS_CONFIG_MASTER_CHECKER_SHIFT   31
#define MIPS_CONFIG_SYS_CLOCK_SHIFT        28
#define MIPS_CONFIG_PATTERN_SHIFT          24
#define MIPS_CONFIG_CACHE2_BLOCKSIZE_SHIFT 22
#define MIPS_CONFIG_CACHE2_SPLIT_SHIFT     21
#define MIPS_CONFIG_R5K_CACHE2_SIZE_SHIFT  20
#define MIPS_CONFIG_R5K_CACHE2_SIZE_512KB  0
#define MIPS_CONFIG_R5K_CACHE2_SIZE_1MB    1
#define MIPS_CONFIG_R5K_CACHE2_SIZE_2MB    2
#define MIPS_CONFIG_R5K_CACHE2_MISSING     3
#define MIPS_CONFIG_CACHE2_WIDTH_SHIFT     20
#define MIPS_CONFIG_SYSPORT_WIDTH_SHIFT    18
#define MIPS_CONFIG_CACHE2_PRESENT_SHIFT   17
#define MIPS_CONFIG_DIRTY_SHARED_SHIFT     16
#define MIPS_CONFIG_BIG_INDIAN_SHIFT       15
#define MIPS_CONFIG_ECC_MODE_SHIFT         14
#define MIPS_CONFIG_BLOCK_ORDER_SHIFT      13
#define MIPS_CONFIG_ICACHE_SIZE_SHIFT      9
#define MIPS_CONFIG_DCACHE_SIZE_SHIFT      6
#define MIPS_CONFIG_ICACHE_BLOCK_SHIFT     5
#define MIPS_CONFIG_DCACHE_LINE_SHIFT      4
#define MIPS_CONFIG_CACHE2_CU_SHIFT        3
#define MIPS_CONFIG_KSEG0_COHERENCY_SHIFT  0

/*
 * New 4K architecture layout for config register(s)
 */
#define MIPS_CONFIG0_K0_MASK               _BITFIELD32L(0, 0x7)
#define MIPS_CONFIG0_K0_SHIFT              0
#define MIPS_CONFIG0_VI                    _ONEBIT32L(3)
#define MIPS_CONFIG0_MT_MASK               _BITFIELD32L(7, 0x7)
#define MIPS_CONFIG0_MT_SHIFT              7
#define MIPS_CONFIG0_MT_STANDARD           _BITFIELD32L(7, 1)
#define MIPS_CONFIG0_MT_FIXED              _BITFIELD32L(7, 3)
#define MIPS_CONFIG0_AR_MASK               _BITFIELD32L(10, 0x7)
#define MIPS_CONFIG0_AR_SHIFT              10
#define MIPS_CONFIG0_AT_MASK               _BITFIELD32L(13, 0x3)
#define MIPS_CONFIG0_AT_SHIFT              13
#define MIPS_CONFIG0_AT_MIPS32             _BITFIELD32L(13, 0)
#define MIPS_CONFIG0_AT_MIPS64             _BITFIELD32L(13, 2)
#define MIPS_CONFIG0_BE                    _ONEBIT32L(15)
#define MIPS_CONFIG0_BM                    _ONEBIT32L(16)
#define MIPS_CONFIG0_MM_MASK               _BITFIELD32L(17, 0x3)
#define MIPS_CONFIG0_MM_SHIFT              17
#define MIPS_CONFIG0_MM_NONE               _BITFIELD32L(17, 0x0)
#define MIPS_CONFIG0_MM_SYSAD              _BITFIELD32L(17, 0x1)
#define MIPS_CONFIG0_MM_FULL               _BITFIELD32L(17, 0x2)
#define MIPS_CONFIG0_MDU                   _ONEBIT32L(20)
#define MIPS_CONFIG0_KU_MASK               _BITFIELD32L(25, 0x7)
#define MIPS_CONFIG0_KU_SHIFT              25
#define MIPS_CONFIG0_K23_MASK              _BITFIELD32L(28, 0x7)
#define MIPS_CONFIG0_K23_SHIFT             28
#define MIPS_CONFIG0_M                     _ONEBIT32L(31)

#define MIPS_CONFIG1_FP                    _ONEBIT32L(0)
#define MIPS_CONFIG1_EP                    _ONEBIT32L(1)
#define MIPS_CONFIG1_CA                    _ONEBIT32L(2)
#define MIPS_CONFIG1_WR                    _ONEBIT32L(3)
#define MIPS_CONFIG1_PC                    _ONEBIT32L(4)
#define MIPS_CONFIG1_DA_MASK               _BITFIELD32L(7, 0x7)
#define MIPS_CONFIG1_DA_SHIFT              7
#define MIPS_CONFIG1_DL_MASK               _BITFIELD32L(10, 0x7)
#define MIPS_CONFIG1_DL_SHIFT              10
#define MIPS_CONFIG1_DL_NONE               _BITFIELD32L(10, 0x0)
#define MIPS_CONFIG1_DL_16                 _BITFIELD32L(10, 0x3)
#define MIPS_CONFIG1_DL_32                 _BITFIELD32L(10, 0x4)
#define MIPS_CONFIG1_DS_MASK               _BITFIELD32L(13, 0x7)
#define MIPS_CONFIG1_DS_SHIFT              13
#define MIPS_CONFIG1_DS_64                 _BITFIELD32L(10, 0x0)
#define MIPS_CONFIG1_DS_128                _BITFIELD32L(10, 0x1)
#define MIPS_CONFIG1_DS_256                _BITFIELD32L(10, 0x2)
#define MIPS_CONFIG1_IA_MASK               _BITFIELD32L(16, 0x7)
#define MIPS_CONFIG1_IA_SHIFT              16
#define MIPS_CONFIG1_IL_MASK               _BITFIELD32L(19, 0x7)
#define MIPS_CONFIG1_IL_SHIFT              19
#define MIPS_CONFIG1_IL_NONE               _BITFIELD32L(19, 0x0)
#define MIPS_CONFIG1_IL_16                 _BITFIELD32L(19, 0x3)
#define MIPS_CONFIG1_IS_MASK               _BITFIELD32L(22, 0x7)
#define MIPS_CONFIG1_IS_SHIFT              22
#define MIPS_CONFIG1_IS_64                 _BITFIELD32L(22, 0x0)
#define MIPS_CONFIG1_IS_128                _BITFIELD32L(22, 0x1)
#define MIPS_CONFIG1_IS_256                _BITFIELD32L(22, 0x2)
#define MIPS_CONFIG1_MMUSIZE_MASK          _BITFIELD32L(25, 0x3f)
#define MIPS_CONFIG1_MMUSIZE_SHIFT         25

/*
 * Toshiba TX39 config register layout
 */
#define MIPSTX39_CONFIG_DRSize_SHIFT       0
#define MIPSTX39_CONFIG_DRSize_MASK        _BITFIELD32L(0, 0x3)
#define MIPSTX39_CONFIG_DRSize_4WORDS      _BITFIELD32L(0, 0x0)
#define MIPSTX39_CONFIG_DRSize_8WORDS      _BITFIELD32L(0, 0x1)
#define MIPSTX39_CONFIG_DRSize_16WORDS     _BITFIELD32L(0, 0x2)
#define MIPSTX39_CONFIG_DRSize_32WORDS     _BITFIELD32L(0, 0x3)
#define MIPSTX39_CONFIG_IRSize_SHIFT       2
#define MIPSTX39_CONFIG_IRSize_MASK        _BITFIELD32L(2, 0x3)
#define MIPSTX39_CONFIG_IRSize_4WORDS      _BITFIELD32L(2, 0x0)
#define MIPSTX39_CONFIG_IRSize_8WORDS      _BITFIELD32L(2, 0x1)
#define MIPSTX39_CONFIG_IRSize_16WORDS     _BITFIELD32L(2, 0x2)
#define MIPSTX39_CONFIG_IRSize_32WORDS     _BITFIELD32L(2, 0x3)
#define MIPSTX39_CONFIG_DCE                _ONEBIT32L(4)
#define MIPSTX39_CONFIG_ICE                _ONEBIT32L(5)
#define MIPSTX39_CONFIG_LOCK               _ONEBIT32L(7)
#define MIPSTX39_CONFIG_HALT               _ONEBIT32L(8)
#define MIPSTX39_CONFIG_DOZE               _ONEBIT32L(9)
#define MIPSTX39_CONFIG_RF_SHIFT           10
#define MIPSTX39_CONFIG_RF_MASK            _BITFIELD32L(10, 0x3)
#define MIPSTX39_CONFIG_WBON               _ONEBIT32L(13)
#define MIPSTX39_CONFIG_CWFON              _ONEBIT32L(14)
#define MIPSTX39_CONFIG_DCS_SHIFT          16
#define MIPSTX39_CONFIG_DCS_MASK           _BITFIELD32L(16, 0x7)
#define MIPSTX39_CONFIG_DCS_4K             _BITFIELD32L(16, 0x2)
#define MIPSTX39_CONFIG_DCS_8K             _BITFIELD32L(16, 0x3)
#define MIPSTX39_CONFIG_ICS_SHIFT          19
#define MIPSTX39_CONFIG_ICS_MASK           _BITFIELD32L(19, 0x7)
#define MIPSTX39_CONFIG_ICS_8K             _BITFIELD32L(19, 0x3)
#define MIPSTX39_CONFIG_ICS_16K            _BITFIELD32L(19, 0x4)

/*
 * CP0 Cache Register (Toshiba TX39 only)
 */
#define MIPSTX39_CACHE_IALo                0x00002000
#define MIPSTX39_CACHE_DALo                0x00001000
#define MIPSTX39_CACHE_IALp                0x00000800
#define MIPSTX39_CACHE_DALp                0x00000400
#define MIPSTX39_CACHE_IALc                0x00000200
#define MIPSTX39_CACHE_DALc                0x00000100

/*
 * CP0 PRID Register
 */

#define MIPS_PRID_COMPANY_NONE             0x00
#define MIPS_PRID_IMPL_4100                0x0c
#define MIPS_PRID_IMPL_4122                0x04
#define MIPS_PRID_IMPL_4300                0x0b
#define MIPS_PRID_IMPL_4600                0x20
#define MIPS_PRID_IMPL_4700                0x21
#define MIPS_PRID_IMPL_5000                0x23
#define MIPS_PRID_IMPL_527x                0x28
#define MIPS_PRID_IMPL_5432                0x54
#define MIPS_PRID_IMPL_5500                0x55
#define MIPS_PRID_IMPL_7000                0x27
#define MIPS_PRID_IMPL_TX79                0x38
#define MIPS_PRID_IMPL_TX39                0x22
#define MIPS_PRID_IMPL_E9000               0x34

#define MIPS_PRID_COMPANY_MIPS             0x01
#define MIPS_PRID_IMPL_4Kc                 0x80
#define MIPS_PRID_IMPL_4Kp_m               0x83

#define MIPS_PRID_COMPANY_ALCHEMY          0x03
#define MIPS_PRID_IMPL_AU1000              0x01
#define MIPS_PRID_IMPL_AU1_v2              0x02

#define MIPS_PRID_COMPANY_BROADCOM         0x04
#define MIPS_PRID_IMPL_SB1                 0x01

#define MIPS_PRID_COMPANY_SANDCRAFT        0x05
#define MIPS_PRID_IMPL_SR7100              0x04
#define MIPS_PRID_SANDCRAFT_SR7100         ((MIPS_PRID_COMPANY_SANDCRAFT << MIPS_PRID_IMPL_SHIFT) | MIPS_PRID_IMPL_SR7100)

#define MIPS_PRID_REV_SHIFT                0
#define MIPS_PRID_REV_MASK                 0x000000ff
#define MIPS_PRID_IMPL_SHIFT               8
#define MIPS_PRID_IMPL_MASK                0x0000ff00
#define MIPS_PRID_COMPANY_SHIFT            16
#define MIPS_PRID_COMPANY_MASK             0x00ff0000
#define MIPS_PRID_OPTIONS_SHIFT            24
#define MIPS_PRID_OPTIONS_MASK             0xff000000

#define MIPS_PRID_REV_MAJ(p)               (((p) >> 4) & 0x0f)
#define MIPS_PRID_REV_MIN(p)               ((p)&0x0f)
#define MIPS_PRID_IMPL(p)                  (((p)&MIPS_PRID_IMPL_MASK) >> MIPS_PRID_IMPL_SHIFT)
#define MIPS_PRID_COMPANY(p)               (((p)&MIPS_PRID_COMPANY_MASK) >> MIPS_PRID_COMPANY_SHIFT)
#define MIPS_PRID_COMPANY_IMPL(p)          (((p) & (MIPS_PRID_COMPANY_MASK | MIPS_PRID_IMPL_MASK)) >> MIPS_PRID_IMPL_SHIFT)
#define MIPSBCM_PRID_IMPL_IS_NEW(p) \
    ((((p)&MIPS_PRID_COMPANY_MASK) == (MIPS_PRID_COMPANY_BROADCOM << MIPS_PRID_COMPANY_SHIFT)) && (((p)&0x0000f000) != 0))
#define MIPSBCM_PRID_IMPL_NEW(p) ((((p)&0x0000f000) >> 4))
#define MIPS_PRID_COMPANY_IMPL_CANONICAL(p)                                                                              \
    ((MIPSBCM_PRID_IMPL_IS_NEW(p) ? (MIPSBCM_PRID_IMPL_NEW(p) | (MIPS_PRID_COMPANY_BROADCOM << MIPS_PRID_COMPANY_SHIFT)) \
                                  : ((p) & (MIPS_PRID_COMPANY_MASK | MIPS_PRID_IMPL_MASK)))                              \
     >> MIPS_PRID_IMPL_SHIFT)

#define MIPS_PRID_MAKE_COMPANY_IMPL(c, i)           (((c) << (MIPS_PRID_COMPANY_SHIFT - MIPS_PRID_IMPL_SHIFT)) | (i))

#define MIPSBCM_PRID_MULTIPROC                      (1 << 24)
#define MIPSBCM_PRID_PROCNUM_MASK                   (0x7 << 25)
#define MIPSBCM_PRID_PROCNUM_SHIFT                  25

/*
 * CP0 Watch Hi/Lo Registers
 */
#define MIPS_WATCH_PADDR0                           0xFFFFFFF8
#define MIPS_WATCH_PADDR1                           0x0000000F
#define MIPS_WATCH_IFETCH                           0x00000004
#define MIPS_WATCH_READ                             0x00000002
#define MIPS_WATCH_WRITE                            0x00000001

#define MIPS_WATCH_PADDR0_SHIFT                     3
#define MIPS_WATCH_PADDR1_SHIFT                     0
#define MIPS_WATCH_READ_SHIFT                       1
#define MIPS_WATCH_WRITE_SHIFT                      0

/*
 * CP0 ECC Register
 */
#define MIPS_ECC_MASK                               0x000000FF

/*
 * CP0 Cache Error Register
 */
#define MIPS_CACHE_ERR_ER                           0x80000000
#define MIPS_CACHE_ERR_EC                           0x40000000
#define MIPS_CACHE_ERR_ED                           0x20000000
#define MIPS_CACHE_ERR_ET                           0x10000000
#define MIPS_CACHE_ERR_ES                           0x08000000
#define MIPS_CACHE_ERR_EE                           0x04000000
#define MIPS_CACHE_ERR_EB                           0x02000000
#define MIPS_CACHE_ERR_EI                           0x01000000
#define MIPS_CACHE_ERR_SLDX                         0x003FFFF8
#define MIPS_CACHE_ERR_PLDX                         0x00000007

#define MIPS_CACHE_ERR_ER_SHIFT                     31
#define MIPS_CACHE_ERR_EC_SHIFT                     30
#define MIPS_CACHE_ERR_ED_SHIFT                     29
#define MIPS_CACHE_ERR_ET_SHIFT                     28
#define MIPS_CACHE_ERR_ES_SHIFT                     27
#define MIPS_CACHE_ERR_EE_SHIFT                     26
#define MIPS_CACHE_ERR_EB_SHIFT                     25
#define MIPS_CACHE_ERR_EI_SHIFT                     24
#define MIPS_CACHE_ERR_SLDX_SHIFT                   3
#define MIPS_CACHE_ERR_PLDX_SHIFT                   0

/*
 * CP0 TagLo and TagHi
 */
#define MIPS_TAGLO_PTAGLO                           0xFFFFFF00
#define MIPS_TAGLO_PSTATE                           0x000000C0
#define MIPS_TAGLO_PARITY                           0x00000001

#define MIPS_TAGLO_PTAGLO_SHIFT                     8
#define MIPS_TAGLO_PSTATE_SHIFT                     6
#define MIPS_TAGLO_PARITY_SHIFT                     0

/*
 * CP0 Config register masks
 */
#define MIPS_CONFIG_EC_MASK                         0x70000000
#define MIPS_CONFIG_EC_DIV2                         0x00000000
#define MIPS_CONFIG_EC_DIV3                         0x10000000
#define MIPS_CONFIG_EC_DIV4                         0x20000000
#define MIPS_CONFIG_EC_DIV5                         0x30000000
#define MIPS_CONFIG_EC_DIV6                         0x40000000
#define MIPS_CONFIG_EC_DIV7                         0x50000000
#define MIPS_CONFIG_EC_DIV8                         0x60000000

/*
 * CP1 FCR31 register
 */
#define MIPS_FCR31_RM_RN                            0x00000000
#define MIPS_FCR31_RM_RZ                            0x00000001
#define MIPS_FCR31_RM_RP                            0x00000002
#define MIPS_FCR31_RM_RM                            0x00000003
#define MIPS_FCR31_RM_MASK                          0x00000003
#define MIPS_FCR31_FLAG_I                           0x00000004
#define MIPS_FCR31_FLAG_U                           0x00000008
#define MIPS_FCR31_FLAG_O                           0x00000010
#define MIPS_FCR31_FLAG_Z                           0x00000020
#define MIPS_FCR31_FLAG_V                           0x00000040
#define MIPS_FCR31_FLAG_MASK                        0x0000007c
#define MIPS_FCR31_ENABLE_I                         0x00000080
#define MIPS_FCR31_ENABLE_U                         0x00000100
#define MIPS_FCR31_ENABLE_O                         0x00000200
#define MIPS_FCR31_ENABLE_Z                         0x00000400
#define MIPS_FCR31_ENABLE_V                         0x00000800
#define MIPS_FCR31_ENABLE_MASK                      0x00000f80
#define MIPS_FCR31_CAUSE_I                          0x00001000
#define MIPS_FCR31_CAUSE_U                          0x00002000
#define MIPS_FCR31_CAUSE_O                          0x00004000
#define MIPS_FCR31_CAUSE_Z                          0x00008000
#define MIPS_FCR31_CAUSE_V                          0x00010000
#define MIPS_FCR31_CAUSE_E                          0x00020000
#define MIPS_FCR31_CAUSE_MASK                       0x0003f000
#define MIPS_FCR31_C                                0x00800000
#define MIPS_FCR31_FS                               0x01000000

/*
 * exception vectors - r4k
 */
#define MIPS_EXCV_RESET                             0xbfc00000
#define MIPS_EXCV_UTLB_MISS                         0x80000000
#define MIPS_EXCV_XTLB_MISS                         (MIPS_EXCV_UTLB_MISS + 0x80)
#define MIPS_EXCV_CACHEERR                          (MIPS_EXCV_UTLB_MISS + 0x100)
#define MIPS_EXCV_GENERAL                           (MIPS_EXCV_UTLB_MISS + 0x180)
#define MIPS_EXCV_INTERRUPT                         (MIPS_EXCV_UTLB_MISS + 0x200)

/* R7K Specific Stuff */
#define MIPS_CONFIG_R7K_SCACHE_PRESENT              0x80000000
#define MIPS_CONFIG_R7K_SCACHE_ENABLE               0x8
#define MIPS_CONFIG_R7K_TCACHE_PRESENT              0x20000
#define MIPS_CONFIG_R7K_TCACHE_ENABLE               0x1000

/*
 * PMC Sierra's R7K supports Cache blocking mode secret bit.
 * Helps to make the cache parity exceptions more precise.
 * Useful when used in conjunction with CERF.
 */
#define MIPS_R7K_PERF_CNTRL_MEM_BLK                 0x00001000

/* Sandcraft SR7100 Stuff */
#define MIPS_SR71K_CONFIG_SYS_CLOCK_SANDCRAFT       0x00F00000
#define MIPS_SR71K_CONFIG_SYS_CLOCK_SHIFT_SANDCRAFT 20
#define MIPS_SR71K_CLK_RATIO_4                      0x2
#define MIPS_SR71K_CLK_RATIO_4_AND_HALF             0xA
#define MIPS_SR71K_CLK_RATIO_5                      0x3
#define MIPS_SR71K_CLK_RATIO_5_AND_HALF             0xB
#define MIPS_SR71K_CLK_RATIO_6                      0x4
#define MIPS_SR71K_CLK_RATIO_6_AND_HALF             0xC
#define MIPS_SR71K_CLK_RATIO_7                      0x5
#define MIPS_SR71K_CLK_RATIO_7_AND_HALF             0xD
#define MIPS_SR71K_CLK_RATIO_8                      0x6
#define MIPS_SR71K_CLK_RATIO_8_AND_HALF             0xE

#endif /* __MIPS_CPU_H_INCLUDED */

/* __SRCVERSION("cpu.h $Rev: 169859 $"); */
