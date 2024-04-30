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
 *  ppc/405cpu.h
 *
 * Registers specific to the 405 chip
 *

 */

#ifndef __PPC_405CPU_H_INCLUDED
#define __PPC_405CPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

#ifndef __PPC_400CPU_H_INCLUDED
#include _NTO_HDR_(ppc / 400cpu.h)
#endif

#ifndef __PPC_IBMUIC_H_INCLUDED
#include _NTO_HDR_(ppc / ibmuic.h)
#endif

/*
 * Bus Error Syndrome Register 0 Bits
 */
#define PPC405_BESR0_M0ET_MASK      _BITFIELD32B(2, 7)
#define PPC405_BESR0_M0ET_NOERR     _BITFIELD32B(2, 0)
#define PPC405_BESR0_M0ET_RSVD1     _BITFIELD32B(2, 1)
#define PPC405_BESR0_M0ET_ECCUE1    _BITFIELD32B(2, 2)
#define PPC405_BESR0_M0ET_ECCUE2    _BITFIELD32B(2, 3)
#define PPC405_BESR0_M0ET_RSVD2     _BITFIELD32B(2, 4)
#define PPC405_BESR0_M0ET_RSVD3     _BITFIELD32B(2, 5)
#define PPC405_BESR0_M0ET_RSVD4     _BITFIELD32B(2, 6)
#define PPC405_BESR0_M0ET_RSVD5     _BITFIELD32B(2, 7)
#define PPC405_BESR0_M0RWS          _ONEBIT32B(3)
#define PPC405_BESR0_M0FL           _ONEBIT32B(4)
#define PPC405_BESR0_M0AL           _ONEBIT32B(5)
#define PPC405_BESR0_M1ET_MASK      _BITFIELD32B(8, 7)
#define PPC405_BESR0_M1ET_NOERR     _BITFIELD32B(8, 0)
#define PPC405_BESR0_M1ET_RSVD1     _BITFIELD32B(8, 1)
#define PPC405_BESR0_M1ET_ECCUE1    _BITFIELD32B(8, 2)
#define PPC405_BESR0_M1ET_ECCUE2    _BITFIELD32B(8, 3)
#define PPC405_BESR0_M1ET_RSVD2     _BITFIELD32B(8, 4)
#define PPC405_BESR0_M1ET_RSVD3     _BITFIELD32B(8, 5)
#define PPC405_BESR0_M1ET_RSVD4     _BITFIELD32B(8, 6)
#define PPC405_BESR0_M1ET_RSVD5     _BITFIELD32B(8, 7)
#define PPC405_BESR0_M1RWS          _ONEBIT32B(9)
#define PPC405_BESR0_M1FL           _ONEBIT32B(10)
#define PPC405_BESR0_M1AL           _ONEBIT32B(11)
#define PPC405_BESR0_M2ET_MASK      _BITFIELD32B(14, 7)
#define PPC405_BESR0_M2ET_NOERR     _BITFIELD32B(14, 0)
#define PPC405_BESR0_M2ET_RSVD1     _BITFIELD32B(14, 1)
#define PPC405_BESR0_M2ET_ECCUE1    _BITFIELD32B(14, 2)
#define PPC405_BESR0_M2ET_ECCUE2    _BITFIELD32B(14, 3)
#define PPC405_BESR0_M2ET_RSVD2     _BITFIELD32B(14, 4)
#define PPC405_BESR0_M2ET_RSVD3     _BITFIELD32B(14, 5)
#define PPC405_BESR0_M2ET_RSVD4     _BITFIELD32B(14, 6)
#define PPC405_BESR0_M2ET_RSVD5     _BITFIELD32B(14, 7)
#define PPC405_BESR0_M2RWS          _ONEBIT32B(15)
#define PPC405_BESR0_M2FL           _ONEBIT32B(16)
#define PPC405_BESR0_M2AL           _ONEBIT32B(17)
#define PPC405_BESR0_M3ET_MASK      _BITFIELD32B(20, 7)
#define PPC405_BESR0_M3ET_NOERR     _BITFIELD32B(20, 0)
#define PPC405_BESR0_M3ET_RSVD1     _BITFIELD32B(20, 1)
#define PPC405_BESR0_M3ET_ECCUE1    _BITFIELD32B(20, 2)
#define PPC405_BESR0_M3ET_ECCUE2    _BITFIELD32B(20, 3)
#define PPC405_BESR0_M3ET_RSVD2     _BITFIELD32B(20, 4)
#define PPC405_BESR0_M3ET_RSVD3     _BITFIELD32B(20, 5)
#define PPC405_BESR0_M3ET_RSVD4     _BITFIELD32B(20, 6)
#define PPC405_BESR0_M3ET_RSVD5     _BITFIELD32B(20, 7)
#define PPC405_BESR0_M3RWS          _ONEBIT32B(21)
#define PPC405_BESR0_M3FL           _ONEBIT32B(22)
#define PPC405_BESR0_M3AL           _ONEBIT32B(23)

/*
 * Bus Error Syndrome Register 1 Bits
 */
#define PPC405_BESR0_M4ET_MASK      _BITFIELD32B(2, 7)
#define PPC405_BESR0_M4ET_NOERR     _BITFIELD32B(2, 0)
#define PPC405_BESR0_M4ET_RSVD1     _BITFIELD32B(2, 1)
#define PPC405_BESR0_M4ET_ECCUE1    _BITFIELD32B(2, 2)
#define PPC405_BESR0_M4ET_ECCUE2    _BITFIELD32B(2, 3)
#define PPC405_BESR0_M4ET_RSVD2     _BITFIELD32B(2, 4)
#define PPC405_BESR0_M4ET_RSVD3     _BITFIELD32B(2, 5)
#define PPC405_BESR0_M4ET_RSVD4     _BITFIELD32B(2, 6)
#define PPC405_BESR0_M4ET_RSVD5     _BITFIELD32B(2, 7)
#define PPC405_BESR0_M4RWS          _ONEBIT32B(3)
#define PPC405_BESR0_M4FL           _ONEBIT32B(4)
#define PPC405_BESR0_M4AL           _ONEBIT32B(5)
#define PPC405_BESR0_M5ET_MASK      _BITFIELD32B(8, 7)
#define PPC405_BESR0_M5ET_NOERR     _BITFIELD32B(8, 0)
#define PPC405_BESR0_M5ET_RSVD1     _BITFIELD32B(8, 1)
#define PPC405_BESR0_M5ET_ECCUE1    _BITFIELD32B(8, 2)
#define PPC405_BESR0_M5ET_ECCUE2    _BITFIELD32B(8, 3)
#define PPC405_BESR0_M5ET_RSVD2     _BITFIELD32B(8, 4)
#define PPC405_BESR0_M5ET_RSVD3     _BITFIELD32B(8, 5)
#define PPC405_BESR0_M5ET_RSVD4     _BITFIELD32B(8, 6)
#define PPC405_BESR0_M5ET_RSVD5     _BITFIELD32B(8, 7)
#define PPC405_BESR0_M5RWS          _ONEBIT32B(9)
#define PPC405_BESR0_M5FL           _ONEBIT32B(10)
#define PPC405_BESR0_M5AL           _ONEBIT32B(11)
#define PPC405_BESR0_M6ET_MASK      _BITFIELD32B(14, 7)
#define PPC405_BESR0_M6ET_NOERR     _BITFIELD32B(14, 0)
#define PPC405_BESR0_M6ET_RSVD1     _BITFIELD32B(14, 1)
#define PPC405_BESR0_M6ET_ECCUE1    _BITFIELD32B(14, 2)
#define PPC405_BESR0_M6ET_ECCUE2    _BITFIELD32B(14, 3)
#define PPC405_BESR0_M6ET_RSVD2     _BITFIELD32B(14, 4)
#define PPC405_BESR0_M6ET_RSVD3     _BITFIELD32B(14, 5)
#define PPC405_BESR0_M6ET_RSVD4     _BITFIELD32B(14, 6)
#define PPC405_BESR0_M6ET_RSVD5     _BITFIELD32B(14, 7)
#define PPC405_BESR0_M6RWS          _ONEBIT32B(15)
#define PPC405_BESR0_M6FL           _ONEBIT32B(16)
#define PPC405_BESR0_M6AL           _ONEBIT32B(17)
#define PPC405_BESR0_M7ET_MASK      _BITFIELD32B(20, 7)
#define PPC405_BESR0_M7ET_NOERR     _BITFIELD32B(20, 0)
#define PPC405_BESR0_M7ET_RSVD1     _BITFIELD32B(20, 1)
#define PPC405_BESR0_M7ET_ECCUE1    _BITFIELD32B(20, 2)
#define PPC405_BESR0_M7ET_ECCUE2    _BITFIELD32B(20, 3)
#define PPC405_BESR0_M7ET_RSVD2     _BITFIELD32B(20, 4)
#define PPC405_BESR0_M7ET_RSVD3     _BITFIELD32B(20, 5)
#define PPC405_BESR0_M7ET_RSVD4     _BITFIELD32B(20, 6)
#define PPC405_BESR0_M7ET_RSVD5     _BITFIELD32B(20, 7)
#define PPC405_BESR0_M7RWS          _ONEBIT32B(21)
#define PPC405_BESR0_M7FL           _ONEBIT32B(22)
#define PPC405_BESR0_M7AL           _ONEBIT32B(23)

