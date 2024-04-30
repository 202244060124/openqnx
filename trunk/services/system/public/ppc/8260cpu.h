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
 *  ppc/8260cpu.h
 *
 * Registers specific to the Motorola PPC 8260 chip
 *

 */

#ifndef __PPC_8260CPU_H_INCLUDED
#define __PPC_8260CPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

/* PPC603 is the core of PPC8260 */
#ifndef __PPC_603CPU_H_INCLUDED
#include _NTO_HDR_(ppc / 603cpu.h)
#endif

/*
 * SIU
 */

/* SIU Module Configuration Register */
#define PPC8260_SIUMCR_BBD            _ONEBIT32B(0)
#define PPC8260_SIUMCR_ESE            _ONEBIT32B(1)
#define PPC8260_SIUMCR_PBSE           _ONEBIT32B(2)
#define PPC8260_SIUMCR_COIS           _ONEBIT32B(3)
#define PPC8260_SIUMCR_DPPC_MASK      _BITFIELD32B(5, 0x3)
#define PPC8260_SIUMCR_DPPC(x)        _BITFIELD32B(5, x)
#define PPC8260_SIUMCR_L2CPC_MASK     _BITFIELD32B(7, 0x3)
#define PPC8260_SIUMCR_L2CPC(x)       _BITFIELD32B(7, x)
#define PPC8260_SIUMCR_LBPC_MASK      _BITFIELD32B(9, 0x3)
#define PPC8260_SIUMCR_LBPC(x)        _BITFIELD32B(9, x)
#define PPC8260_SIUMCR_APPC_MASK      _BITFIELD32B(11, 0x3)
#define PPC8260_SIUMCR_APPC(x)        _BITFIELD32B(11, x)
#define PPC8260_SIUMCR_CS10PC_MASK    _BITFIELD32B(13, 0x3)
#define PPC8260_SIUMCR_CS10PC(x)      _BITFIELD32B(13, x)
#define PPC8260_SIUMCR_BCTLC_MASK     _BITFIELD32B(15, 0x3)
#define PPC8260_SIUMCR_BCTLC(x)       _BITFIELD32B(15, x)
#define PPC8260_SIUMCR_MMR_MASK       _BITFIELD32B(17, 0x3)
#define PPC8260_SIUMCR_MMR(x)         _BITFIELD32B(17, x)
#define PPC8260_SIUMCR_LPBSE          _ONEBIT32B(18)

/* SICR: SIU interrupt configuration register */
#define PPC8260CPM_SICR_HP_M          _BITFIELD16B(7, 0x3f)
#define PPC8260CPM_SICR_HP(id)        _BITFIELD16B(7, id)
#define PPC8260CPM_SICR_GSIU          _ONEBIT16B(14)
#define PPC8260CPM_SICR_SPS           _ONEBIT16B(15)

/*
 * Periodic Interrupt Status and Control Register
 */
#define PPC8260_PISCR_PIRQ_MASK       _BITFIELD16B(7, 0xff)
#define PPC8260_PISCR_PIRQ_SHIFT      (15 - 7)
#define PPC8260_PISCR_PS              _ONEBIT16B(8)
#define PPC8260_PISCR_PIE             _ONEBIT16B(13)
#define PPC8260_PISCR_PITF            _ONEBIT16B(14)
#define PPC8260_PISCR_PTE             _ONEBIT16B(15)

#define PPC8260_CLOCK_TIMERSCLK       8192

/*
 * Internal Memory Map Register
 */
#define PPC8260_IMMR_ISB_MASK         _BITFIELD32B(15, 0xffff)
#define PPC8260_IMMR_ISB(x)           _BITFIELD32B(15, x)
#define PPC8260_IMMR_ISB_SHIFT        (31 - 15)
#define PPC8260_IMMR_PARTNUM_MASK     _BITFIELD32B(23, 0xff)
#define PPC8260_IMMR_PARTNUM_SHIFT    (31 - 23)
#define PPC8260_IMMR_MASKNUM_MASK     _BITFIELD32B(31, 0xff)
#define PPC8260_IMMR_MASKNUM_SHIFT    (31 - 31)

