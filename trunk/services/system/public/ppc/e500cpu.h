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
 *  ppc/e500cpu.h
 *
 * Registers specific to the Motorola E500
 *

 */

#ifndef __PPC_E500CPU_H_INCLUDED
#define __PPC_E500CPU_H_INCLUDED

#ifndef __PPC_BOOKECPU_H_INCLUDED
#include <ppc/bookecpu.h>
#endif

/*
 * Extra Bits for the MSR register
 */
#define PPCE500_MSR_UCLE            _ONEBIT32(37 - 32)
#define PPCE500_MSR_SPE             _ONEBIT32(38 - 32)
#define PPCE500_MSR_UBLE            _ONEBIT32(53 - 32)

/*
 * Extra bits for the ESR register
 */
#define PPCE500_ESR_ILK             _ONEBIT32B(43 - 32)
#define PPCE500_ESR_SPE             _ONEBIT32B(56 - 32)

/*
 * Machine Check Syndrome Register
 */
#define PPCE500_MCSR_MCP            _ONEBIT32B(32 - 32)
#define PPCE500_MCSR_ICPERR         _ONEBIT32B(33 - 32)
#define PPCE500_MCSR_DCP_PERR       _ONEBIT32B(34 - 32)
#define PPCE500_MCSR_DCPERR         _ONEBIT32B(35 - 32)
#define PPCE500_MCSR_GL_CI          _ONEBIT32B(47 - 32)
#define PPCE500_MCSR_ABIST_IC       _ONEBIT32B(48 - 32)
#define PPCE500_MCSR_ABIST_DC       _ONEBIT32B(49 - 32)
#define PPCE500_MCSR_ABIST_ITLB     _ONEBIT32B(50 - 32)
#define PPCE500_MCSR_ABIST_DTLB     _ONEBIT32B(51 - 32)
#define PPCE500_MCSR_ABIST_L2TLB    _ONEBIT32B(52 - 32)
#define PPCE500_MCSR_ABIST_TLB1     _ONEBIT32B(53 - 32)
#define PPCE500_MCSR_ABIST_BTB      _ONEBIT32B(54 - 32)
#define PPCE500_MCSR_BUS_IAERR      _ONEBIT32B(56 - 32)
#define PPCE500_MCSR_BUS_RAERR      _ONEBIT32B(57 - 32)
#define PPCE500_MCSR_BUS_WAERR      _ONEBIT32B(58 - 32)
#define PPCE500_MCSR_BUS_IBERR      _ONEBIT32B(59 - 32)
#define PPCE500_MCSR_BUS_RBERR      _ONEBIT32B(60 - 32)
#define PPCE500_MCSR_BUS_WBERR      _ONEBIT32B(61 - 32)
#define PPCE500_MCSR_BUS_IPERR      _ONEBIT32B(62 - 32)
#define PPCE500_MCSR_BUS_RPERR      _ONEBIT32B(63 - 32)

/*
 * HID0
 */
#define PPCE500_HID0_EMCP           _ONEBIT32B(32 - 32)
#define PPCE500_HID0_DOZE           _ONEBIT32B(40 - 32)
#define PPCE500_HID0_NAP            _ONEBIT32B(41 - 32)
#define PPCE500_HID0_SLEEP          _ONEBIT32B(42 - 32)
#define PPCE500_HID0_NHR            _ONEBIT32B(47 - 32)
#define PPCE500_HID0_TBEN           _ONEBIT32B(49 - 32)
#define PPCE500_HID0_SEL_TBCLK      _ONEBIT32B(50 - 32)
#define PPCE500_HID0_EN_MAS7_UPDATE _ONEBIT32B(56 - 32)
#define PPCE500_HID0_NOPTI          _ONEBIT32B(63 - 32)

/*
 * HID1
 */