/*
 * Core Configuration Register 0
 */
#define PPC405_CCR0_LWL             _ONEBIT32B(6)
#define PPC405_CCR0_LWOA            _ONEBIT32B(7)
#define PPC405_CCR0_SWOA            _ONEBIT32B(8)
#define PPC405_CCR0_DPP1            _ONEBIT32B(9)
#define PPC405_CCR0_IPP_MASK        _BITFIELD32B(11, 3)
#define PPC405_CCR0_IPP_LOWEST      _BITFIELD32B(11, 0)
#define PPC405_CCR0_IPP_NEXTLOWEST  _BITFIELD32B(11, 1)
#define PPC405_CCR0_IPP_NEXTHIGHEST _BITFIELD32B(11, 2)
#define PPC405_CCR0_IPP_HIGHEST     _BITFIELD32B(11, 3)
#define PPC405_CCR0_DU0             _ONEBIT32B(14)
#define PPC405_CCR0_LDBE            _ONEBIT32B(15)
#define PPC405_CCR0_PFC             _ONEBIT32B(20)
#define PPC405_CCR0_PFNC            _ONEBIT32B(21)
#define PPC405_CCR0_NCRS            _ONEBIT32B(22)
#define PPC405_CCR0_FWOA            _ONEBIT32B(23)
#define PPC405_CCR0_CIS             _ONEBIT32B(27)
#define PPC405_CCR0_CWS             _ONEBIT32B(31)

/*
 * Chip Control Register 0
 */
#define PPC405_CPC0_CR0_PRE         _ONEBIT32B(0)
#define PPC405_CPC0_CR0_GPIO_10_EN  _ONEBIT32B(5)
#define PPC405_CPC0_CR0_GPIO_11_EN  _ONEBIT32B(6)
#define PPC405_CPC0_CR0_GPIO_12_EN  _ONEBIT32B(7)
#define PPC405_CPC0_CR0_GPIO_13_EN  _ONEBIT32B(8)
#define PPC405_CPC0_CR0_GPIO_14_EN  _ONEBIT32B(9)
#define PPC405_CPC0_CR0_GPIO_15_EN  _ONEBIT32B(10)
#define PPC405_CPC0_CR0_GPIO_16_EN  _ONEBIT32B(11)
#define PPC405_CPC0_CR0_GPIO_17_EN  _ONEBIT32B(12)
#define PPC405_CPC0_CR0_GPIO_18_EN  _ONEBIT32B(13)
#define PPC405_CPC0_CR0_GPIO_19_EN  _ONEBIT32B(14)
#define PPC405_CPC0_CR0_GPIO_20_EN  _ONEBIT32B(15)
#define PPC405_CPC0_CR0_GPIO_21_EN  _ONEBIT32B(16)
#define PPC405_CPC0_CR0_GPIO_22_EN  _ONEBIT32B(17)
#define PPC405_CPC0_CR0_GPIO_23_EN  _ONEBIT32B(18)
#define PPC405_CPC0_CR0_DCS         _ONEBIT32B(19)
#define PPC405_CPC0_CR0_RCS         _ONEBIT32B(20)
#define PPC405_CPC0_CR0_DTE         _ONEBIT32B(21)
#define PPC405_CPC0_CR0_DRE         _ONEBIT32B(22)
#define PPC405_CPC0_CR0_DAEC        _ONEBIT32B(23)
#define PPC405_CPC0_CR0_U0EC        _ONEBIT32B(24)
#define PPC405_CPC0_CR0_U1EC        _ONEBIT32B(25)
#define PPC405_CPC0_CR0_UDIV_MASK   _BITFIELD32B(30, 0x1f)
#define PPC405_CPC0_CR0_UDIV_SHIFT  (31 - 30)

/*
 * Chip Pin-Strapping Register
 */