#define PPC8260_GET_PARTNUM(immr_isb) ((in32(immr_isb + PPC8260_IMMR_OFF_IMMR) & PPC8260_IMMR_PARTNUM_MASK) >> PPC8260_IMMR_PARTNUM_SHIFT)

/*
 * System Protection Control Register
 */
#define PPC8260_SYPCR_SWTC_MASK       _BITFIELD32B(15, 0xffff)
#define PPC8260_SYPCR_SWTC(x)         _BITFIELD32B(15, x)
#define PPC8260_SYPCR_SWTC_SHIFT      (31 - 15)
#define PPC8260_SYPCR_BMT_MASK        _BITFIELD32B(23, 0xff)
#define PPC8260_SYPCR_BMT(x)          _BITFIELD32B(23, x)
#define PPC8260_SYPCR_BMT_SHIFT       (31 - 23)
#define PPC8260_SYPCR_PBME            _ONEBIT32B(24)
#define PPC8260_SYPCR_LBME            _ONEBIT32B(25)
#define PPC8260_SYPCR_SWE             _ONEBIT32B(29)
#define PPC8260_SYPCR_SWRI            _ONEBIT32B(30)
#define PPC8260_SYPCR_SWP             _ONEBIT32B(31)

/*
 * Software Service Register
 */
#define PPC8260_SWSR_VALUE1           0x556c
#define PPC8260_SWSR_VALUE2           0xaa39

/*
 * Realtime Clock Status and Control Register
 */
#define PPC8260_TMCNTSC_SEC           _ONEBIT16B(8)
#define PPC8260_TMCNTSC_ALR           _ONEBIT16B(9)
#define PPC8260_TMCNTSC_SIE           _ONEBIT16B(12)
#define PPC8260_TMCNTSC_ALE           _ONEBIT16B(13)
#define PPC8260_TMCNTSC_TCF           _ONEBIT16B(14)
#define PPC8260_TMCNTSC_TCE           _ONEBIT16B(15)

/*
 * Periodic Interrupt Status and Control Register
 */
/* clearify the doc???
#define PPC8260_PISCR_PIRQ_MASK        _BITFIELD16B(7,0xff)
#define PPC8260_PISCR_PIRQ_SHIFT        (15-7)
*/
#define PPC8260_PISCR_PS              _ONEBIT16B(8)
#define PPC8260_PISCR_PIE             _ONEBIT16B(13)
#define PPC8260_PISCR_PTF             _ONEBIT16B(14)
#define PPC8260_PISCR_PTE             _ONEBIT16B(15)

/*
 * System Clock and Reset Control Register
 */
#define PPC8260_SCCR_CLPO             _ONEBIT16B(29)
#define PPC8260_SCCR_DFBRG_MASK       _BITFIELD32B(31, 0x3)
#define PPC8260_SCCR_DFBRG_DIV2       _BITFIELD32B(31, 0x0)
#define PPC8260_SCCR_DFBRG_DIV8       _BITFIELD32B(31, 0x1)
#define PPC8260_SCCR_DFBRG_DIV32      _BITFIELD32B(31, 0x2)
#define PPC8260_SCCR_DFBRG_DIV128     _BITFIELD32B(31, 0x3)

/*
 * System Clock Mode Register
 */
#define PPC8260_SCMR_BUSDF_MASK       _BITFIELD32B(11, 0xf)
#define PPC8260_SCMR_BUSDF_SHIFT      (31 - 11)
#define PPC8260_SCMR_CPMDF_MASK       _BITFIELD32B(15, 0xf)
#define PPC8260_SCMR_CPMDF_SHIFT      (31 - 15)
#define PPC8260_SCMR_PLLMF_MASK       _BITFIELD32B(31, 0xfff)
#define PPC8260_SCMR_PLLMF_MASKHIP7   _BITFIELD32B(31, 0xf)
#define PPC8260_SCMR_PLLMF_SHIFT      0
#define PPC8260_SCMR_PLLDF            _ONEBIT32B(19)
#define PPC8260_SCMR_CORECNF_MASK     _BITFIELD32B(7, 0x1f)
#define PPC8260_SCMR_CORECNF_SHIFT    (31 - 7)

