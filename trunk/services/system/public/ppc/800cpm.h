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
 *  ppc/800cmp.h
 *
 * Registers specific to the CMP of Motorola PPC 8xx chip
 *
 *    Derived from 860cpm.h  (03/16/98)
 *

 */

#ifndef __PPC_800CMP_H_INCLUDED
#define __PPC_800CMP_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

/*
*** CPM Command Register
*/
#define PPC8CPM_CPCR_RST                            _ONEBIT16B(0)
#define PPC8CPM_CPCR_FLG                            _ONEBIT16B(15)
/* OPCODE */
#define PPC8CPM_CPCR_INITRXTX                       _BITFIELD16B(7, 0X0)
#define PPC8CPM_CPCR_INITRX                         _BITFIELD16B(7, 0X1)
#define PPC8CPM_CPCR_INITTX                         _BITFIELD16B(7, 0X2)
#define PPC8CPM_CPCR_ENTERHUNT                      _BITFIELD16B(7, 0X3)
#define PPC8CPM_CPCR_STOPTX                         _BITFIELD16B(7, 0X4)
#define PPC8CPM_CPCR_STOPTXGRACE                    _BITFIELD16B(7, 0X5)
#define PPC8CPM_CPCR_INITIDMA                       _BITFIELD16B(7, 0X5)
#define PPC8CPM_CPCR_RESTARTTX                      _BITFIELD16B(7, 0X6)
#define PPC8CPM_CPCR_CLOSERXBD                      _BITFIELD16B(7, 0X7)
#define PPC8CPM_CPCR_GADDR                          _BITFIELD16B(7, 0X8)
#define PPC8CPM_CPCR_SETTIMER                       _BITFIELD16B(7, 0X8)
#define PPC8CPM_CPCR_GCITIMEOUT                     _BITFIELD16B(7, 0X9)
#define PPC8CPM_CPCR_RESETBCS                       _BITFIELD16B(7, 0Xa)
#define PPC8CPM_CPCR_GCIABORT                       _BITFIELD16B(7, 0Xa)
#define PPC8CPM_CPCR_STOPIDMA                       _BITFIELD16B(7, 0Xb)
#define PPC8CPM_CPCR_STARTDSP                       _BITFIELD16B(7, 0Xc)
#define PPC8CPM_CPCR_INITDSP                        _BITFIELD16B(7, 0Xd)
#define PPC8CPM_CPCR_ARMIDMA                        _BITFIELD16B(7, 0Xd)
#define PPC8CPM_CPCR_USB                            _BITFIELD16B(7, 0Xf)
/* CH_NUM */
#define PPC8CPM_CPCR_CH_SCC1                        _BITFIELD16B(11, 0X0)
#define PPC8CPM_CPCR_CH_USB                         _BITFIELD16B(11, 0X0)
#define PPC8CPM_CPCR_CH_I2CIDM1                     _BITFIELD16B(11, 0X1)
#define PPC8CPM_CPCR_CH_SCC2                        _BITFIELD16B(11, 0X4)
#define PPC8CPM_CPCR_CH_SPIIDM2TIMER                _BITFIELD16B(11, 0X5)
#define PPC8CPM_CPCR_CH_SCC3                        _BITFIELD16B(11, 0X8)
#define PPC8CPM_CPCR_CH_SMC1DSP1                    _BITFIELD16B(11, 0X9)
#define PPC8CPM_CPCR_CH_SCC4                        _BITFIELD16B(11, 0Xc)
#define PPC8CPM_CPCR_CH_SMC2DSP2                    _BITFIELD16B(11, 0Xd)

/*
*** Dual port RAM inside CMP
*/
/*
** Note: 821 and 860 (and 823 revision 0) -- 5k; 823 -- 8k
** BDC3 is 823 only
** Offset from dual port RAM BASE
*/
#define PPC8CPM_DPRAM_BDC1_S                        0x0
#define PPC8CPM_DPRAM_BDC1_E                        0x07ff
#define PPC8CPM_DPRAM_BD_S                          0x0800
#define PPC8CPM_DPRAM_BD_E                          0x0dff
#define PPC8CPM_DPRAM_BDC2_S                        0x0e00
#define PPC8CPM_DPRAM_BDC2_E                        0x0fff
#define PPC8CPM_DPRAM_BDC3_S                        0x1000
#define PPC8CPM_DPRAM_BDC3_E                        0x1bff
#define PPC8CPM_DPRAM_PARA_S                        0x1c00
#define PPC8CPM_DPRAM_PARA_E                        0x1fff