#define PPC405_CPC0_PSR_PFWD_MASK   _BITFIELD32B(1, 3)
#define PPC405_CPC0_PSR_PFWD_BYPASS _BITFIELD32B(1, 0)
#define PPC405_CPC0_PSR_PFWD_DIV3   _BITFIELD32B(1, 1)
#define PPC405_CPC0_PSR_PFWD_DIV4   _BITFIELD32B(1, 2)
#define PPC405_CPC0_PSR_PFWD_DIV6   _BITFIELD32B(1, 3)
#define PPC405_CPC0_PSR_PFBD_MASK   _BITFIELD32B(3, 3)
#define PPC405_CPC0_PSR_PFBD_DIV1   _BITFIELD32B(3, 0)
#define PPC405_CPC0_PSR_PFBD_DIV2   _BITFIELD32B(3, 1)
#define PPC405_CPC0_PSR_PFBD_DIV3   _BITFIELD32B(3, 2)
#define PPC405_CPC0_PSR_PFBD_DIV4   _BITFIELD32B(3, 3)
#define PPC405_CPC0_PSR_PT_MASK     _BITFIELD32B(6, 7)
#define PPC405_CPC0_PSR_PT_CHOICE1  _BITFIELD32B(6, 0)
#define PPC405_CPC0_PSR_PT_CHOICE2  _BITFIELD32B(6, 1)
#define PPC405_CPC0_PSR_PT_CHOICE3  _BITFIELD32B(6, 2)
#define PPC405_CPC0_PSR_PT_CHOICE4  _BITFIELD32B(6, 3)
#define PPC405_CPC0_PSR_PT_CHOICE5  _BITFIELD32B(6, 4)
#define PPC405_CPC0_PSR_PT_CHOICE6  _BITFIELD32B(6, 5)
#define PPC405_CPC0_PSR_PT_CHOICE7  _BITFIELD32B(6, 6)
#define PPC405_CPC0_PSR_PT_CHOICE8  _BITFIELD32B(6, 7)
#define PPC405_CPC0_PSR_PDC_MASK    _BITFIELD32B(8, 3)
#define PPC405_CPC0_PSR_PDC_DIV1    _BITFIELD32B(8, 0)
#define PPC405_CPC0_PSR_PDC_DIV2    _BITFIELD32B(8, 1)
#define PPC405_CPC0_PSR_PDC_DIV3    _BITFIELD32B(8, 2)
#define PPC405_CPC0_PSR_PDC_DIV4    _BITFIELD32B(8, 3)
#define PPC405_CPC0_PSR_ODP_MASK    _BITFIELD32B(10, 3)
#define PPC405_CPC0_PSR_ODP_DIV1    _BITFIELD32B(10, 0)
#define PPC405_CPC0_PSR_ODP_DIV2    _BITFIELD32B(10, 1)
#define PPC405_CPC0_PSR_ODP_DIV3    _BITFIELD32B(10, 2)
#define PPC405_CPC0_PSR_ODP_DIV4    _BITFIELD32B(10, 3)
#define PPC405_CPC0_PSR_PDP_MASK    _BITFIELD32B(12, 3)
#define PPC405_CPC0_PSR_PDP_DIV1    _BITFIELD32B(12, 0)
#define PPC405_CPC0_PSR_PDP_DIV2    _BITFIELD32B(12, 1)
#define PPC405_CPC0_PSR_PDP_DIV3    _BITFIELD32B(12, 2)
#define PPC405_CPC0_PSR_PDP_DIV4    _BITFIELD32B(12, 3)
#define PPC405_CPC0_PSR_EBDP_MASK   _BITFIELD32B(12, 3)
#define PPC405_CPC0_PSR_EBDP_DIV2   _BITFIELD32B(14, 0)
#define PPC405_CPC0_PSR_EBDP_DIV3   _BITFIELD32B(14, 1)
#define PPC405_CPC0_PSR_EBDP_DIV4   _BITFIELD32B(14, 2)
#define PPC405_CPC0_PSR_EBDP_DIV5   _BITFIELD32B(14, 3)
#define PPC405_CPC0_PSR_RW_MASK     _BITFIELD32B(16, 3)
#define PPC405_CPC0_PSR_RW_8        _BITFIELD32B(16, 0)
#define PPC405_CPC0_PSR_RW_16       _BITFIELD32B(16, 1)
#define PPC405_CPC0_PSR_RW_32       _BITFIELD32B(16, 2)
#define PPC405_CPC0_PSR_RW_RSVD     _BITFIELD32B(16, 3)
#define PPC405_CPC0_PSR_RL          _ONEBIT32B(17)
#define PPC405_CPC0_PSR_PAME        _ONEBIT32B(19)
#define PPC405_CPC0_PSR_PAE         _ONEBIT32B(21)

/*
 * CPM Enable Register
NYI:
 */

/*
 * CPM Force Register
NYI:
 */

/*
 * CPM Status Register
NYI:
 */

/*
 * Debug Control Register 0
 */
#define PPC405_DBCR0_EDM            _ONEBIT32B(0)
#define PPC405_DBCR0_IDM            _ONEBIT32B(1)
#define PPC405_DBCR0_RST_MASK       _BITFIELD32B(3, 3)
#define PPC405_DBCR0_RST_NORESET    _BITFIELD32B(3, 0)
#define PPC405_DBCR0_RST_CORE       _BITFIELD32B(3, 1)
#define PPC405_DBCR0_RST_CHIP       _BITFIELD32B(3, 2)
#define PPC405_DBCR0_RST_SYSTEM     _BITFIELD32B(3, 3)
#define PPC405_DBCR0_IC             _ONEBIT32B(4)
#define PPC405_DBCR0_BT             _ONEBIT32B(5)
#define PPC405_DBCR0_EDE            _ONEBIT32B(6)
#define PPC405_DBCR0_TDE            _ONEBIT32B(7)
#define PPC405_DBCR0_IA1            _ONEBIT32B(8)
#define PPC405_DBCR0_IA2            _ONEBIT32B(9)
#define PPC405_DBCR0_IA12           _ONEBIT32B(10)
#define PPC405_DBCR0_IA12X          _ONEBIT32B(11)
#define PPC405_DBCR0_IA3            _ONEBIT32B(12)
#define PPC405_DBCR0_IA4            _ONEBIT32B(13)
#define PPC405_DBCR0_IA34           _ONEBIT32B(14)
#define PPC405_DBCR0_IA34X          _ONEBIT32B(15)
#define PPC405_DBCR0_IA12T          _ONEBIT32B(16)
#define PPC405_DBCR0_IA34T          _ONEBIT32B(17)
#define PPC405_DBCR0_FT             _ONEBIT32B(31)

/*
 * Debug Control Register 1
 */
#define PPC405_DBCR1_D1R            _ONEBIT32B(0)
#define PPC405_DBCR1_D2R            _ONEBIT32B(1)
#define PPC405_DBCR1_D1W            _ONEBIT32B(2)
#define PPC405_DBCR1_D2W            _ONEBIT32B(3)
#define PPC405_DBCR1_D1S_MASK       _BITFIELD32B(5, 3)
#define PPC405_DBCR1_D1S_ALL        _BITFIELD32B(5, 0)
#define PPC405_DBCR1_D1S_IGN1LSB    _BITFIELD32B(5, 1)
#define PPC405_DBCR1_D1S_IGN2LSB    _BITFIELD32B(5, 2)
#define PPC405_DBCR1_D1S_IGN5LSB    _BITFIELD32B(5, 3)
#define PPC405_DBCR1_D2S_MASK       _BITFIELD32B(7, 3)
#define PPC405_DBCR1_D2S_ALL        _BITFIELD32B(7, 0)
#define PPC405_DBCR1_D2S_IGN1LSB    _BITFIELD32B(7, 1)
#define PPC405_DBCR1_D2S_IGN2LSB    _BITFIELD32B(7, 2)
#define PPC405_DBCR1_D2S_IGN5LSB    _BITFIELD32B(7, 3)
#define PPC405_DBCR1_DA12           _ONEBIT32B(8)
#define PPC405_DBCR1_DA12X          _ONEBIT32B(9)
#define PPC405_DBCR1_DV1M_MASK      _BITFIELD32B(13, 3)
#define PPC405_DBCR1_DV1M_UNDEF     _BITFIELD32B(13, 0)
#define PPC405_DBCR1_DV1M_AND       _BITFIELD32B(13, 1)
#define PPC405_DBCR1_DV1M_OR        _BITFIELD32B(13, 2)
#define PPC405_DBCR1_DV1M_ANDOR     _BITFIELD32B(13, 3)
#define PPC405_DBCR1_DV2M_MASK      _BITFIELD32B(15, 3)
#define PPC405_DBCR1_DV2M_UNDEF     _BITFIELD32B(15, 0)
#define PPC405_DBCR1_DV2M_AND       _BITFIELD32B(15, 1)
#define PPC405_DBCR1_DV2M_OR        _BITFIELD32B(15, 2)
#define PPC405_DBCR1_DV2M_ANDOR     _BITFIELD32B(15, 3)
#define PPC405_DBCR1_DV1BE_MASK     _BITFIELD32B(19, 0xf)
#define PPC405_DBCR1_DV1BE_SHIFT    (31 - 19)
#define PPC405_DBCR1_DV2BE_MASK     _BITFIELD32B(23, 0xf)
#define PPC405_DBCR1_DV2BE_SHIFT    (31 - 23)