#define PPCE500_HID1_PLL_CFG_MASK   _BITFIELD32B(37 - 32, 0x3f)
#define PPCE500_HID1_PLL_CFG_SHIFT  (63 - 37)
#define PPCE500_HID1_NEXEN          _ONEBIT32B(47 - 32)
#define PPCE500_HID1_R1DPE          _ONEBIT32B(48 - 32)
#define PPCE500_HID1_R2DPE          _ONEBIT32B(49 - 32)
#define PPCE500_HID1_ASTME          _ONEBIT32B(50 - 32)
#define PPCE500_HID1_ABE            _ONEBIT32B(51 - 32)
#define PPCE500_HID1_MPXTT          _ONEBIT32B(53 - 32)
#define PPCE500_HID1_MSHARS         _ONEBIT32B(54 - 32)
#define PPCE500_HID1_SSHAR          _ONEBIT32B(55 - 32)
#define PPCE500_HID1_ATS            _ONEBIT32B(56 - 32)
#define PPCE500_HID1_MID_MASK       _BITFIELD32B(63 - 32, 0xf)
#define PPCE500_HID1_MID_SHIFT      (63 - 63)

/*
 * Branch Unit Control and Status Register
 */
#define PPCE500_BUCSR_BBFI          _ONEBIT32B(54 - 32)
#define PPCE500_BUCSR_BBLO          _ONEBIT32B(55 - 32)
#define PPCE500_BUCSR_BBUL          _ONEBIT32B(56 - 32)
#define PPCE500_BUCSR_BBLFC         _ONEBIT32B(57 - 32)
#define PPCE500_BUCSR_BPEN          _ONEBIT32B(63 - 32)

/*
 * Signal Processing and Embedded Floating Point Status and Control
 */
#define PPCE500_SPEFSCR_SOVH        _ONEBIT32B(32 - 32)
#define PPCE500_SPEFSCR_OVH         _ONEBIT32B(33 - 32)
#define PPCE500_SPEFSCR_FGH         _ONEBIT32B(34 - 32)
#define PPCE500_SPEFSCR_FXH         _ONEBIT32B(35 - 32)
#define PPCE500_SPEFSCR_FINVH       _ONEBIT32B(36 - 32)
#define PPCE500_SPEFSCR_FDBZH       _ONEBIT32B(37 - 32)
#define PPCE500_SPEFSCR_FUNFH       _ONEBIT32B(38 - 32)
#define PPCE500_SPEFSCR_FOVFH       _ONEBIT32B(39 - 32)
#define PPCE500_SPEFSCR_FINXS       _ONEBIT32B(42 - 32)
#define PPCE500_SPEFSCR_FINVS       _ONEBIT32B(43 - 32)
#define PPCE500_SPEFSCR_FFBZS       _ONEBIT32B(44 - 32)
#define PPCE500_SPEFSCR_FUNFS       _ONEBIT32B(45 - 32)
#define PPCE500_SPEFSCR_FOVFS       _ONEBIT32B(46 - 32)
#define PPCE500_SPEFSCR_MODE        _ONEBIT32B(47 - 32)
#define PPCE500_SPEFSCR_SOV         _ONEBIT32B(48 - 32)
#define PPCE500_SPEFSCR_OV          _ONEBIT32B(49 - 32)
#define PPCE500_SPEFSCR_FG          _ONEBIT32B(50 - 32)
#define PPCE500_SPEFSCR_FX          _ONEBIT32B(51 - 32)
#define PPCE500_SPEFSCR_FINV        _ONEBIT32B(52 - 32)
#define PPCE500_SPEFSCR_FDBZ        _ONEBIT32B(53 - 32)
#define PPCE500_SPEFSCR_FUNF        _ONEBIT32B(54 - 32)
#define PPCE500_SPEFSCR_FOVF        _ONEBIT32B(55 - 32)
#define PPCE500_SPEFSCR_FINXE       _ONEBIT32B(57 - 32)
#define PPCE500_SPEFSCR_FINVE       _ONEBIT32B(58 - 32)
#define PPCE500_SPEFSCR_FDBZE       _ONEBIT32B(59 - 32)
#define PPCE500_SPEFSCR_FUNFE       _ONEBIT32B(60 - 32)
#define PPCE500_SPEFSCR_FOVFE       _ONEBIT32B(61 - 32)
#define PPCE500_SPEFSCR_FRMC_MASK   _BITFIELD32(63 - 32, 0x3)
#define PPCE500_SPEFSCR_FRMC_SHIFT  (63 - 63)
#define PPCE500_SPEFSCR_FRMC_NEAR   _BITFIELD32(63 - 32, 0x0)
#define PPCE500_SPEFSCR_FRMC_ZERO   _BITFIELD32(63 - 32, 0x1)
#define PPCE500_SPEFSCR_FRMC_PINF   _BITFIELD32(63 - 32, 0x2)
#define PPCE500_SPEFSCR_FRMC_NINF   _BITFIELD32(63 - 32, 0x2)