/*
** Parameter RAM MAP
** Offset from DPRAM_BASE
*/
#define PPC8CPM_DPRAMPARA_SCC1_S                    0x1c00
#define PPC8CPM_DPRAMPARA_SCC1_E                    0x1c7f
#define PPC8CPM_DPRAMPARA_USB_S                     0x1c00
#define PPC8CPM_DPRAMPARA_USB_E                     0x1c7f
#define PPC8CPM_DPRAMPARA_I2C_S                     0x1c80
#define PPC8CPM_DPRAMPARA_I2C_E                     0x1caf
#define PPC8CPM_DPRAMPARA_MISC_S                    0x1cb0
#define PPC8CPM_DPRAMPARA_MISC_E                    0x1cbf
#define PPC8CPM_DPRAMPARA_IDMA1_S                   0x1cc0
#define PPC8CPM_DPRAMPARA_IDMA1_E                   0x1cff
#define PPC8CPM_DPRAMPARA_SCC2_S                    0x1d00
#define PPC8CPM_DPRAMPARA_SCC2_E                    0x1d7f
#define PPC8CPM_DPRAMPARA_SPI_S                     0x1d80
#define PPC8CPM_DPRAMPARA_SPI_E                     0x1daf
#define PPC8CPM_DPRAMPARA_TIMER_S                   0x1db0
#define PPC8CPM_DPRAMPARA_TIMER_E                   0x1dbf
#define PPC8CPM_DPRAMPARA_IDMA2_S                   0x1dc0
#define PPC8CPM_DPRAMPARA_IDMA2_E                   0x1dff
#define PPC8CPM_DPRAMPARA_SCC3_S                    0x1e00
#define PPC8CPM_DPRAMPARA_SCC3_E                    0x1e7f
#define PPC8CPM_DPRAMPARA_SMC1_S                    0x1e80
#define PPC8CPM_DPRAMPARA_SMC1_E                    0x1ebf
#define PPC8CPM_DPRAMPARA_DSP1_S                    0x1ec0
#define PPC8CPM_DPRAMPARA_DSP1_E                    0x1eff
#define PPC8CPM_DPRAMPARA_SCC4_S                    0x1f00
#define PPC8CPM_DPRAMPARA_SCC4_E                    0x1f7f
#define PPC8CPM_DPRAMPARA_SMC2_S                    0x1f80
#define PPC8CPM_DPRAMPARA_SMC2_E                    0x1fbf
#define PPC8CPM_DPRAMPARA_DSP2_S                    0x1fc0
#define PPC8CPM_DPRAMPARA_DSP2_E                    0x1fff

/* Para RAM MAP for SCC and SMC */

/*
** Common Parameter RAM for SCC and SMC
** Offset from specific controller ParaRAM base
*/
#define PPC8CPM_PARARAM_SCCSMC_RBASE                0x0
#define PPC8CPM_PARARAM_SCCSMC_TBASE                0x2
#define PPC8CPM_PARARAM_SCCSMC_RFCR                 0x4
#define PPC8CPM_PARARAM_SCCSMC_TFCR                 0x5
#define PPC8CPM_PARARAM_SCCSMC_MRBLR                0x6
#define PPC8CPM_PARARAM_SCCSMC_RBPTR                0x10
#define PPC8CPM_PARARAM_SCCSMC_TBPTR                0x20

/*
** Protocal specific Parameter RAM
** SMC UART ParaRAM Map
*/
#define PPC8CPM_PARARAM_SMCUART_MAXIDL              0x28
#define PPC8CPM_PARARAM_SMCUART_IDLC                0x2a
#define PPC8CPM_PARARAM_SMCUART_BRKLN               0x2c
#define PPC8CPM_PARARAM_SMCUART_BRKEC               0x2e
#define PPC8CPM_PARARAM_SMCUART_BRKCR               0x30

/*
** SCC UART ParaRAM Map
*/
#define PPC8CPM_PARARAM_SCCUART_MAXIDL              0x38
#define PPC8CPM_PARARAM_SCCUART_IDLC                0x3a
#define PPC8CPM_PARARAM_SCCUART_BRKCR               0x3c
#define PPC8CPM_PARARAM_SCCUART_PAREC               0x3e
#define PPC8CPM_PARARAM_SCCUART_FRMEC               0x40
#define PPC8CPM_PARARAM_SCCUART_NOSEC               0x42
#define PPC8CPM_PARARAM_SCCUART_BRKEC               0x44
#define PPC8CPM_PARARAM_SCCUART_BRKLN               0x46
#define PPC8CPM_PARARAM_SCCUART_UADDR1              0x48
#define PPC8CPM_PARARAM_SCCUART_UADDR2              0x4a
#define PPC8CPM_PARARAM_SCCUART_TOSEQ               0x4e
#define PPC8CPM_PARARAM_SCCUART_CHARACTER1          0x50
#define PPC8CPM_PARARAM_SCCUART_CHARACTER2          0x52
#define PPC8CPM_PARARAM_SCCUART_CHARACTER3          0x54
#define PPC8CPM_PARARAM_SCCUART_CHARACTER4          0x56
#define PPC8CPM_PARARAM_SCCUART_CHARACTER5          0x58
#define PPC8CPM_PARARAM_SCCUART_CHARACTER6          0x5a
#define PPC8CPM_PARARAM_SCCUART_CHARACTER7          0x5c
#define PPC8CPM_PARARAM_SCCUART_CHARACTER8          0x5e
#define PPC8CPM_PARARAM_SCCUART_RCCM                0x60
/* SCC UART control characters */
#define PPC8CPM_PARARAM_SCCUART_CHAR_E              0x8000
#define PPC8CPM_PARARAM_SCCUART_CHAR_R              0x4000

/* Buffer Descriptor size */
#define PPC8CPM_BD_SIZE                             8
#define PPC8CPM_BD_FLG                              0
#define PPC8CPM_BD_COUNT                            2
#define PPC8CPM_BD_POINTER                          4

/* Buffer Descriptor flags */
/* Rx Common */
#define PPC8CPM_RXBD_E                              _ONEBIT16B(0)
#define PPC8CPM_RXBD_W                              _ONEBIT16B(2)
#define PPC8CPM_RXBD_I                              _ONEBIT16B(3)
#define PPC8CPM_RXBD_CM                             _ONEBIT16B(6)
/* Tx Common */
#define PPC8CPM_TXBD_R                              _ONEBIT16B(0)
#define PPC8CPM_TXBD_W                              _ONEBIT16B(2)
#define PPC8CPM_TXBD_I                              _ONEBIT16B(3)
#define PPC8CPM_TXBD_CM                             _ONEBIT16B(6)
#define PPC8CPM_TXBD_P                              _ONEBIT16B(7)