/*
 * DMA Channel Control Registers 0-3
NYI:
 */

/*
 * DMA Polarity Configuration Register
NYI:
 */

/*
 * DMA Scatter/Gather Command Register
NYI:
 */

/*
 * DMA Sleep Mode Register
NYI:
 */

/*
 * DMA Status Register
NYI:
 */

/*
 * ECC Configuration Register
NYI:
 */

/*
 * ECC Error Status Register
NYI:
 */

/*
 * (Ethernet) Interrupt Status Enable Register
NYI:
 */

/*
 * (Ethernet) Interrupt Status Register
NYI:
 */

/*
 * (Ethernet) Mode Register 0
NYI:
 */

/*
 * (Ethernet) Mode Register 1
NYI:
 */

/*
 * (Ethernet) Receive Mode Register
NYI:
 */

/*
 * (Ethernet) Receive Low/High Water Mark Register
NYI:
 */

/*
 * (Ethernet) Transmit Mode Register 0
NYI:
 */

/*
 * (Ethernet) Transmit Mode Register 1
NYI:
 */

/*
 * (Ethernet) Transmit Request Threshold Register
NYI:
 */

/*
 * External Peripheral Control Register
NYI:
 */

/*
 * PLB-to-OPB Error Status Register 0
NYI:
 */

/*
 * PLB-to-OPB Error Status Register 1
NYI:
 */

/*
 * Instruction Cache Debug Data Register
NYI:
 */

/*
 * IIC0 Control Register
NYI:
 */

/*
 * IIC0 Direct Control Register
NYI:
 */

/*
 * IIC0 Extended Status Register
NYI:
 */

/*
 * IIC0 Interrupt Mask Register
NYI:
 */

/*
 * IIC0 Mode Control Register
NYI:
 */

/*
 * IIC0 Status Register
NYI:
 */

/*
 * IIC0 Transfer Count Register
NYI:
 */

/*
 * IIC0 Extended Control and Slave Status Register
NYI:
 */

/*
 * (Decompression) Address Decode Definition Register 0-1
NYI:
 */

/*
 * (Decompression) Core Configuration Register
NYI:
 */

/*
 * (Decompression) Bus Error Status Register 0
NYI:
 */

/*
 * MAL Configuration Register
NYI:
 */

/*
 * MAL Error Status Register
NYI:
 */

/*
 * MAL Interrupt Enable Register
NYI:
 */

/*
 * MAL RX Channel Active Reset Register
NYI:
 */

/*
 * MAL RX Channel Active Set Register
NYI:
 */

/*
 * MAL Receive Descriptor Interrupt Register
NYI:
 */

/*
 * MAL Receive End-of-Buffer Interrupt Status Register
NYI:
 */

/*
 * MAL TX Channel Active Reset Register
NYI:
 */

/*
 * MAL TX Channel Active Set Register
NYI:
 */

/*
 * MAL Transmit Descriptor Interrupt Register
NYI:
 */

/*
 * MAL Transmit End-of-Buffer Interrupt Status Register
NYI:
 */

/*
 * Memory Bank 0-3 Configuration Register
NYI:
 */

/*
 * Memory Controller Options 1 Register
NYI:
 */

/*
 * OPB Arbiter Control Register
NYI:
 */

/*
 * OPB Arbiter Priority Register
NYI:
 */

/*
 * OCM Data-Side Control Register
NYI:
 */

/*
 * OCM Instruction-Side Control Register
NYI:
 */

/*
 * PLB Arbiter Control Register
NYI:
 */

/*
 * Peripheral Bank 0-7 Access Parameters Register
NYI:
 */

/*
 * Peripheral Bank 0-7 Configuration Register
NYI:
 */

/*
 * Peripheral Bus Error Status Register 0
NYI:
 */

/*
 * Peripheral Bus Error Status Register 1
NYI:
 */

/*
 * PCI Bridge Options Register 1
NYI:
 */

/*
 * PCI Bridge Options Register 2
NYI:
 */

/*
 * PLB Error Status Register
NYI:
 */

/*
 * PLB Slave Error Syndrome Register 0
NYI:
 */

/*
 * PLB Slave Error Syndrome Register 1
NYI:
 */

/*
 * PLL Mode Register
NYI:
 */

/*
 * PMM 0 Mask/Attribute Register
NYI:
 */

/*
 * PMM 1 Mask/Attribute Register
NYI:
 */

/*
 * PMM 2 Mask/Attribute Register
NYI:
 */

/*
 * Power Management Idle Timer
NYI:
 */

/*
 * Refresh Timer Register
NYI:
 */

/*
 * SDRAM Timing Register 1
NYI:
 */

/*
 * Storage Little-Endian Register
 */
#define PPC405_SLER_S0              _ONEBIT32B(0)
#define PPC405_SLER_S1              _ONEBIT32B(1)
#define PPC405_SLER_S2              _ONEBIT32B(2)
#define PPC405_SLER_S3              _ONEBIT32B(3)
#define PPC405_SLER_S4              _ONEBIT32B(4)
#define PPC405_SLER_S5              _ONEBIT32B(5)
#define PPC405_SLER_S6              _ONEBIT32B(6)
#define PPC405_SLER_S7              _ONEBIT32B(7)
#define PPC405_SLER_S8              _ONEBIT32B(8)
#define PPC405_SLER_S9              _ONEBIT32B(9)
#define PPC405_SLER_S10             _ONEBIT32B(10)
#define PPC405_SLER_S11             _ONEBIT32B(11)
#define PPC405_SLER_S12             _ONEBIT32B(12)
#define PPC405_SLER_S13             _ONEBIT32B(13)
#define PPC405_SLER_S14             _ONEBIT32B(14)
#define PPC405_SLER_S15             _ONEBIT32B(15)
#define PPC405_SLER_S16             _ONEBIT32B(16)
#define PPC405_SLER_S17             _ONEBIT32B(17)
#define PPC405_SLER_S18             _ONEBIT32B(18)
#define PPC405_SLER_S19             _ONEBIT32B(19)
#define PPC405_SLER_S20             _ONEBIT32B(20)
#define PPC405_SLER_S21             _ONEBIT32B(21)
#define PPC405_SLER_S22             _ONEBIT32B(22)
#define PPC405_SLER_S23             _ONEBIT32B(23)
#define PPC405_SLER_S24             _ONEBIT32B(24)
#define PPC405_SLER_S25             _ONEBIT32B(25)
#define PPC405_SLER_S26             _ONEBIT32B(26)
#define PPC405_SLER_S27             _ONEBIT32B(27)
#define PPC405_SLER_S28             _ONEBIT32B(28)
#define PPC405_SLER_S29             _ONEBIT32B(29)
#define PPC405_SLER_S30             _ONEBIT32B(30)
#define PPC405_SLER_S31             _ONEBIT32B(31)