/*
 * SPR numbers
 */
#define PPC8260_SPR_HID2              1011

/*
 * HID0
 */
/* only define those bits which are different from 603. Other bits could be found in 603cpu.h.
    The bit EICE in 603 HID0 is removed in 8260 */
#define PPC8260_HID0_IFEM             _ONEBIT16B(24)
#define PPC8260_HID0_ABE              _ONEBIT16B(28)

/*
 * HID2
 */
#define PPC8260_HID2_SFP              _ONEBIT16B(15)
#define PPC8260_HID2_IWLCK_M          _BITFIELD32B(18, 0x7)
#define PPC8260_HID2_IWLCK(x)         _BITFIELD32B(18, x)
#define PPC8260_HID2_DWLCK_M          _BITFIELD32B(26, 0x7)
#define PPC8260_HID2_DWLCK(x)         _BITFIELD32B(26, x)

/*
 * Memory mapped registers based off of IMMR
 */
#define PPC8260_IMMR_OFF_DPRAM1       0x0
#define PPC8260_IMMR_OFF_DPRAM2       0x08000
#define PPC8260_IMMR_OFF_DPRAM3       0x0b000
#define PPC8260_IMMR_OFF_SIUMCR       0x10000
#define PPC8260_IMMR_OFF_SYPCR        0x10004
#define PPC8260_IMMR_OFF_SWSR         0x1000e
#define PPC8260_IMMR_OFF_BCR          0x10024
#define PPC8260_IMMR_OFF_PPC_ACR      0x10028
#define PPC8260_IMMR_OFF_PPC_ALRH     0x1002c
#define PPC8260_IMMR_OFF_PPC_ALRL     0x10030
#define PPC8260_IMMR_OFF_LCL_ACR      0x10034
#define PPC8260_IMMR_OFF_LCL_ALRH     0x10038
#define PPC8260_IMMR_OFF_LCL_ALRL     0x1003c
#define PPC8260_IMMR_OFF_TESCR1       0x10040
#define PPC8260_IMMR_OFF_TESCR2       0x10044
#define PPC8260_IMMR_OFF_L_TESCR1     0x10048
#define PPC8260_IMMR_OFF_L_TESCR2     0x1004C
#define PPC8260_IMMR_OFF_PDTEA        0x10050
#define PPC8260_IMMR_OFF_PDTEM        0x10054
#define PPC8260_IMMR_OFF_LDTEA        0x10058
#define PPC8260_IMMR_OFF_LDTEM        0x1005c
#define PPC8260_IMMR_OFF_BR0          0x10100
#define PPC8260_IMMR_OFF_OR0          0x10104
#define PPC8260_IMMR_OFF_BR1          0x10108
#define PPC8260_IMMR_OFF_OR1          0x1010c
#define PPC8260_IMMR_OFF_BR2          0x10110
#define PPC8260_IMMR_OFF_OR2          0x10114
#define PPC8260_IMMR_OFF_BR3          0x10118
#define PPC8260_IMMR_OFF_OR3          0x1011c
#define PPC8260_IMMR_OFF_BR4          0x10120
#define PPC8260_IMMR_OFF_OR4          0x10124
#define PPC8260_IMMR_OFF_BR5          0x10128
#define PPC8260_IMMR_OFF_OR5          0x1012c
#define PPC8260_IMMR_OFF_BR6          0x10130
#define PPC8260_IMMR_OFF_OR6          0x10134
#define PPC8260_IMMR_OFF_BR7          0x10138
#define PPC8260_IMMR_OFF_OR7          0x1013c
#define PPC8260_IMMR_OFF_BR8          0x10140
#define PPC8260_IMMR_OFF_OR8          0x10144
#define PPC8260_IMMR_OFF_BR9          0x10148
#define PPC8260_IMMR_OFF_OR9          0x1014c
#define PPC8260_IMMR_OFF_BR10         0x10150
#define PPC8260_IMMR_OFF_OR10         0x10154
#define PPC8260_IMMR_OFF_BR11         0x10158
#define PPC8260_IMMR_OFF_OR11         0x1015c
#define PPC8260_IMMR_OFF_MAR          0x10168
#define PPC8260_IMMR_OFF_MAMR         0x10170
#define PPC8260_IMMR_OFF_MBMR         0x10174
#define PPC8260_IMMR_OFF_MCMR         0x10178
#define PPC8260_IMMR_OFF_MPTPR        0x10184
#define PPC8260_IMMR_OFF_MDR          0x10188
#define PPC8260_IMMR_OFF_PSDMR        0x10190
#define PPC8260_IMMR_OFF_LSDMR        0x10194
#define PPC8260_IMMR_OFF_PURT         0x10198
#define PPC8260_IMMR_OFF_PSRT         0x1019c
#define PPC8260_IMMR_OFF_LURT         0x101a0
#define PPC8260_IMMR_OFF_LSRT         0x101a4
#define PPC8260_IMMR_OFF_IMMR         0x101a8
#define PPC8260_IMMR_OFF_TMCNTSC      0x10220
#define PPC8260_IMMR_OFF_TMCNT        0x10224
#define PPC8260_IMMR_OFF_TMCNTSEC     0x10228
#define PPC8260_IMMR_OFF_TMCNTAL      0x1022c
#define PPC8260_IMMR_OFF_PISCR        0x10240
#define PPC8260_IMMR_OFF_PITC         0x10244
#define PPC8260_IMMR_OFF_PITR         0x10248
#define PPC8260_IMMR_OFF_TSTMHR       0x102a0
#define PPC8260_IMMR_OFF_TSTMLR       0x102a4
#define PPC8260_IMMR_OFF_TSTER        0x102a8
#define PPC8260_IMMR_OFF_SICR         0x10c00
#define PPC8260_IMMR_OFF_SIVEC        0x10c04
#define PPC8260_IMMR_OFF_SIPNR_H      0x10c08
#define PPC8260_IMMR_OFF_SIPNR_L      0x10c0c
#define PPC8260_IMMR_OFF_SIPRR        0x10c10
#define PPC8260_IMMR_OFF_SCPRR_H      0x10c14
#define PPC8260_IMMR_OFF_SCPRR_L      0x10c18
#define PPC8260_IMMR_OFF_SIMR_H       0x10c1c
#define PPC8260_IMMR_OFF_SIMR_L       0x10c20
#define PPC8260_IMMR_OFF_SIEXR        0x10c24
#define PPC8260_IMMR_OFF_SCCR         0x10c80
#define PPC8260_IMMR_OFF_SCMR         0x10c88
#define PPC8260_IMMR_OFF_RSR          0x10c90
#define PPC8260_IMMR_OFF_RMR          0x10c94
#define PPC8260_IMMR_OFF_PDIRA        0x10d00
#define PPC8260_IMMR_OFF_PPARA        0x10d04
#define PPC8260_IMMR_OFF_PSORA        0x10d08
#define PPC8260_IMMR_OFF_PODRA        0x10d0c
#define PPC8260_IMMR_OFF_PDATA        0x10d10
#define PPC8260_IMMR_OFF_PDIRB        0x10d20
#define PPC8260_IMMR_OFF_PPARB        0x10d24
#define PPC8260_IMMR_OFF_PSORB        0x10d28
#define PPC8260_IMMR_OFF_PODRB        0x10d2c
#define PPC8260_IMMR_OFF_PDATB        0x10d30
#define PPC8260_IMMR_OFF_PDIRC        0x10d40
#define PPC8260_IMMR_OFF_PPARC        0x10d44
#define PPC8260_IMMR_OFF_PSORC        0x10d48
#define PPC8260_IMMR_OFF_PODRC        0x10d4c
#define PPC8260_IMMR_OFF_PDATC        0x10d50
#define PPC8260_IMMR_OFF_PDIRD        0x10d60
#define PPC8260_IMMR_OFF_PPARD        0x10d64
#define PPC8260_IMMR_OFF_PSORD        0x10d68
#define PPC8260_IMMR_OFF_PODRD        0x10d6c
#define PPC8260_IMMR_OFF_PDATD        0x10d70
#define PPC8260_IMMR_OFF_TGCR1        0x10d80
#define PPC8260_IMMR_OFF_TGCR2        0x10d84
#define PPC8260_IMMR_OFF_TMR1         0x10d90
#define PPC8260_IMMR_OFF_TMR2         0x10d92
#define PPC8260_IMMR_OFF_TRR1         0x10d94
#define PPC8260_IMMR_OFF_TRR2         0x10d96
#define PPC8260_IMMR_OFF_TCR1         0x10d98
#define PPC8260_IMMR_OFF_TCR2         0x10d9a
#define PPC8260_IMMR_OFF_TCN1         0x10d9c
#define PPC8260_IMMR_OFF_TCN2         0x10d9e
#define PPC8260_IMMR_OFF_TMR3         0x10da0
#define PPC8260_IMMR_OFF_TMR4         0x10da2
#define PPC8260_IMMR_OFF_TRR3         0x10da4
#define PPC8260_IMMR_OFF_TRR4         0x10da6
#define PPC8260_IMMR_OFF_TCR3         0x10da8
#define PPC8260_IMMR_OFF_TCR4         0x10daa
#define PPC8260_IMMR_OFF_TCN3         0x10dac
#define PPC8260_IMMR_OFF_TCN4         0x10dae
#define PPC8260_IMMR_OFF_TER1         0x10db0
#define PPC8260_IMMR_OFF_TER2         0x10db2
#define PPC8260_IMMR_OFF_TER3         0x10db4
#define PPC8260_IMMR_OFF_TER4         0x10db6
#define PPC8260_IMMR_OFF_SDSR         0x11018
#define PPC8260_IMMR_OFF_SDMR         0x1101c
#define PPC8260_IMMR_OFF_IDSR1        0x11020
#define PPC8260_IMMR_OFF_IDMR1        0x11024
#define PPC8260_IMMR_OFF_IDSR2        0x11028
#define PPC8260_IMMR_OFF_IDMR2        0x1102c
#define PPC8260_IMMR_OFF_IDSR3        0x11030
#define PPC8260_IMMR_OFF_IDMR3        0x11034
#define PPC8260_IMMR_OFF_IDSR4        0x11038
#define PPC8260_IMMR_OFF_IDMR4        0x1103c
#define PPC8260_IMMR_OFF_GFMR1        0x11300
#define PPC8260_IMMR_OFF_FPSMR1       0x11304
#define PPC8260_IMMR_OFF_FTODR1       0x11308
#define PPC8260_IMMR_OFF_FDSR1        0x1130c
#define PPC8260_IMMR_OFF_FCCE1        0x11310
#define PPC8260_IMMR_OFF_FCCM1        0x11314
#define PPC8260_IMMR_OFF_FCCS1        0x11318
#define PPC8260_IMMR_OFF_FTIRR1       0x1131c
#define PPC8260_IMMR_OFF_GFMR2        0x11320
#define PPC8260_IMMR_OFF_FPSMR2       0x11324
#define PPC8260_IMMR_OFF_FTODR2       0x11328
#define PPC8260_IMMR_OFF_FDSR2        0x1132c
#define PPC8260_IMMR_OFF_FCCE2        0x11330
#define PPC8260_IMMR_OFF_FCCM2        0x11334
#define PPC8260_IMMR_OFF_FCCS2        0x11338
#define PPC8260_IMMR_OFF_FTIRR2       0x1133c
#define PPC8260_IMMR_OFF_GFMR3        0x11340
#define PPC8260_IMMR_OFF_FPSMR3       0x11344
#define PPC8260_IMMR_OFF_FTODR3       0x11348
#define PPC8260_IMMR_OFF_FDSR3        0x1134c
#define PPC8260_IMMR_OFF_FCCE3        0x11350
#define PPC8260_IMMR_OFF_FCCM3        0x11354
#define PPC8260_IMMR_OFF_FCCS3        0x11358
#define PPC8260_IMMR_OFF_BRGC5        0x115f0
#define PPC8260_IMMR_OFF_BRGC6        0x115f4
#define PPC8260_IMMR_OFF_BRGC7        0x115f8
#define PPC8260_IMMR_OFF_BRGC8        0x115fc
#define PPC8260_IMMR_OFF_I2MOD        0x11860
#define PPC8260_IMMR_OFF_I2ADD        0x11864
#define PPC8260_IMMR_OFF_I2BRG        0x11868
#define PPC8260_IMMR_OFF_I2COM        0x1186c
#define PPC8260_IMMR_OFF_I2CER        0x11870
#define PPC8260_IMMR_OFF_I2CMR        0x11874
#define PPC8260_IMMR_OFF_CPCR         0x119c0
#define PPC8260_IMMR_OFF_RCCR         0x119c4
#define PPC8260_IMMR_OFF_RMDR         0x119c8
#define PPC8260_IMMR_OFF_RCTR1        0x119cc
#define PPC8260_IMMR_OFF_RCTR2        0x119ce
#define PPC8260_IMMR_OFF_RCTR3        0x119d0
#define PPC8260_IMMR_OFF_RCTR4        0x119d2
#define PPC8260_IMMR_OFF_RTER         0x119d6
#define PPC8260_IMMR_OFF_RTMR         0x119da
#define PPC8260_IMMR_OFF_RTSCR        0x119dc
#define PPC8260_IMMR_OFF_RMDS         0x119de
#define PPC8260_IMMR_OFF_RTSR         0x119e0
#define PPC8260_IMMR_OFF_BRGC1        0x119f0
#define PPC8260_IMMR_OFF_BRGC2        0x119f4
#define PPC8260_IMMR_OFF_BRGC3        0x119f8
#define PPC8260_IMMR_OFF_BRGC4        0x119fc
#define PPC8260_IMMR_OFF_GSMR_L1      0x11a00
#define PPC8260_IMMR_OFF_GSMR_H1      0x11a04
#define PPC8260_IMMR_OFF_PSMR1        0x11a08
#define PPC8260_IMMR_OFF_TODR1        0x11a0c
#define PPC8260_IMMR_OFF_DSR1         0x11a0e
#define PPC8260_IMMR_OFF_SCCE1        0x11a10
#define PPC8260_IMMR_OFF_SCCM1        0x11a14
#define PPC8260_IMMR_OFF_SCCS1        0x11a17
#define PPC8260_IMMR_OFF_GSMR_L2      0x11a20
#define PPC8260_IMMR_OFF_GSMR_H2      0x11a24
#define PPC8260_IMMR_OFF_PSMR2        0x11a28
#define PPC8260_IMMR_OFF_TODR2        0x11a2c
#define PPC8260_IMMR_OFF_DSR2         0x11a2e
#define PPC8260_IMMR_OFF_SCCE2        0x11a30
#define PPC8260_IMMR_OFF_SCCM2        0x11a34
#define PPC8260_IMMR_OFF_SCCS2        0x11a37
#define PPC8260_IMMR_OFF_GSMR_L3      0x11a40
#define PPC8260_IMMR_OFF_GSMR_H3      0x11a44
#define PPC8260_IMMR_OFF_PSMR3        0x11a48
#define PPC8260_IMMR_OFF_TODR3        0x11a4c
#define PPC8260_IMMR_OFF_DSR3         0x11a4e
#define PPC8260_IMMR_OFF_SCCE3        0x11a50
#define PPC8260_IMMR_OFF_SCCM3        0x11a54
#define PPC8260_IMMR_OFF_SCCS3        0x11a57
#define PPC8260_IMMR_OFF_GSMR_L4      0x11a60
#define PPC8260_IMMR_OFF_GSMR_H4      0x11a64
#define PPC8260_IMMR_OFF_PSMR4        0x11a68
#define PPC8260_IMMR_OFF_TODR4        0x11a6c
#define PPC8260_IMMR_OFF_DSR4         0x11a6e
#define PPC8260_IMMR_OFF_SCCE4        0x11a70
#define PPC8260_IMMR_OFF_SCCM4        0x11a74
#define PPC8260_IMMR_OFF_SCCS4        0x11a77
#define PPC8260_IMMR_OFF_SMCMR1       0x11a82
#define PPC8260_IMMR_OFF_SMCE1        0x11a86
#define PPC8260_IMMR_OFF_SMCM1        0x11a8a
#define PPC8260_IMMR_OFF_SMCMR2       0x11a92
#define PPC8260_IMMR_OFF_SMCE2        0x11a96
#define PPC8260_IMMR_OFF_SMCM2        0x11a9a
#define PPC8260_IMMR_OFF_SPMODE       0x11aa0
#define PPC8260_IMMR_OFF_SPIE         0x11aa6
#define PPC8260_IMMR_OFF_SPIM         0x11aaa
#define PPC8260_IMMR_OFF_SPCOM        0x11aad
#define PPC8260_IMMR_OFF_CMXSL1CR     0x11b00
#define PPC8260_IMMR_OFF_CMXSL2CR     0x11b02
#define PPC8260_IMMR_OFF_CMXFCR       0x11b04
#define PPC8260_IMMR_OFF_CMXSCR       0x11b08
#define PPC8260_IMMR_OFF_CMXSMR       0x11b0c
#define PPC8260_IMMR_OFF_CMXUAR       0x11b0e
#define PPC8260_IMMR_OFF_SI1AMR       0x11b20
#define PPC8260_IMMR_OFF_SI1BMR       0x11b22
#define PPC8260_IMMR_OFF_SI1CMR       0x11b24
#define PPC8260_IMMR_OFF_SI1DMR       0x11b26
#define PPC8260_IMMR_OFF_SI1GMR       0x11b28
#define PPC8260_IMMR_OFF_SI1CMDR      0x11b2a
#define PPC8260_IMMR_OFF_SI1STR       0x11b2c
#define PPC8260_IMMR_OFF_SI1RSR       0x11b2e
#define PPC8260_IMMR_OFF_MCCE1        0x11b30
#define PPC8260_IMMR_OFF_MCCM1        0x11b34
#define PPC8260_IMMR_OFF_MCCF1        0x11b38
#define PPC8260_IMMR_OFF_SI2AMR       0x11b40
#define PPC8260_IMMR_OFF_SI2BMR       0x11b42
#define PPC8260_IMMR_OFF_SI2CMR       0x11b44
#define PPC8260_IMMR_OFF_SI2DMR       0x11b46
#define PPC8260_IMMR_OFF_SI2GMR       0x11b48
#define PPC8260_IMMR_OFF_SI2CMDR      0x11b4a
#define PPC8260_IMMR_OFF_SI2STR       0x11b4c
#define PPC8260_IMMR_OFF_SI2RSR       0x11b4e
#define PPC8260_IMMR_OFF_MCCE2        0x11b50
#define PPC8260_IMMR_OFF_MCCM2        0x11b54
#define PPC8260_IMMR_OFF_MCCF2        0x11b58
#define PPC8260_IMMR_OFF_SI1TXRAM     0x12000
#define PPC8260_IMMR_OFF_SI1RXRAM     0x12400
#define PPC8260_IMMR_OFF_SI2TXRAM     0x12800
#define PPC8260_IMMR_OFF_SI2RXRAM     0x12c00

/* default immr location for neutrino */
#define PPC8260_IMMR_ISB_DEFAULT      0x30000000
#define PPC8260_IMMR(reg, size)       (*(volatile uint##size##_t*)(PPC8260_IMMR_ISB_DEFAULT + PPC8260_IMMR_OFF_##reg))

#endif

/* __SRCVERSION("8260cpu.h $Rev: 153052 $"); */