/*
 * L1 Cache Control and Status Register 0 (data cache)
 */
#define PPCE500_L1CSR0_CPE          _ONEBIT32B(47 - 32)
#define PPCE500_L1CSR0_PIE          _ONEBIT32B(48 - 32)
#define PPCE500_L1CSR0_CSLC         _ONEBIT32B(52 - 32)
#define PPCE500_L1CSR0_CUL          _ONEBIT32B(53 - 32)
#define PPCE500_L1CSR0_CLO          _ONEBIT32B(54 - 32)
#define PPCE500_L1CSR0_CLFC         _ONEBIT32B(55 - 32)
#define PPCE500_L1CSR0_CFI          _ONEBIT32B(62 - 32)
#define PPCE500_L1CSR0_CE           _ONEBIT32B(63 - 32)

/*
 * L1 Cache Control and Status Register 1 (instruction cache)
 */
#define PPCE500_L1CSR1_ICPE         _ONEBIT32B(47 - 32)
#define PPCE500_L1CSR1_IPIE         _ONEBIT32B(48 - 32)
#define PPCE500_L1CSR1_ICSLC        _ONEBIT32B(52 - 32)
#define PPCE500_L1CSR1_ICUL         _ONEBIT32B(53 - 32)
#define PPCE500_L1CSR1_ICLO         _ONEBIT32B(54 - 32)
#define PPCE500_L1CSR1_ICLFC        _ONEBIT32B(55 - 32)
#define PPCE500_L1CSR1_ICFI         _ONEBIT32B(62 - 32)
#define PPCE500_L1CSR1_ICE          _ONEBIT32B(63 - 32)

/*
 * Extra bits for the TCR register
 */
#define PPCE500_TCR_WPEXT_MASK      _BITFIELD32B(46 - 32, 0xf)
#define PPCE500_TCR_WPEXT_SHIFT                  (31-(46-32)
#define PPCE500_TCR_FPEXT_MASK  _BITFIELD32B(50 - 32, 0xf)
#define PPCE500_TCR_FPEXT_SHIFT (31 - (50 - 32))

/*
 * SPR numbers
 */
#define PPCE500_SPR_IVOR32      528
#define PPCE500_SPR_IVOR33      529
#define PPCE500_SPR_IVOR34      530
#define PPCE500_SPR_IVOR35      531
#define PPCE500_SPR_L1CFG0      515
#define PPCE500_SPR_L1CFG1      516
#define PPCE500_SPR_L1CSR0      1010
#define PPCE500_SPR_L1CSR1      1011
#define PPCE500_SPR_NPIDR       517
#define PPCE500_SPR_SPEFSCR     512
#define PPCE500_SPR_MCSRR0      570
#define PPCE500_SPR_MCSRR1      571
#define PPCE500_SPR_MCSR        572
#define PPCE500_SPR_MCAR        573
#define PPCE500_SPR_IARR        518
#define PPCE500_SPR_HID0        1008
#define PPCE500_SPR_HID1        1009
#define PPCE500_SPR_BUCSR       1013
#define PPCE500_SPR_SVR         1023

#endif

/* __SRCVERSION("e500cpu.h $Rev: 209372 $"); */