/*
 * Storage User-Defined 0 Register
 */
#define PPC405_SU0R_S0              _ONEBIT32B(0)
#define PPC405_SU0R_S1              _ONEBIT32B(1)
#define PPC405_SU0R_S2              _ONEBIT32B(2)
#define PPC405_SU0R_S3              _ONEBIT32B(3)
#define PPC405_SU0R_S4              _ONEBIT32B(4)
#define PPC405_SU0R_S5              _ONEBIT32B(5)
#define PPC405_SU0R_S6              _ONEBIT32B(6)
#define PPC405_SU0R_S7              _ONEBIT32B(7)
#define PPC405_SU0R_S8              _ONEBIT32B(8)
#define PPC405_SU0R_S9              _ONEBIT32B(9)
#define PPC405_SU0R_S10             _ONEBIT32B(10)
#define PPC405_SU0R_S11             _ONEBIT32B(11)
#define PPC405_SU0R_S12             _ONEBIT32B(12)
#define PPC405_SU0R_S13             _ONEBIT32B(13)
#define PPC405_SU0R_S14             _ONEBIT32B(14)
#define PPC405_SU0R_S15             _ONEBIT32B(15)
#define PPC405_SU0R_S16             _ONEBIT32B(16)
#define PPC405_SU0R_S17             _ONEBIT32B(17)
#define PPC405_SU0R_S18             _ONEBIT32B(18)
#define PPC405_SU0R_S19             _ONEBIT32B(19)
#define PPC405_SU0R_S20             _ONEBIT32B(20)
#define PPC405_SU0R_S21             _ONEBIT32B(21)
#define PPC405_SU0R_S22             _ONEBIT32B(22)
#define PPC405_SU0R_S23             _ONEBIT32B(23)
#define PPC405_SU0R_S24             _ONEBIT32B(24)
#define PPC405_SU0R_S25             _ONEBIT32B(25)
#define PPC405_SU0R_S26             _ONEBIT32B(26)
#define PPC405_SU0R_S27             _ONEBIT32B(27)
#define PPC405_SU0R_S28             _ONEBIT32B(28)
#define PPC405_SU0R_S29             _ONEBIT32B(29)
#define PPC405_SU0R_S30             _ONEBIT32B(30)
#define PPC405_SU0R_S31             _ONEBIT32B(31)

/*
 * UIC Critical Register
 */
#define PPC405_UIC0_CR_U0IC         _ONEBIT32B(0)
#define PPC405_UIC0_CR_U1IC         _ONEBIT32B(1)
#define PPC405_UIC0_CR_IICIC        _ONEBIT32B(2)
#define PPC405_UIC0_CR_EMIC         _ONEBIT32B(3)
#define PPC405_UIC0_CR_PCIIC        _ONEBIT32B(4)
#define PPC405_UIC0_CR_D0IC         _ONEBIT32B(5)
#define PPC405_UIC0_CR_D1IC         _ONEBIT32B(6)
#define PPC405_UIC0_CR_D2IC         _ONEBIT32B(7)
#define PPC405_UIC0_CR_D3IC         _ONEBIT32B(8)
#define PPC405_UIC0_CR_EWIC         _ONEBIT32B(9)
#define PPC405_UIC0_CR_MSIC         _ONEBIT32B(10)
#define PPC405_UIC0_CR_MTEIC        _ONEBIT32B(11)
#define PPC405_UIC0_CR_MREIC        _ONEBIT32B(12)
#define PPC405_UIC0_CR_MTDIC        _ONEBIT32B(13)
#define PPC405_UIC0_CR_MRDIC        _ONEBIT32B(14)
#define PPC405_UIC0_CR_EIC          _ONEBIT32B(15)
#define PPC405_UIC0_CR_EPSIC        _ONEBIT32B(16)
#define PPC405_UIC0_CR_ECIC         _ONEBIT32B(17)
#define PPC405_UIC0_CR_PPMIC        _ONEBIT32B(18)
#define PPC405_UIC0_CR_EIR0C        _ONEBIT32B(25)
#define PPC405_UIC0_CR_EIR1C        _ONEBIT32B(26)
#define PPC405_UIC0_CR_EIR2C        _ONEBIT32B(27)
#define PPC405_UIC0_CR_EIR3C        _ONEBIT32B(28)
#define PPC405_UIC0_CR_EIR4C        _ONEBIT32B(29)
#define PPC405_UIC0_CR_EIR5C        _ONEBIT32B(30)
#define PPC405_UIC0_CR_EIR6C        _ONEBIT32B(31)

/*
 * UIC Enable Register
 */
#define PPC405_UIC0_ER_U0IE         _ONEBIT32B(0)
#define PPC405_UIC0_ER_U1IE         _ONEBIT32B(1)
#define PPC405_UIC0_ER_IICIE        _ONEBIT32B(2)
#define PPC405_UIC0_ER_EMIE         _ONEBIT32B(3)
#define PPC405_UIC0_ER_PCIIE        _ONEBIT32B(4)
#define PPC405_UIC0_ER_D0IE         _ONEBIT32B(5)
#define PPC405_UIC0_ER_D1IE         _ONEBIT32B(6)
#define PPC405_UIC0_ER_D2IE         _ONEBIT32B(7)
#define PPC405_UIC0_ER_D3IE         _ONEBIT32B(8)
#define PPC405_UIC0_ER_EWIE         _ONEBIT32B(9)
#define PPC405_UIC0_ER_MSIE         _ONEBIT32B(10)
#define PPC405_UIC0_ER_MTEIE        _ONEBIT32B(11)
#define PPC405_UIC0_ER_MREIE        _ONEBIT32B(12)
#define PPC405_UIC0_ER_MTDIE        _ONEBIT32B(13)
#define PPC405_UIC0_ER_MRDIE        _ONEBIT32B(14)
#define PPC405_UIC0_ER_EIE          _ONEBIT32B(15)
#define PPC405_UIC0_ER_EPSIE        _ONEBIT32B(16)
#define PPC405_UIC0_ER_ECIE         _ONEBIT32B(17)
#define PPC405_UIC0_ER_PPMIE        _ONEBIT32B(18)
#define PPC405_UIC0_ER_EIR0E        _ONEBIT32B(25)
#define PPC405_UIC0_ER_EIR1E        _ONEBIT32B(26)
#define PPC405_UIC0_ER_EIR2E        _ONEBIT32B(27)
#define PPC405_UIC0_ER_EIR3E        _ONEBIT32B(28)
#define PPC405_UIC0_ER_EIR4E        _ONEBIT32B(29)
#define PPC405_UIC0_ER_EIR5E        _ONEBIT32B(30)
#define PPC405_UIC0_ER_EIR6E        _ONEBIT32B(31)

/*
 * UIC Masked Status Register
 */