/*
** Protocal specific Buffer Descriptor flags
** UART Rx SCC and SMC
*/
#define PPC8CPM_RXBD_ID                             _ONEBIT16B(7)
#define PPC8CPM_RXBD_BR                             _ONEBIT16B(10)
#define PPC8CPM_RXBD_FR                             _ONEBIT16B(11)
#define PPC8CPM_RXBD_PR                             _ONEBIT16B(12)
#define PPC8CPM_RXBD_OV                             _ONEBIT16B(14)
/* UART Rx SCC */
#define PPC8CPM_RXBD_C                              _ONEBIT16B(4)
#define PPC8CPM_RXBD_A                              _ONEBIT16B(5)
#define PPC8CPM_RXBD_AM                             _ONEBIT16B(8)
#define PPC8CPM_RXBD_CD                             _ONEBIT16B(15)
/* UART Tx SCC */
#define PPC8CPM_TXBD_CR                             _ONEBIT16B(4)
#define PPC8CPM_TXBD_A                              _ONEBIT16B(5)
#define PPC8CPM_TXBD_NS                             _ONEBIT16B(8)
#define PPC8CPM_TXBD_CT                             _ONEBIT16B(15)

/*
*** Serial Interface (SI)
*/

/* SIMODE */
#define PPC8CPM_SIMODE_SMC2                         _ONEBIT32B(0)
#define PPC8CPM_SIMODE_SMC2CSM                      _BITFIELD32B(3, 7)
#define PPC8CPM_SIMODE_SMC2CS(n)                    _BITFIELD32B(3, n)
/* 823 does not have TDM B */
#define PPC8CPM_SIMODE_SDMB                         _BITFIELD32B(5, 3)
#define PPC8CPM_SIMODE_SDMB_NORMAL                  _BITFIELD32B(5, 0)
#define PPC8CPM_SIMODE_SDMB_AUTOECHO                _BITFIELD32B(5, 1)
#define PPC8CPM_SIMODE_SDMB_LOOPBACK                _BITFIELD32B(5, 2)
#define PPC8CPM_SIMODE_SDMB_LPCTL                   _BITFIELD32B(5, 3)
#define PPC8CPM_SIMODE_RFSDB                        _BITFIELD32B(7, 3)
#define PPC8CPM_SIMODE_RFSDB_0                      _BITFIELD32B(7, 0)
#define PPC8CPM_SIMODE_RFSDB_1                      _BITFIELD32B(7, 1)
#define PPC8CPM_SIMODE_RFSDB_2                      _BITFIELD32B(7, 2)
#define PPC8CPM_SIMODE_RFSDB_3                      _BITFIELD32B(7, 3)
#define PPC8CPM_SIMODE_DSCB                         _ONEBIT32B(8)
#define PPC8CPM_SIMODE_CRTB                         _ONEBIT32B(9)
#define PPC8CPM_SIMODE_STZB                         _ONEBIT32B(10)
#define PPC8CPM_SIMODE_CEB                          _ONEBIT32B(11)
#define PPC8CPM_SIMODE_FEB                          _ONEBIT32B(12)
#define PPC8CPM_SIMODE_GMB                          _ONEBIT32B(13)
#define PPC8CPM_SIMODE_TFSDB                        _BITFIELD32B(14, 3)
#define PPC8CPM_SIMODE_TFSDB_0                      _BITFIELD32B(14, 0)
#define PPC8CPM_SIMODE_TFSDB_1                      _BITFIELD32B(14, 1)
#define PPC8CPM_SIMODE_TFSDB_2                      _BITFIELD32B(14, 2)
#define PPC8CPM_SIMODE_TFSDB_3                      _BITFIELD32B(14, 3)
#define PPC8CPM_SIMODE_SMC1                         _ONEBIT32B(16)
#define PPC8CPM_SIMODE_SMC1CSM                      _BITFIELD32B(19, 7)
#define PPC8CPM_SIMODE_SMC1CS(n)                    _BITFIELD32B(19, n)
#define PPC8CPM_SIMODE_SDMA                         _BITFIELD32B(21, 3)
#define PPC8CPM_SIMODE_SDMA_NORMAL                  _BITFIELD32B(21, 0)
#define PPC8CPM_SIMODE_SDMA_AUTOECHO                _BITFIELD32B(21, 1)
#define PPC8CPM_SIMODE_SDMA_LOOPBACK                _BITFIELD32B(21, 2)
#define PPC8CPM_SIMODE_SDMA_LPCTL                   _BITFIELD32B(21, 3)
#define PPC8CPM_SIMODE_RFSDA                        _BITFIELD32B(23, 3)
#define PPC8CPM_SIMODE_RFSDA_0                      _BITFIELD32B(23, 0)
#define PPC8CPM_SIMODE_RFSDA_1                      _BITFIELD32B(23, 1)
#define PPC8CPM_SIMODE_RFSDA_2                      _BITFIELD32B(23, 2)
#define PPC8CPM_SIMODE_RFSDA_3                      _BITFIELD32B(23, 3)
#define PPC8CPM_SIMODE_DSCA                         _ONEBIT32B(24)
#define PPC8CPM_SIMODE_CRTA                         _ONEBIT32B(25)
#define PPC8CPM_SIMODE_STZA                         _ONEBIT32B(26)
#define PPC8CPM_SIMODE_CEA                          _ONEBIT32B(27)
#define PPC8CPM_SIMODE_FEA                          _ONEBIT32B(28)
#define PPC8CPM_SIMODE_GMA                          _ONEBIT32B(29)
#define PPC8CPM_SIMODE_TFSDA                        _BITFIELD32B(31, 3)
#define PPC8CPM_SIMODE_TFSDA_0                      _BITFIELD32B(31, 0)
#define PPC8CPM_SIMODE_TFSDA_1                      _BITFIELD32B(31, 1)
#define PPC8CPM_SIMODE_TFSDA_2                      _BITFIELD32B(31, 2)
#define PPC8CPM_SIMODE_TFSDA_3                      _BITFIELD32B(31, 3)
/* common for 800 */
#define PPC8CPM_SIMODE_BRG1                         0
#define PPC8CPM_SIMODE_BRG2                         1
#define PPC8CPM_SIMODE_BRG3                         2
#define PPC8CPM_SIMODE_BRG4                         3
/* following 4 defs are for smc1 in 800, and smc2 in 823 */
#define PPC8CPM_SIMODE_CLK1                         4
#define PPC8CPM_SIMODE_CLK2                         5
#define PPC8CPM_SIMODE_CLK3                         6
#define PPC8CPM_SIMODE_CLK4                         7
/* following 4 defs are for smc2 in 821 and 860 */
#define PPC8CPM_SIMODE_CLK5                         4
#define PPC8CPM_SIMODE_CLK6                         5
#define PPC8CPM_SIMODE_CLK7                         6
#define PPC8CPM_SIMODE_CLK8                         7