#define PPC405_UIC0_MSR_U0IS        _ONEBIT32B(0)
#define PPC405_UIC0_MSR_U1IS        _ONEBIT32B(1)
#define PPC405_UIC0_MSR_IICIS       _ONEBIT32B(2)
#define PPC405_UIC0_MSR_EMIS        _ONEBIT32B(3)
#define PPC405_UIC0_MSR_PCIIS       _ONEBIT32B(4)
#define PPC405_UIC0_MSR_D0IS        _ONEBIT32B(5)
#define PPC405_UIC0_MSR_D1IS        _ONEBIT32B(6)
#define PPC405_UIC0_MSR_D2IS        _ONEBIT32B(7)
#define PPC405_UIC0_MSR_D3IS        _ONEBIT32B(8)
#define PPC405_UIC0_MSR_EWIS        _ONEBIT32B(9)
#define PPC405_UIC0_MSR_MSIS        _ONEBIT32B(10)
#define PPC405_UIC0_MSR_MTEIS       _ONEBIT32B(11)
#define PPC405_UIC0_MSR_MREIS       _ONEBIT32B(12)
#define PPC405_UIC0_MSR_MTDIS       _ONEBIT32B(13)
#define PPC405_UIC0_MSR_MRDIS       _ONEBIT32B(14)
#define PPC405_UIC0_MSR_EIS         _ONEBIT32B(15)
#define PPC405_UIC0_MSR_EPSIS       _ONEBIT32B(16)
#define PPC405_UIC0_MSR_ECIS        _ONEBIT32B(17)
#define PPC405_UIC0_MSR_PPMIS       _ONEBIT32B(18)
#define PPC405_UIC0_MSR_EIR0S       _ONEBIT32B(25)
#define PPC405_UIC0_MSR_EIR1S       _ONEBIT32B(26)
#define PPC405_UIC0_MSR_EIR2S       _ONEBIT32B(27)
#define PPC405_UIC0_MSR_EIR3S       _ONEBIT32B(28)
#define PPC405_UIC0_MSR_EIR4S       _ONEBIT32B(29)
#define PPC405_UIC0_MSR_EIR5S       _ONEBIT32B(30)
#define PPC405_UIC0_MSR_EIR6S       _ONEBIT32B(31)

/*
 * UIC Polarity Register
 */
#define PPC405_UIC0_PR_U0IP         _ONEBIT32B(0)
#define PPC405_UIC0_PR_U1IP         _ONEBIT32B(1)
#define PPC405_UIC0_PR_IICIP        _ONEBIT32B(2)
#define PPC405_UIC0_PR_EMIP         _ONEBIT32B(3)
#define PPC405_UIC0_PR_PCIIP        _ONEBIT32B(4)
#define PPC405_UIC0_PR_D0IP         _ONEBIT32B(5)
#define PPC405_UIC0_PR_D1IP         _ONEBIT32B(6)
#define PPC405_UIC0_PR_D2IP         _ONEBIT32B(7)
#define PPC405_UIC0_PR_D3IP         _ONEBIT32B(8)
#define PPC405_UIC0_PR_EWIP         _ONEBIT32B(9)
#define PPC405_UIC0_PR_MSIP         _ONEBIT32B(10)
#define PPC405_UIC0_PR_MTEIP        _ONEBIT32B(11)
#define PPC405_UIC0_PR_MREIP        _ONEBIT32B(12)
#define PPC405_UIC0_PR_MTDIP        _ONEBIT32B(13)
#define PPC405_UIC0_PR_MRDIP        _ONEBIT32B(14)
#define PPC405_UIC0_PR_EIP          _ONEBIT32B(15)
#define PPC405_UIC0_PR_EPSIP        _ONEBIT32B(16)
#define PPC405_UIC0_PR_ECIP         _ONEBIT32B(17)
#define PPC405_UIC0_PR_PPMIP        _ONEBIT32B(18)
#define PPC405_UIC0_PR_EIR0P        _ONEBIT32B(25)
#define PPC405_UIC0_PR_EIR1P        _ONEBIT32B(26)
#define PPC405_UIC0_PR_EIR2P        _ONEBIT32B(27)
#define PPC405_UIC0_PR_EIR3P        _ONEBIT32B(28)
#define PPC405_UIC0_PR_EIR4P        _ONEBIT32B(29)
#define PPC405_UIC0_PR_EIR5P        _ONEBIT32B(30)
#define PPC405_UIC0_PR_EIR6P        _ONEBIT32B(31)

/*
 * UIC Status Register
 */
#define PPC405_UIC0_SR_U0IS         _ONEBIT32B(0)
#define PPC405_UIC0_SR_U1IS         _ONEBIT32B(1)
#define PPC405_UIC0_SR_IICIS        _ONEBIT32B(2)
#define PPC405_UIC0_SR_EMIS         _ONEBIT32B(3)
#define PPC405_UIC0_SR_PCIIS        _ONEBIT32B(4)
#define PPC405_UIC0_SR_D0IS         _ONEBIT32B(5)
#define PPC405_UIC0_SR_D1IS         _ONEBIT32B(6)
#define PPC405_UIC0_SR_D2IS         _ONEBIT32B(7)
#define PPC405_UIC0_SR_D3IS         _ONEBIT32B(8)
#define PPC405_UIC0_SR_EWIS         _ONEBIT32B(9)
#define PPC405_UIC0_SR_MSIS         _ONEBIT32B(10)
#define PPC405_UIC0_SR_MTEIS        _ONEBIT32B(11)
#define PPC405_UIC0_SR_MREIS        _ONEBIT32B(12)
#define PPC405_UIC0_SR_MTDIS        _ONEBIT32B(13)
#define PPC405_UIC0_SR_MRDIS        _ONEBIT32B(14)
#define PPC405_UIC0_SR_EIS          _ONEBIT32B(15)
#define PPC405_UIC0_SR_EPSIS        _ONEBIT32B(16)
#define PPC405_UIC0_SR_ECIS         _ONEBIT32B(17)
#define PPC405_UIC0_SR_PPMIS        _ONEBIT32B(18)
#define PPC405_UIC0_SR_EIR0S        _ONEBIT32B(25)
#define PPC405_UIC0_SR_EIR1S        _ONEBIT32B(26)
#define PPC405_UIC0_SR_EIR2S        _ONEBIT32B(27)
#define PPC405_UIC0_SR_EIR3S        _ONEBIT32B(28)
#define PPC405_UIC0_SR_EIR4S        _ONEBIT32B(29)
#define PPC405_UIC0_SR_EIR5S        _ONEBIT32B(30)
#define PPC405_UIC0_SR_EIR6S        _ONEBIT32B(31)

/*
 * UIC Trigger Register
 */
#define PPC405_UIC0_TR_U0IT         _ONEBIT32B(0)
#define PPC405_UIC0_TR_U1IT         _ONEBIT32B(1)
#define PPC405_UIC0_TR_IICIT        _ONEBIT32B(2)
#define PPC405_UIC0_TR_EMIT         _ONEBIT32B(3)
#define PPC405_UIC0_TR_PCIIT        _ONEBIT32B(4)
#define PPC405_UIC0_TR_D0IT         _ONEBIT32B(5)
#define PPC405_UIC0_TR_D1IT         _ONEBIT32B(6)
#define PPC405_UIC0_TR_D2IT         _ONEBIT32B(7)
#define PPC405_UIC0_TR_D3IT         _ONEBIT32B(8)
#define PPC405_UIC0_TR_EWIT         _ONEBIT32B(9)
#define PPC405_UIC0_TR_MSIT         _ONEBIT32B(10)
#define PPC405_UIC0_TR_MTEIT        _ONEBIT32B(11)
#define PPC405_UIC0_TR_MREIT        _ONEBIT32B(12)
#define PPC405_UIC0_TR_MTDIT        _ONEBIT32B(13)
#define PPC405_UIC0_TR_MRDIT        _ONEBIT32B(14)
#define PPC405_UIC0_TR_EIT          _ONEBIT32B(15)
#define PPC405_UIC0_TR_EPSIT        _ONEBIT32B(16)
#define PPC405_UIC0_TR_ECIT         _ONEBIT32B(17)
#define PPC405_UIC0_TR_PPMIT        _ONEBIT32B(18)
#define PPC405_UIC0_TR_EIR0T        _ONEBIT32B(25)
#define PPC405_UIC0_TR_EIR1T        _ONEBIT32B(26)
#define PPC405_UIC0_TR_EIR2T        _ONEBIT32B(27)
#define PPC405_UIC0_TR_EIR3T        _ONEBIT32B(28)
#define PPC405_UIC0_TR_EIR4T        _ONEBIT32B(29)
#define PPC405_UIC0_TR_EIR5T        _ONEBIT32B(30)
#define PPC405_UIC0_TR_EIR6T        _ONEBIT32B(31)