/* SI Clock Route Register (SICR) */
#define PPC8CPM_SICR_GR4                            _ONEBIT32B(0)
#define PPC8CPM_SICR_SC4                            _ONEBIT32B(1)
#define PPC8CPM_SICR_R4CSM                          _BITFIELD32B(4, 7)
#define PPC8CPM_SICR_T4CSM                          _BITFIELD32B(7, 7)
#define PPC8CPM_SICR_R4CS(n)                        _BITFIELD32B(4, n)
#define PPC8CPM_SICR_T4CS(n)                        _BITFIELD32B(7, n)
#define PPC8CPM_SICR_GR3                            _ONEBIT32B(8)
#define PPC8CPM_SICR_SC3                            _ONEBIT32B(9)
#define PPC8CPM_SICR_R3CSM                          _BITFIELD32B(12, 7)
#define PPC8CPM_SICR_T3CSM                          _BITFIELD32B(15, 7)
#define PPC8CPM_SICR_R3CS(n)                        _BITFIELD32B(12, n)
#define PPC8CPM_SICR_T3CS(n)                        _BITFIELD32B(15, n)
#define PPC8CPM_SICR_GR2                            _ONEBIT32B(16)
#define PPC8CPM_SICR_SC2                            _ONEBIT32B(17)
#define PPC8CPM_SICR_R2CSM                          _BITFIELD32B(20, 7)
#define PPC8CPM_SICR_T2CSM                          _BITFIELD32B(23, 7)
#define PPC8CPM_SICR_R2CS(n)                        _BITFIELD32B(20, n)
#define PPC8CPM_SICR_T2CS(n)                        _BITFIELD32B(23, n)
#define PPC8CPM_SICR_GR1                            _ONEBIT32B(24)
#define PPC8CPM_SICR_SC1                            _ONEBIT32B(25)
#define PPC8CPM_SICR_R1CSM                          _BITFIELD32B(28, 7)
#define PPC8CPM_SICR_T1CSM                          _BITFIELD32B(31, 7)
#define PPC8CPM_SICR_R1CS(n)                        _BITFIELD32B(28, n)
#define PPC8CPM_SICR_T1CS(n)                        _BITFIELD32B(31, n)
/* common for all SCCs */
#define PPC8CPM_SICR_BRG1                           0
#define PPC8CPM_SICR_BRG2                           1
#define PPC8CPM_SICR_BRG3                           2
#define PPC8CPM_SICR_BRG4                           3
/* SCC1 and SCC2 */
#define PPC8CPM_SICR_CLK1                           4
#define PPC8CPM_SICR_CLK2                           5
#define PPC8CPM_SICR_CLK3                           6
#define PPC8CPM_SICR_CLK4                           7
/* SCC3 and SCC4 */
#define PPC8CPM_SICR_CLK5                           4
#define PPC8CPM_SICR_CLK6                           5
#define PPC8CPM_SICR_CLK7                           6
#define PPC8CPM_SICR_CLK8                           7

/*
** Bard Rate Generators (BRG)
*/
#define PPC8CPM_BRG_RST                             _ONEBIT32B(14)
#define PPC8CPM_BRG_EN                              _ONEBIT32B(15)
#define PPC8CPM_BRG_EXTC                            _BITFIELD32B(17, 3)
#define PPC8CPM_BRG_EXTC_BRGCLK                     _BITFIELD32B(17, 0)
#define PPC8CPM_BRG_EXTC_CLK2                       _BITFIELD32B(17, 1)
/* 823 is CLK4; 821 and 860 is CLK6 */
#define PPC8CPM_BRG_EXTC_CLK4                       _BITFIELD32B(17, 2)
#define PPC8CPM_BRG_EXTC_CLK6                       _BITFIELD32B(17, 2)
#define PPC8CPM_BRG_ATB                             _ONEBIT32B(18)
#define PPC8CPM_BRG_CD(cnt)                         _BITFIELD32B(30, (cnt))
#define PPC8CPM_BRG_DIV16                           _ONEBIT32B(31)
#define PPC8CPM_BRG_MAXCNT                          (1 << 12)

/*
** Interrupt controller (CPIC)
*/
/* Configuration CICR */
#define PPC8CPM_CICR_SCDP(port)                     _BITFIELD32B(9, (port))
#define PPC8CPM_CICR_SCDPMSK                        _BITFIELD32B(9, 0x3)
#define PPC8CPM_CICR_SCCP(port)                     _BITFIELD32B(11, (port))
#define PPC8CPM_CICR_SCCPMSK                        _BITFIELD32B(11, 0x3)
#define PPC8CPM_CICR_SCBP(port)                     _BITFIELD32B(13, (port))
#define PPC8CPM_CICR_SCBPMSK                        _BITFIELD32B(13, 0x3)
#define PPC8CPM_CICR_SCAP(port)                     _BITFIELD32B(15, (port))
#define PPC8CPM_CICR_SCAPMSK                        _BITFIELD32B(15, 0x3)
#define PPC8CPM_CICR_IRLM                           _BITFIELD32B(18, 0x7)
#define PPC8CPM_CICR_IRL(num)                       _BITFIELD32B(18, (num))
#define PPC8CPM_CICR_HPM                            _BITFIELD32B(23, 0x1f)
#define PPC8CPM_CICR_HP(id)                         _BITFIELD32B(23, (id))
#define PPC8CPM_CICR_IEN                            _ONEBIT32B(24)
#define PPC8CPM_CICR_SPS                            _ONEBIT32B(31)
/* SCC1 for 821 and 860; USB for 823 */
#define PPC8CPM_CICR_SCC1                           0
#define PPC8CPM_CICR_USB                            0
#define PPC8CPM_CICR_SCC2                           1
#define PPC8CPM_CICR_SCC3                           2
#define PPC8CPM_CICR_SCC4                           3
#define PPC8CPM_CICR_IRL_D                          4

/* CIPR, CIMR, CISR */
#define PPC8CPM_CIPR_MR_SR(num)                     _ONEBIT32B(0x1f - (num))

/* INT Vector CIVR */
#define PPC8CPM_CIVR_IACK                           _ONEBIT16B(15)
#define PPC8CPM_CIVR_VECTOR(num)                    _BITFIELD16B(4, (num))

/* INT Vector table */
#define PPC8CPM_INTNO_PC15                          0x1f
/* SCC1 for 821 and 860; USB for 823 */
#define PPC8CPM_INTNO_SCC1                          0x1e
#define PPC8CPM_INTNO_USB                           0x1e
#define PPC8CPM_INTNO_SCC2                          0x1d
#define PPC8CPM_INTNO_SCC3                          0x1c
#define PPC8CPM_INTNO_SCC4                          0x1b
#define PPC8CPM_INTNO_PC14                          0x1a
#define PPC8CPM_INTNO_TMR1                          0x19
#define PPC8CPM_INTNO_PC13                          0x18
#define PPC8CPM_INTNO_PC12                          0x17
#define PPC8CPM_INTNO_SDMA                          0x16
#define PPC8CPM_INTNO_IDMA1                         0x15
#define PPC8CPM_INTNO_IDMA2                         0x14
#define PPC8CPM_INTNO_TMR2                          0x12
#define PPC8CPM_INTNO_RTT                           0x11
#define PPC8CPM_INTNO_I2C                           0x10
#define PPC8CPM_INTNO_PC11                          0x0f
#define PPC8CPM_INTNO_PC10                          0x0e
#define PPC8CPM_INTNO_TMR3                          0x0c
#define PPC8CPM_INTNO_PC9                           0x0b
#define PPC8CPM_INTNO_PC8                           0x0a
#define PPC8CPM_INTNO_PC7                           0x09
#define PPC8CPM_INTNO_TMR4                          0x07
#define PPC8CPM_INTNO_PC6                           0x06
#define PPC8CPM_INTNO_SPI                           0x05
#define PPC8CPM_INTNO_SMC1                          0x04
#define PPC8CPM_INTNO_SMC2PIP                       0x03
#define PPC8CPM_INTNO_PC5                           0x02
#define PPC8CPM_INTNO_PC4                           0x01

/*
*** Serial Management Controllers (SMC)
*/

/* UART Protocal */
/* Mode register SMC UART */
#define PPC8CPM_SMCMR_UART_CLENM                    _BITFIELD16B(4, 0xf)
#define PPC8CPM_SMCMR_UART_CLEN(data, parity, stop) _BITFIELD16B(4, ((data) + (parity) + (stop)))
#define PPC8CPM_SMCMR_UART_Sl                       _ONEBIT16B(5)
#define PPC8CPM_SMCMR_UART_PEN                      _ONEBIT16B(6)
#define PPC8CPM_SMCMR_UART_PM                       _ONEBIT16B(7)
#define PPC8CPM_SMCMR_UART_SM                       _BITFIELD16B(11, 0x3)
#define PPC8CPM_SMCMR_UART_SMGCI                    _BITFIELD16B(11, 0x0)
#define PPC8CPM_SMCMR_UART_SMUART                   _BITFIELD16B(11, 0x2)
#define PPC8CPM_SMCMR_UART_SMTRANS                  _BITFIELD16B(11, 0x3)
#define PPC8CPM_SMCMR_UART_DM                       _BITFIELD16B(13, 0x3)
#define PPC8CPM_SMCMR_UART_DMNORMAL                 _BITFIELD16B(13, 0x0)
#define PPC8CPM_SMCMR_UART_DMLOOPBACK               _BITFIELD16B(13, 0x1)
#define PPC8CPM_SMCMR_UART_DMECHO                   _BITFIELD16B(13, 0x2)
#define PPC8CPM_SMCMR_UART_TEN                      _ONEBIT16B(14)
#define PPC8CPM_SMCMR_UART_REN                      _ONEBIT16B(15)