/*
 * SPR numbers
 */
#define PPC405_SPR_CCR0             0x3b3
#define PPC405_SPR_DBCR0            0x3f2
#define PPC405_SPR_DBCR1            0x3bd
#define PPC405_SPR_IAC2             0x3f5
#define PPC405_SPR_IAC3             0x3b4
#define PPC405_SPR_IAC4             0x3b5
#define PPC405_SPR_ICDBDR           0x3d3
#define PPC405_SPR_SLER             0x3bb
#define PPC405_SPR_SU0R             0x3bc

/*
 * DCR numbers
 */
#define PPC405_DCR_SDRAM0_CFGADDR   0x010
#define PPC405_DCR_SDRAM0_CFGDATA   0x011
#define PPC405_DCR_EBC0_CFGADDR     0x012
#define PPC405_DCR_EBC0_CFGDATA     0x013
#define PPC405_DCR_DCP0_CFGADDR     0x014
#define PPC405_DCR_DCP0_CFGDATA     0x015
#define PPC405_DCR_OCM0_ISARC       0x018
#define PPC405_DCR_OCM0_ISCNTL      0x019
#define PPC405_DCR_OCM0_DSARC       0x01a
#define PPC405_DCR_OCM0_DSCNTL      0x01b
#define PPC405_DCR_PLB0_BESR        0x084
#define PPC405_DCR_PLB0_BEAR        0x086
#define PPC405_DCR_PLB0_ACR         0x087
#define PPC405_DCR_POB0_BESR0       0x0a0
#define PPC405_DCR_POB0_BEAR        0x0a2
#define PPC405_DCR_POB0_BESR1       0x0a4
#define PPC405_DCR_CPC0_PLLMR       0x0b0
#define PPC405_DCR_CPC0_CR0         0x0b1
#define PPC405_DCR_CPC0_CR1         0x0b2
#define PPC405_DCR_CPC0_PSR         0x0b4
#define PPC405_DCR_CPC0_JTAGID      0x0b5
#define PPC405_DCR_CPC0_SR          0x0b8
#define PPC405_DCR_CPC0_ER          0x0b9
#define PPC405_DCR_CPC0_FR          0x0ba

#define PPC405_DCRBASE_UIC0         0xc0
#define PPC405_DCRBASE_UIC1         0xd0
#define PPC405_DCR_UIC0_SR          PPCIBM_DCR_UIC_SR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_ER          PPCIBM_DCR_UIC_ER(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_CR          PPCIBM_DCR_UIC_CR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_PR          PPCIBM_DCR_UIC_PR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_TR          PPCIBM_DCR_UIC_TR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_MSR         PPCIBM_DCR_UIC_MSR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_VCR         PPCIBM_DCR_UIC_VCR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC0_VR          PPCIBM_DCR_UIC_VR(PPC405_DCRBASE_UIC0)
#define PPC405_DCR_UIC1_SR          PPCIBM_DCR_UIC_SR(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_ER          PPCIBM_DCR_UIC_ER(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_CR          PPCIBM_DCR_UIC_CR(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_PR          PPCIBM_DCR_UIC_PR(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_TR          PPCIBM_DCR_UIC_TR(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_MSR         PPCIBM_DCR_UIC_MSR(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_VCR         PPCIBM_DCR_UIC_VCR(PPC405_DCRBASE_UIC1)
#define PPC405_DCR_UIC1_VR          PPCIBM_DCR_UIC_VR(PPC405_DCRBASE_UIC1)

#define PPC405_DCR_DMA0_CR0         0x100
#define PPC405_DCR_DMA0_CT0         0x101
#define PPC405_DCR_DMA0_DA0         0x102
#define PPC405_DCR_DMA0_SA0         0x103
#define PPC405_DCR_DMA0_SG0         0x104
#define PPC405_DCR_DMA0_CR1         0x108
#define PPC405_DCR_DMA0_CT1         0x109
#define PPC405_DCR_DMA0_DA1         0x10a
#define PPC405_DCR_DMA0_SA1         0x10b
#define PPC405_DCR_DMA0_SG1         0x10c
#define PPC405_DCR_DMA0_CR2         0x110
#define PPC405_DCR_DMA0_CT2         0x111
#define PPC405_DCR_DMA0_DA2         0x112
#define PPC405_DCR_DMA0_SA2         0x113
#define PPC405_DCR_DMA0_SG2         0x114
#define PPC405_DCR_DMA0_CR3         0x118
#define PPC405_DCR_DMA0_CT3         0x119
#define PPC405_DCR_DMA0_DA3         0x11a
#define PPC405_DCR_DMA0_SA3         0x11b
#define PPC405_DCR_DMA0_SG3         0x11c
#define PPC405_DCR_DMA0_SR          0x120
#define PPC405_DCR_DMA0_SGC         0x123
#define PPC405_DCR_DMAADR           0x124
#define PPC405_DCR_DMA0_SLP         0x125
#define PPC405_DCR_DMA0_POL         0x126
#define PPC405_DCR_MAL0_CR          0x180
#define PPC405_DCR_MAL0_ESR         0x181
#define PPC405_DCR_MAL0_IER         0x182
#define PPC405_DCR_MAL0_TXCASR      0x184
#define PPC405_DCR_MAL0_TXCARR      0x185
#define PPC405_DCR_MAL0_TXEOBISR    0x186
#define PPC405_DCR_MAL0_TXDEIR      0x187
#define PPC405_DCR_MAL0_RXCASR      0x190
#define PPC405_DCR_MAL0_RXCARR      0x191
#define PPC405_DCR_MAL0_RXEOBISR    0x192
#define PPC405_DCR_MAL0_RXDEIR      0x193
#define PPC405_DCR_MAL0_TXCTP0R     0x1a0
#define PPC405_DCR_MAL0_TXCTP1R     0x1a1
#define PPC405_DCR_MAL0_TXCTP2R     0x1a2
#define PPC405_DCR_MAL0_TXCTP3R     0x1a3
#define PPC405_DCR_MAL0_RXCTP0R     0x1c0
#define PPC405_DCR_MAL0_RXCTP1R     0x1c1
#define PPC405_DCR_MAL0_RCBS0       0x1e0
#define PPC405_DCR_MAL0_RCBS1       0x1e1

/*
 * Indirect via SDRAM0_CFGADDR/SDRAM_CFGDATA registers
 */