/* Event register SMC UART & Mask register SMC UART */
#define PPC8CPM_SMCERMSKR_UART_BRKE                 _ONEBIT8B(1)
#define PPC8CPM_SMCERMSKR_UART_BRK                  _ONEBIT8B(3)
#define PPC8CPM_SMCERMSKR_UART_BSY                  _ONEBIT8B(5)
#define PPC8CPM_SMCERMSKR_UART_TX                   _ONEBIT8B(6)
#define PPC8CPM_SMCERMSKR_UART_RX                   _ONEBIT8B(7)

/*
*** Serial Comunication Controllers (SCC)
*/

/* General SCC MODE Register High */
#define PPC8CPM_GSMR_H_IRP                          _ONEBIT32B(13)
#define PPC8CPM_GSMR_H_GDE                          _ONEBIT32B(15)
#define PPC8CPM_GSMR_H_TCRC                         _BITFIELD16B(17, 0x3)
#define PPC8CPM_GSMR_H_TCRC16CCITT                  _BITFIELD16B(17, 0x0)
#define PPC8CPM_GSMR_H_TCRCCRC16                    _BITFIELD16B(17, 0x1)
#define PPC8CPM_GSMR_H_TCRC32CCITT                  _BITFIELD16B(17, 0x2)
#define PPC8CPM_GSMR_H_REVD                         _ONEBIT32B(18)
#define PPC8CPM_GSMR_H_TRX                          _ONEBIT32B(19)
#define PPC8CPM_GSMR_H_TTX                          _ONEBIT32B(20)
#define PPC8CPM_GSMR_H_CDP                          _ONEBIT32B(21)
#define PPC8CPM_GSMR_H_CTSP                         _ONEBIT32B(22)
#define PPC8CPM_GSMR_H_CDS                          _ONEBIT32B(23)
#define PPC8CPM_GSMR_H_CTSS                         _ONEBIT32B(24)
#define PPC8CPM_GSMR_H_TFL                          _ONEBIT32B(25)
#define PPC8CPM_GSMR_H_RFW                          _ONEBIT32B(26)
#define PPC8CPM_GSMR_H_TXSY                         _ONEBIT32B(27)
#define PPC8CPM_GSMR_H_SYNL                         _BITFIELD16B(29, 0x3)
#define PPC8CPM_GSMR_H_SYNL0                        _BITFIELD16B(29, 0x0)
#define PPC8CPM_GSMR_H_SYNL4                        _BITFIELD16B(29, 0x1)
#define PPC8CPM_GSMR_H_SYNL8                        _BITFIELD16B(29, 0x2)
#define PPC8CPM_GSMR_H_SYNL16                       _BITFIELD16B(29, 0x3)
#define PPC8CPM_GSMR_H_RTSM                         _ONEBIT32B(30)
#define PPC8CPM_GSMR_H_RSYN                         _ONEBIT32B(31)

/* General SCC MODE Register Low */
#define PPC8CPM_GSMR_L_SIR                          _ONEBIT32B(0)
#define PPC8CPM_GSMR_L_EDGE                         _BITFIELD32B(2, 0x3)
#define PPC8CPM_GSMR_L_EDGEBOTH                     _BITFIELD32B(2, 0x0)
#define PPC8CPM_GSMR_L_EDGEPOS                      _BITFIELD32B(2, 0x1)
#define PPC8CPM_GSMR_L_EDGENEG                      _BITFIELD32B(2, 0x2)
#define PPC8CPM_GSMR_L_EDGENO                       _BITFIELD32B(2, 0x3)
#define PPC8CPM_GSMR_L_TCI                          _ONEBIT32B(3)
#define PPC8CPM_GSMR_L_TSNC                         _BITFIELD32B(5, 0x3)
#define PPC8CPM_GSMR_L_TSNCINFINITE                 _BITFIELD32B(5, 0x0)
#define PPC8CPM_GSMR_L_TSNC14                       _BITFIELD32B(5, 0x1)
#define PPC8CPM_GSMR_L_TSNC4                        _BITFIELD32B(5, 0x2)
#define PPC8CPM_GSMR_L_TSNC3                        _BITFIELD32B(5, 0x3)
#define PPC8CPM_GSMR_L_RINV                         _ONEBIT32B(6)
#define PPC8CPM_GSMR_L_TINV                         _ONEBIT32B(7)
#define PPC8CPM_GSMR_L_TPL                          _BITFIELD32B(10, 0x7)
#define PPC8CPM_GSMR_L_TPLNO                        _BITFIELD32B(10, 0x0)
#define PPC8CPM_GSMR_L_TPL8                         _BITFIELD32B(10, 0x1)
#define PPC8CPM_GSMR_L_TPL16                        _BITFIELD32B(10, 0x2)
#define PPC8CPM_GSMR_L_TPL32                        _BITFIELD32B(10, 0x3)
#define PPC8CPM_GSMR_L_TPL48                        _BITFIELD32B(10, 0x4)
#define PPC8CPM_GSMR_L_TPL64                        _BITFIELD32B(10, 0x5)
#define PPC8CPM_GSMR_L_TPL128                       _BITFIELD32B(10, 0x6)
#define PPC8CPM_GSMR_L_TPP                          _BITFIELD32B(12, 0x3)
#define PPC8CPM_GSMR_L_TPP0                         _BITFIELD32B(12, 0x0)
#define PPC8CPM_GSMR_L_TPP10                        _BITFIELD32B(12, 0x1)
#define PPC8CPM_GSMR_L_TPP01                        _BITFIELD32B(12, 0x2)
#define PPC8CPM_GSMR_L_TPP1                         _BITFIELD32B(12, 0x3)
#define PPC8CPM_GSMR_L_TEND                         _ONEBIT32B(13)
#define PPC8CPM_GSMR_L_TDCR                         _BITFIELD32B(15, 0x3)
#define PPC8CPM_GSMR_L_TDCR1                        _BITFIELD32B(15, 0x0)
#define PPC8CPM_GSMR_L_TDCR8                        _BITFIELD32B(15, 0x1)
#define PPC8CPM_GSMR_L_TDCR16                       _BITFIELD32B(15, 0x2)
#define PPC8CPM_GSMR_L_TDCR32                       _BITFIELD32B(15, 0x3)
#define PPC8CPM_GSMR_L_RDCR                         _BITFIELD32B(17, 0x3)
#define PPC8CPM_GSMR_L_RDCR1                        _BITFIELD32B(17, 0x0)
#define PPC8CPM_GSMR_L_RDCR8                        _BITFIELD32B(17, 0x1)
#define PPC8CPM_GSMR_L_RDCR16                       _BITFIELD32B(17, 0x2)
#define PPC8CPM_GSMR_L_RDCR32                       _BITFIELD32B(17, 0x3)
#define PPC8CPM_GSMR_L_RENC                         _BITFIELD32B(20, 0x7)
#define PPC8CPM_GSMR_L_RENCNRZ                      _BITFIELD32B(20, 0x0)
#define PPC8CPM_GSMR_L_RENCNRZIM                    _BITFIELD32B(20, 0x1)
#define PPC8CPM_GSMR_L_RENCFM0                      _BITFIELD32B(20, 0x2)
#define PPC8CPM_GSMR_L_RENCMANCHESTER               _BITFIELD32B(20, 0x4)
#define PPC8CPM_GSMR_L_RENCDMANCHESTER              _BITFIELD32B(20, 0x6)
#define PPC8CPM_GSMR_L_TENC                         _BITFIELD32B(23, 0x7)
#define PPC8CPM_GSMR_L_TENCNRZ                      _BITFIELD32B(23, 0x0)
#define PPC8CPM_GSMR_L_TENCNRZIM                    _BITFIELD32B(23, 0x1)
#define PPC8CPM_GSMR_L_TENCFM0                      _BITFIELD32B(23, 0x2)
#define PPC8CPM_GSMR_L_TENCMANCHESTER               _BITFIELD32B(23, 0x4)
#define PPC8CPM_GSMR_L_TENCDMANCHESTER              _BITFIELD32B(23, 0x6)
#define PPC8CPM_GSMR_L_DIAG                         _BITFIELD32B(25, 0x3)
#define PPC8CPM_GSMR_L_DIAGNORMAL                   _BITFIELD32B(25, 0x0)
#define PPC8CPM_GSMR_L_DIAGLOOPBACK                 _BITFIELD32B(25, 0x1)
#define PPC8CPM_GSMR_L_DIAGECHO                     _BITFIELD32B(25, 0x2)
#define PPC8CPM_GSMR_L_DIAGLOOPBACK_ECHO            _BITFIELD32B(25, 0x3)
#define PPC8CPM_GSMR_L_ENR                          _ONEBIT32B(26)
#define PPC8CPM_GSMR_L_ENT                          _ONEBIT32B(27)
#define PPC8CPM_GSMR_L_MODE                         _BITFIELD32B(31, 0xf)
#define PPC8CPM_GSMR_L_MODEHDLC                     _BITFIELD32B(31, 0x0)
#define PPC8CPM_GSMR_L_MODEAPPLETALK                _BITFIELD32B(31, 0x2)
#define PPC8CPM_GSMR_L_MODESS7                      _BITFIELD32B(31, 0x3)
#define PPC8CPM_GSMR_L_MODEUART                     _BITFIELD32B(31, 0x4)
#define PPC8CPM_GSMR_L_MODEPROFIBUS                 _BITFIELD32B(31, 0x5)
#define PPC8CPM_GSMR_L_MODEAHDLC                    _BITFIELD32B(31, 0x6)
#define PPC8CPM_GSMR_L_MODEV14                      _BITFIELD32B(31, 0x7)
#define PPC8CPM_GSMR_L_MODEBISYNC                   _BITFIELD32B(31, 0x8)
#define PPC8CPM_GSMR_L_MODEDDCMP                    _BITFIELD32B(31, 0x9)
#define PPC8CPM_GSMR_L_MODEETHERNETSCC1             _BITFIELD32B(31, 0xc)

/* SCC Data Synchronization Register */
#define PPC8CPM_DSR_SYN1M                           _BITFIELD16B(15, 0xf)
#define PPC8CPM_DSR_SYN2M                           _BITFIELD16B(7, 0xf)
#define PPC8CPM_DSR_SYN1(n)                         _BITFIELD16B(15, (n))
#define PPC8CPM_DSR_SYN2(n)                         _BITFIELD16B(7, (n))

/* SCC Transmit-on-Demand Register */
#define PPC8CPM_TODR_TOD                            _ONEBIT16B(0)