#define PPC405_SDRAM0_BESR0         0x00
#define PPC405_SDRAM0_BESR1         0x08
#define PPC405_SDRAM0_BEAR          0x10
#define PPC405_SDRAM0_CFG           0x20
#define PPC405_SDRAM0_RTR           0x30
#define PPC405_SDRAM0_PMIT          0x34
#define PPC405_SDRAM0_B0CR          0x40
#define PPC405_SDRAM0_B1CR          0x44
#define PPC405_SDRAM0_B2CR          0x48
#define PPC405_SDRAM0_B3CR          0x4c
#define PPC405_SDRAM0_TR            0x80
#define PPC405_SDRAM0_ECCCFG        0x94
#define PPC405_SDRAM0_ECCESR        0x98

/*
 * Indirect via EBC0_CFGADDR/EBC0_CFGDATA registers
 */
#define PPC405_EBC0_B0CR            0x00
#define PPC405_EBC0_B1CR            0x01
#define PPC405_EBC0_B2CR            0x02
#define PPC405_EBC0_B3CR            0x03
#define PPC405_EBC0_B4CR            0x04
#define PPC405_EBC0_B5CR            0x05
#define PPC405_EBC0_B6CR            0x06
#define PPC405_EBC0_B7CR            0x07
#define PPC405_EBC0_B0AP            0x10
#define PPC405_EBC0_B1AP            0x11
#define PPC405_EBC0_B2AP            0x12
#define PPC405_EBC0_B3AP            0x13
#define PPC405_EBC0_B4AP            0x14
#define PPC405_EBC0_B5AP            0x15
#define PPC405_EBC0_B6AP            0x16
#define PPC405_EBC0_B7AP            0x17
#define PPC405_EBC0_BEAR            0x20
#define PPC405_EBC0_BESR0           0x21
#define PPC405_EBC0_BESR1           0x22
#define PPC405_EBC0_CFG             0x23

/*
 * Indirect via DCP0_CFGADDR/DCP0_CFGDATA registers
 */
#define PPC405_DCP0_ITOR0           0x00
#define PPC405_DCP0_ITOR1           0x01
#define PPC405_DCP0_ITOR2           0x02
#define PPC405_DCP0_ITOR3           0x03
#define PPC405_DCP0_ADDR0           0x04
#define PPC405_DCP0_ADDR1           0x05
#define PPC405_DCP0_CFG             0x40
#define PPC405_DCP0_ID              0x41
#define PPC405_DCP0_VER             0x42
#define PPC405_DCP0_PLBBEAR         0x50
#define PPC405_DCP0_MEMBEAR         0x51
#define PPC405_DCP0_ESR             0x52
#define PPC405_DCP0_RAM0            0x400
#define PPC405_DCP0_RAM3ff          0x7ff

/*
 * Memory mapped
 */
#define PPC405_PCIC0_BASE           0xeec00000
#define PPC405_PCIC0_CFGADR         0x00
#define PPC405_PCIC0_CFGDATA        0x04
#define PCC405_PCIC0_CFGADR         PPC405_PCIC0_CFGADR
#define PCC405_PCIC0_CFGDATA        PPC405_PCIC0_CFGDATA

#define PPC405_PCIL0_BASE           0xef400000
#define PPC405_PCIL0_PMM0LA         0x00
#define PPC405_PCIL0_PMM0MA         0x04
#define PPC405_PCIL0_PMM0PCILA      0x08
#define PPC405_PCIL0_PMM0PCIHA      0x0c
#define PPC405_PCIL0_PMM1LA         0x10
#define PPC405_PCIL0_PMM1MA         0x14
#define PPC405_PCIL0_PMM1PCILA      0x18
#define PPC405_PCIL0_PMM1PCIHA      0x1c
#define PPC405_PCIL0_PMM2LA         0x20
#define PPC405_PCIL0_PMM2MA         0x24
#define PPC405_PCIL0_PMM2PCILA      0x28
#define PPC405_PCIL0_PMM2PCIHA      0x2c
#define PPC405_PCIL0_PTM1MS         0x30
#define PPC405_PCIL0_PTM1LA         0x34
#define PPC405_PCIL0_PTM2MS         0x38
#define PPC405_PCIL0_PTM2LA         0x3c

#define PPC405_UART0_BASE           0xef600300
#define PPC405_UART1_BASE           0xef600400

#define PPC405_IIC0_BASE            0xef600500
#define PPC405_IIC0_MDBUF           0x00
#define PPC405_IIC0_SDBUF           0x02
#define PPC405_IIC0_LMADR           0x04
#define PPC405_IIC0_HMADR           0x05
#define PPC405_IIC0_CNTL            0x06
#define PPC405_IIC0_MDCNTL          0x07
#define PPC405_IIC0_STS             0x08
#define PPC405_IIC0_EXTSTS          0x09
#define PPC405_IIC0_LSADR           0x0a
#define PPC405_IIC0_HSADR           0x0b
#define PPC405_IIC0_CLKDIV          0x0c
#define PPC405_IIC0_INTRMSK         0x0d
#define PPC405_IIC0_XFRCNT          0x0e
#define PPC405_IIC0_XTCNTLSS        0x0f
#define PPC405_IIC0_DIRECTCNTL      0x10

#define PPC405_OPBA0_BASE           0xef600600
#define PPC405_OPBA0_PR             0x00
#define PPC405_OPBA0_CR             0x01

#define PPC405_GPIO0_BASE           0xef600700
#define PPC405_GPIO0_OR             0x00
#define PPC405_GPIO0_TCR            0x04
#define PPC405_GPIO0_ODR            0x18
#define PPC405_GPIO0_IR             0x1c

#define PPC405_EMAC0_BASE           0xef600800
#define PPC405_EMAC0_MR0            0x00
#define PPC405_EMAC0_MR1            0x04
#define PPC405_EMAC0_TMR0           0x08
#define PPC405_EMAC0_TMR1           0x0c
#define PPC405_EMAC0_RMR            0x10
#define PPC405_EMAC0_ISR            0x14
#define PPC405_EMAC0_ISER           0x18
#define PPC405_EMAC0_IAHR           0x1c
#define PPC405_EMAC0_IALR           0x20
#define PPC405_EMAC0_VTPID          0x24
#define PPC405_EMAC0_VTCI           0x28
#define PPC405_EMAC0_PTR            0x2c
#define PPC405_EMAC0_IAHT1          0x30
#define PPC405_EMAC0_IAHT2          0x34
#define PPC405_EMAC0_IAHT3          0x38
#define PPC405_EMAC0_IAHT4          0x3c
#define PPC405_EMAC0_GAHT1          0x40
#define PPC405_EMAC0_GAHT2          0x44
#define PPC405_EMAC0_GAHT3          0x48
#define PPC405_EMAC0_GAHT4          0x4c
#define PPC405_EMAC0_LSAL           0x50
#define PPC405_EMAC0_LSAH           0x54
#define PPC405_EMAC0_IPGVR          0x58
#define PPC405_EMAC0_STACR          0x5c
#define PPC405_EMAC0_TRTR           0x60
#define PPC405_EMAC0_RWMR           0x64

#define PPC405_ZMII_BASE            0xef600c10
#define PPC405_ZMII_FER             0x00
#define PPC405_ZMII_SSR             0x04
#define PPC405_ZMII_SMIISR          0x08

#endif

/* __SRCVERSION("405cpu.h $Rev: 153052 $"); */