/* UART Protocal */
/* Mode register SCC UART */
#define PPC8CPM_SCCMR_UART_FLC                      _ONEBIT16B(0)
#define PPC8CPM_SCCMR_UART_SL                       _ONEBIT16B(1)
#define PPC8CPM_SCCMR_UART_CL                       _BITFIELD16B(3, 0x3)
#define PPC8CPM_SCCMR_UART_CL5                      _BITFIELD16B(3, 0x0)
#define PPC8CPM_SCCMR_UART_CL6                      _BITFIELD16B(3, 0x1)
#define PPC8CPM_SCCMR_UART_CL7                      _BITFIELD16B(3, 0x2)
#define PPC8CPM_SCCMR_UART_CL8                      _BITFIELD16B(3, 0x3)
#define PPC8CPM_SCCMR_UART_UM                       _BITFIELD16B(5, 0x3)
#define PPC8CPM_SCCMR_UART_UMNORMAL                 _BITFIELD16B(5, 0x0)
#define PPC8CPM_SCCMR_UART_UMMULTIDROP              _BITFIELD16B(5, 0x1)
#define PPC8CPM_SCCMR_UART_UMMULTIDROPAU            _BITFIELD16B(5, 0x3)
#define PPC8CPM_SCCMR_UART_FRZ                      _ONEBIT16B(6)
#define PPC8CPM_SCCMR_UART_RZS                      _ONEBIT16B(7)
#define PPC8CPM_SCCMR_UART_SYN                      _ONEBIT16B(8)
#define PPC8CPM_SCCMR_UART_DRT                      _ONEBIT16B(9)
#define PPC8CPM_SCCMR_UART_PEN                      _ONEBIT16B(11)
#define PPC8CPM_SCCMR_UART_RPM                      _BITFIELD16B(13, 0x3)
#define PPC8CPM_SCCMR_UART_RPMODD                   _BITFIELD16B(13, 0x0)
#define PPC8CPM_SCCMR_UART_RPMLOW                   _BITFIELD16B(13, 0x1)
#define PPC8CPM_SCCMR_UART_RPMEVEN                  _BITFIELD16B(13, 0x2)
#define PPC8CPM_SCCMR_UART_RPMHIGH                  _BITFIELD16B(13, 0x3)
#define PPC8CPM_SCCMR_UART_TPM                      _BITFIELD16B(15, 0x3)
#define PPC8CPM_SCCMR_UART_TPMODD                   _BITFIELD16B(15, 0x0)
#define PPC8CPM_SCCMR_UART_TPMLOW                   _BITFIELD16B(15, 0x1)
#define PPC8CPM_SCCMR_UART_TPMEVEN                  _BITFIELD16B(15, 0x2)
#define PPC8CPM_SCCMR_UART_TPMHIGH                  _BITFIELD16B(15, 0x3)

/* Event register SCC UART & Mask register SCC UART */
#define PPC8CPM_SCCERMSKR_UART_GLR                  _ONEBIT16B(3)
#define PPC8CPM_SCCERMSKR_UART_GLT                  _ONEBIT16B(4)
#define PPC8CPM_SCCERMSKR_UART_AB                   _ONEBIT16B(6)
#define PPC8CPM_SCCERMSKR_UART_IDL                  _ONEBIT16B(7)
#define PPC8CPM_SCCERMSKR_UART_GRA                  _ONEBIT16B(8)
#define PPC8CPM_SCCERMSKR_UART_BRKE                 _ONEBIT16B(9)
#define PPC8CPM_SCCERMSKR_UART_BRKS                 _ONEBIT16B(10)
#define PPC8CPM_SCCERMSKR_UART_CCR                  _ONEBIT16B(12)
#define PPC8CPM_SCCERMSKR_UART_BSY                  _ONEBIT16B(13)
#define PPC8CPM_SCCERMSKR_UART_TX                   _ONEBIT16B(14)
#define PPC8CPM_SCCERMSKR_UART_RX                   _ONEBIT16B(15)

/* Status Register SCC UART */
#define PPC8CPM_SCCSR_UART_ID                       _ONEBIT8B(7)

/* Fractional Stop Bits */
#define PPC8CPM_DSR_FSBM                            _BITFIELD16B(4, 0xf)
#define PPC8CPM_DSR_FSB(n)                          _BITFIELD16B(4, (n))

/*
*** Universal Serial Bus Controller (USB)
*/

/*
*** port identifier
*/
typedef enum { SMC1, SMC2, SCC1, SCC2, SCC3, SCC4, USB, I2C, SPI } PPC8CPM_CH_NUM;

/*
 * QNX default value for shared resources
 */
/* Offset from DPRAM_BASE
 The format of DBT: ptr to current DB (4), data buffer size (2), reserve (2), table
*/
#define PPC8CPM_DPRAM_BDT_SMC1  PPC8CPM_DPRAM_BD_S
#define PPC8CPM_DPRAM_DBUF_SMC1 PPC8CPM_DPRAM_BDT_SMC1 + 0x100
#define PPC8CPM_DPRAM_BDT_SMC2  PPC8CPM_DPRAM_DBUF_SMC1 + 0x100
#define PPC8CPM_DPRAM_DBUF_SMC2 PPC8CPM_DPRAM_BDT_SMC2 + 0x100
#define PPC8CPM_DPRAM_BDT_SCC1  PPC8CPM_DPRAM_DBUF_SMC2 + 0x100
#define PPC8CPM_DPRAM_DBUF_SCC1 PPC8CPM_DPRAM_BDT_SCC1 + 0x100
#define PPC8CPM_DPRAM_BDT_SCC2  PPC8CPM_DPRAM_BDC2_S
#define PPC8CPM_DPRAM_DBUF_SCC2 PPC8CPM_DPRAM_BDT_SCC2 + 0x100
#define PPC8CPM_DPRAM_BDT_SCC3  PPC8CPM_DPRAM_BDC1_S + 0x400
#define PPC8CPM_DPRAM_DBUF_SCC3 PPC8CPM_DPRAM_BDT_SCC3 + 0x100
#define PPC8CPM_DPRAM_BDT_SCC4  PPC8CPM_DPRAM_DBUF_SCC3 + 0x100
#define PPC8CPM_DPRAM_DBUF_SCC4 PPC8CPM_DPRAM_BDT_SCC4 + 0x100

/* UART default paras */
#define PPC8CPM_UART_DBSIZE_D   16
#define PPC8CPM_UART_DBNUM_D    8

#endif

/* __SRCVERSION("800cpm.h $Rev: 153052 $"); */
