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
 *  ppc/440cpu.h
 *
 * Registers specific to the 440 chip
 *

 */

#ifndef __PPC_440CPU_H_INCLUDED
#define __PPC_440CPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

#ifndef __PPC_BOOKECPU_H_INCLUDED
#include _NTO_HDR_(ppc / bookecpu.h)
#endif

#ifndef __PPC_IBMUIC_H_INCLUDED
#include _NTO_HDR_(ppc / ibmuic.h)
#endif

/*
 * Core Configuration Register 0 bits
 */
#define PPC440_CCR0_DSTG                   _ONEBIT32B(10)
#define PPC440_CCR0_DAPUIB                 _ONEBIT32B(11)
#define PPC440_CCR0_DTB                    _ONEBIT32B(16)
#define PPC440_CCR0_GICBT                  _ONEBIT32B(17)
#define PPC440_CCR0_GDCBT                  _ONEBIT32B(18)
#define PPC440_CCR0_FLSTA                  _ONEBIT32B(23)
#define PPC440_CCR0_ICSLC_MASK             _BITFIELD32B(29, 0x3)
#define PPC440_CCR0_ICSLC_SHIFT            (31 - 29)
#define PPC440_CCR0_ICSLT_MASK             _BITFIELD32B(31, 0x3)
#define PPC440_CCR0_ICSLT_SHIFT            (31 - 31)

/*
 * Core Configuration Register 1 bits
 */
#define PPC440_CCR1_TCS                    _ONEBIT32B(24)

/*
 * Data Cache Debug Tag Register High
 */
#define PPC440_DCDBTRH_TRA_MASK            _BITFIELD32B(23, 0xffffff)
#define PPC440_DCDBTRH_TRA_SHIFT           (31 - 23)
#define PPC440_DCDBTRH_V                   _ONEBIT32B(24)
#define PPC440_DCDBTRH_TERA_MASK           _BITFIELD32B(31, 0xf)
#define PPC440_DCDBTRH_TERA_SHIFT          (31 - 31)

/*
 * Data Cache Debug Tag Register Low
 */
#define PPC440_DCDBTRL_D_MASK              _BITFIELD32B(23, 0xf)
#define PPC440_DCDBTRL_D_SHIFT             (31 - 27)
#define PPC440_DCDBTRL_U0                  _ONEBIT32B(28)
#define PPC440_DCDBTRL_U1                  _ONEBIT32B(29)
#define PPC440_DCDBTRL_U2                  _ONEBIT32B(30)
#define PPC440_DCDBTRL_U3                  _ONEBIT32B(31)

/*
 * Data Cache Normal Victim Register (0-3)
 */
#define PPC440_DNV_VNDXA_MASK              _BITFIELD(7, 0xff)
#define PPC440_DNV_VNDXA_SHIFT             (31 - 7)
#define PPC440_DNV_VNDXB_MASK              _BITFIELD(15, 0xff)
#define PPC440_DNV_VNDXB_SHIFT             (31 - 15)
#define PPC440_DNV_VNDXC_MASK              _BITFIELD(23, 0xff)
#define PPC440_DNV_VNDXC_SHIFT             (31 - 23)
#define PPC440_DNV_VNDXD_MASK              _BITFIELD(31, 0xff)
#define PPC440_DNV_VNDXD_SHIFT             (31 - 31)

/*
 * Data Cache Transient Victim Register (0-3)
 */
#define PPC440_DTV_VNDXA_MASK              _BITFIELD(7, 0xff)
#define PPC440_DTV_VNDXA_SHIFT             (31 - 7)
#define PPC440_DTV_VNDXB_MASK              _BITFIELD(15, 0xff)
#define PPC440_DTV_VNDXB_SHIFT             (31 - 15)
#define PPC440_DTV_VNDXC_MASK              _BITFIELD(23, 0xff)
#define PPC440_DTV_VNDXC_SHIFT             (31 - 23)
#define PPC440_DTV_VNDXD_MASK              _BITFIELD(31, 0xff)
#define PPC440_DTV_VNDXD_SHIFT             (31 - 31)

/*
 * Data Cache Victim Limit Register
 */
#define PPC440_DVLIM_TFLOOR_MASK           _BITFIELD32B(9, 0xff)
#define PPC440_DVLIM_TFLOOR_SHIFT          (31 - 9)
#define PPC440_DVLIM_TCEILING_MASK         _BITFIELD32B(20, 0xff)
#define PPC440_DVLIM_TCEILING_SHIFT        (31 - 20)
#define PPC440_DVLIM_NFLOOR_MASK           _BITFIELD32B(31, 0xff)
#define PPC440_DVLIM_NFLOOR_SHIFT          (31 - 31)

/*
 * Instruction Cache Debug Tag Register High
 */
#define PPC440_ICDBTRH_TEA_MASK            _BITFIELD32B(31, 0xffffff)
#define PPC440_ICDBTRH_TEA_SHIFT           (31 - 23)
#define PPC440_ICDBTRH_V                   _ONEBIT32B(24)

/*
 * Instruction Cache Debug Tag Register Low
 */
#define PPC440_ICDBTRL_TS                  _ONEBIT32B(22)
#define PPC440_ICDBTRL_TD                  _ONEBIT32B(22)
#define PPC440_ICDBTRL_TID_MASK            _BITFIELD32B(31, 0xff)
#define PPC440_ICDBTRL_TID_SHIFT           (31 - 31)

/*
 * Instruction Cache Normal Victim Register (0-3)
 */
#define PPC440_INV_VNDXA_MASK              _BITFIELD(7, 0xff)
#define PPC440_INV_VNDXA_SHIFT             (31 - 7)
#define PPC440_INV_VNDXB_MASK              _BITFIELD(15, 0xff)
#define PPC440_INV_VNDXB_SHIFT             (31 - 15)
#define PPC440_INV_VNDXC_MASK              _BITFIELD(23, 0xff)
#define PPC440_INV_VNDXC_SHIFT             (31 - 23)
#define PPC440_INV_VNDXD_MASK              _BITFIELD(31, 0xff)
#define PPC440_INV_VNDXD_SHIFT             (31 - 31)

/*
 * Instruction Cache Transient Victim Register (0-3)
 */
#define PPC440_ITV_VNDXA_MASK              _BITFIELD(7, 0xff)
#define PPC440_ITV_VNDXA_SHIFT             (31 - 7)
#define PPC440_ITV_VNDXB_MASK              _BITFIELD(15, 0xff)
#define PPC440_ITV_VNDXB_SHIFT             (31 - 15)
#define PPC440_ITV_VNDXC_MASK              _BITFIELD(23, 0xff)
#define PPC440_ITV_VNDXC_SHIFT             (31 - 23)
#define PPC440_ITV_VNDXD_MASK              _BITFIELD(31, 0xff)
#define PPC440_ITV_VNDXD_SHIFT             (31 - 31)

/*
 * Instruction Cache Victim Limit Register
 */
#define PPC440_IVLIM_TFLOOR_MASK           _BITFIELD32B(9, 0xff)
#define PPC440_IVLIM_TFLOOR_SHIFT          (31 - 9)
#define PPC440_IVLIM_TCEILING_MASK         _BITFIELD32B(20, 0xff)
#define PPC440_IVLIM_TCEILING_SHIFT        (31 - 20)
#define PPC440_IVLIM_NFLOOR_MASK           _BITFIELD32B(31, 0xff)
#define PPC440_IVLIM_NFLOOR_SHIFT          (31 - 31)

/*
 * Memory Management Unit Control Register bits
 */
#define PPC440_MMUCR_SWOA                  _ONEBIT32B(7)
#define PPC440_MMUCR_U1TE                  _ONEBIT32B(9)
#define PPC440_MMUCR_U2SWOAE               _ONEBIT32B(10)
#define PPC440_MMUCR_DULXE                 _ONEBIT32B(12)
#define PPC440_MMUCR_IULXE                 _ONEBIT32B(13)
#define PPC440_MMUCR_STS_MASK              _ONEBIT32B(15)
#define PPC440_MMUCR_STS_SHIFT             (31 - 15)
#define PPC440_MMUCR_STID_MASK             _BITFIELD32B(31, 0xff)
#define PPC440_MMUCR_STID_SHIFT            (31 - 31)

/*
 * Reset Configuration Register bits
 */
#define PPC440_RSTCFG_U0                   _ONEBIT32B(16)
#define PPC440_RSTCFG_U1                   _ONEBIT32B(17)
#define PPC440_RSTCFG_U2                   _ONEBIT32B(18)
#define PPC440_RSTCFG_U3                   _ONEBIT32B(19)
#define PPC440_RSTCFG_E                    _ONEBIT32B(24)
#define PPC440_RSTCFG_ERPN_MASK            _BITFIEL32B(31, 0xf)
#define PPC440_RSTCFG_ERPN_SHIFT           (31 - 31)

/*
 * Extra ESR bits
 */
#define PPC440_ESR_MCI                     _ONEBIT32B(0)
#define PPC440_ESR_PCRE                    _ONEBIT32B(27)
#define PPC440_ESR_PCMP                    _ONEBIT32B(28)
#define PPC440_ESR_PCMP                    _ONEBIT32B(28)
#define PPC440_ESR_PCRF_MASK               _BITFIELD32B(29, 0x7)
#define PPC440_ESR_PCRF_SHIFT              (31 - 29)
#define PPC440_ESR_PCRF_NONE               _BITFIELD32B(29, 0x0)
#define PPC440_ESR_PCRF_TAKEN              _BITFIELD32B(29, 0x1)

/*
 * UIC0 register bits
 */
#define PPC440_UIC0_XR_U0                  _ONEBIT32B(0)
#define PPC440_UIC0_XR_U1                  _ONEBIT32B(1)
#define PPC440_UIC0_XR_IIC0                _ONEBIT32B(2)
#define PPC440_UIC0_XR_IIC1                _ONEBIT32B(3)
#define PPC440_UIC0_XR_PIM                 _ONEBIT32B(4)
#define PPC440_UIC0_XR_PCRW                _ONEBIT32B(5)
#define PPC440_UIC0_XR_PPM                 _ONEBIT32B(6)
#define PPC440_UIC0_XR_MSI0                _ONEBIT32B(7)
#define PPC440_UIC0_XR_MSI1                _ONEBIT32B(8)
#define PPC440_UIC0_XR_MSI2                _ONEBIT32B(9)
#define PPC440_UIC0_XR_MTE                 _ONEBIT32B(10)
#define PPC440_UIC0_XR_MRE                 _ONEBIT32B(11)
#define PPC440_UIC0_XR_D0                  _ONEBIT32B(12)
#define PPC440_UIC0_XR_D1                  _ONEBIT32B(13)
#define PPC440_UIC0_XR_D2                  _ONEBIT32B(14)
#define PPC440_UIC0_XR_D3                  _ONEBIT32B(15)
#define PPC440_UIC0_XR_CT0                 _ONEBIT32B(18)
#define PPC440_UIC0_XR_CT1                 _ONEBIT32B(19)
#define PPC440_UIC0_XR_CT2                 _ONEBIT32B(20)
#define PPC440_UIC0_XR_CT3                 _ONEBIT32B(21)
#define PPC440_UIC0_XR_CT4                 _ONEBIT32B(22)
#define PPC440_UIC0_XR_EIR0                _ONEBIT32B(23)
#define PPC440_UIC0_XR_EIR1                _ONEBIT32B(24)
#define PPC440_UIC0_XR_EIR2                _ONEBIT32B(25)
#define PPC440_UIC0_XR_EIR3                _ONEBIT32B(26)
#define PPC440_UIC0_XR_EIR4                _ONEBIT32B(27)
#define PPC440_UIC0_XR_EIR5                _ONEBIT32B(28)
#define PPC440_UIC0_XR_EIR6                _ONEBIT32B(29)
#define PPC440_UIC0_XR_UIC1NC              _ONEBIT32B(30)
#define PPC440_UIC0_XR_UIC1C               _ONEBIT32B(31)

/*
 * UIC1 register bits
 */
#define PPC440_UIC1_XR_MS                  _ONEBIT32B(0)
#define PPC440_UIC1_XR_MTDE                _ONEBIT32B(1)
#define PPC440_UIC1_XR_MRDE                _ONEBIT32B(2)
#define PPC440_UIC1_XR_DEUE                _ONEBIT32B(3)
#define PPC440_UIC1_XR_DECE                _ONEBIT32B(4)
#define PPC440_UIC1_XR_EBC0                _ONEBIT32B(5)
#define PPC440_UIC1_XR_EBMI                _ONEBIT32B(6)
#define PPC440_UIC1_XR_OPB                 _ONEBIT32B(7)
#define PPC440_UIC1_XR_MSI3                _ONEBIT32B(8)
#define PPC440_UIC1_XR_MSI4                _ONEBIT32B(9)
#define PPC440_UIC1_XR_MSI5                _ONEBIT32B(10)
#define PPC440_UIC1_XR_MSI6                _ONEBIT32B(11)
#define PPC440_UIC1_XR_MSI7                _ONEBIT32B(12)
#define PPC440_UIC1_XR_MSI8                _ONEBIT32B(13)
#define PPC440_UIC1_XR_MSI9                _ONEBIT32B(14)
#define PPC440_UIC1_XR_MSI10               _ONEBIT32B(15)
#define PPC440_UIC1_XR_MSI11               _ONEBIT32B(16)
#define PPC440_UIC1_XR_PPM                 _ONEBIT32B(17)
#define PPC440_UIC1_XR_EIR7                _ONEBIT32B(18)
#define PPC440_UIC1_XR_EIR8                _ONEBIT32B(19)
#define PPC440_UIC1_XR_EIR9                _ONEBIT32B(20)
#define PPC440_UIC1_XR_EIR10               _ONEBIT32B(21)
#define PPC440_UIC1_XR_EIR11               _ONEBIT32B(22)
#define PPC440_UIC1_XR_EIR12               _ONEBIT32B(23)
#define PPC440_UIC1_XR_SRE                 _ONEBIT32B(24)
#define PPC440_UIC1_XR_PAE                 _ONEBIT32B(27)
#define PPC440_UIC1_XR_ETH0                _ONEBIT32B(28)
#define PPC440_UIC1_XR_EWU0                _ONEBIT32B(29)
#define PPC440_UIC1_XR_ETH1                _ONEBIT32B(30)
#define PPC440_UIC1_XR_EWU1                _ONEBIT32B(31)

#define PPC440GP_CPC0_SYS0_TUNE_MASK       _BITFIELD32B(9, 0x3ff)
#define PPC440GP_CPC0_SYS0_TUNE_SHIFT      (31 - 9)
#define PPC440GP_CPC0_SYS0_FBDV_MASK       _BITFIELD32B(13, 0xf)
#define PPC440GP_CPC0_SYS0_FBDV_SHIFT      (31 - 13)
#define PPC440GP_CPC0_SYS0_FWDVA_MASK      _BITFIELD32B(16, 0x7)
#define PPC440GP_CPC0_SYS0_FWDVA_SHIFT     (31 - 16)
#define PPC440GP_CPC0_SYS0_FWDVB_MASK      _BITFIELD32B(19, 0x7)
#define PPC440GP_CPC0_SYS0_FWDVB_SHIFT     (31 - 19)
#define PPC440GP_CPC0_SYS0_OPDV_MASK       _BITFIELD32B(21, 0x3)
#define PPC440GP_CPC0_SYS0_OPDV_SHIFT      (31 - 21)
#define PPC440GP_CPC0_SYS0_EPDV_MASK       _BITFIELD32B(23, 0x3)
#define PPC440GP_CPC0_SYS0_EPDV_SHIFT      (31 - 23)
#define PPC440GP_CPC0_SYS0_EXTSL           _ONEBIT32B(24)
#define PPC440GP_CPC0_SYS0_RW_MASK         _BITFIELD32B(26, 0x3)
#define PPC440GP_CPC0_SYS0_RW_SHIFT        (31 - 26)
#define PPC440GP_CPC0_SYS0_RW_8            _BITFIELD32B(26, 0x0)
#define PPC440GP_CPC0_SYS0_RW_16           _BITFIELD32B(26, 0x1)
#define PPC440GP_CPC0_SYS0_RW_32           _BITFIELD32B(26, 0x3)
#define PPC440GP_CPC0_SYS0_RL              _ONEBIT32B(27)
#define PPC440GP_CPC0_SYS0_ZMIISL_MASK     _BITFIELD32B(29, 0x3)
#define PPC440GP_CPC0_SYS0_ZMIISL_SHIFT    (31 - 29)
#define PPC440GP_CPC0_SYS0_ZMIISL_MII      _BITFIELD32B(29, 0x0)
#define PPC440GP_CPC0_SYS0_ZMIISL_SMII     _BITFIELD32B(29, 0x1)
#define PPC440GP_CPC0_SYS0_ZMIISL_ZMII10   _BITFIELD32B(29, 0x2)
#define PPC440GP_CPC0_SYS0_ZMIISL_ZMII100  _BITFIELD32B(29, 0x3)
#define PPC440GP_CPC0_SYS0_BYPASS          _ONEBIT32B(30)
#define PPC440GP_CPC0_SYS0_Nto1            _ONEBIT32B(31)

#define PPC440GP_CPC0_SYS1_TUNE_MASK       _BITFIELD32B(9, 0x3ff)
#define PPC440GP_CPC0_SYS1_TUNE_SHIFT      (31 - 9)
#define PPC440GP_CPC0_SYS1_BYPASS          _ONEBIT32B(10)
#define PPC440GP_CPC0_SYS1_PAE             _ONEBIT32B(11)
#define PPC440GP_CPC0_SYS1_PHCE            _ONEBIT32B(12)
#define PPC440GP_CPC0_SYS1_PISE            _ONEBIT32B(13)
#define PPC440GP_CPC0_SYS1_PCWE            _ONEBIT32B(14)
#define PPC440GP_CPC0_SYS1_PPIM_MASK       _BITFIELD32B(18, 0xf)
#define PPC440GP_CPC0_SYS1_PPIM_SHIFT      (31 - 18)
#define PPC440GP_CPC0_SYS1_PR64E           _ONEBIT32B(19)
#define PPC440GP_CPC0_SYS1_PXFS_MASK       _BITFIELD32B(21, 0x3)
#define PPC440GP_CPC0_SYS1_PXFS_SHIFT      (31 - 21)
#define PPC440GP_CPC0_SYS1_PXFS_100_133MHZ _BITFIELD32B(21, 0x0)
#define PPC440GP_CPC0_SYS1_PXFS_66_100MHZ  _BITFIELD32B(21, 0x1)
#define PPC440GP_CPC0_SYS1_PXFS_50_66MHZ   _BITFIELD32B(21, 0x2)
#define PPC440GP_CPC0_SYS1_PQXDE           _ONEBIT32B(22)
#define PPC440GP_CPC0_SYS1_PDM             _ONEBIT32B(24)
#define PPC440GP_CPC0_SYS1_TUNEEN          _ONEBIT32B(25)

/*
 * SPR values
 */
#define PPC440_SPR_CCR0                    0x3b3
#define PPC440_SPR_CCR1                    0x378
#define PPC440_SPR_DCDBTRH                 0x39d
#define PPC440_SPR_DCDBTRL                 0x39c
#define PPC440_SPR_DNV(x)                  (0x390 + (x))
#define PPC440_SPR_DTV(x)                  (0x394 + (x))
#define PPC440_SPR_DVC1                    0x13e
#define PPC440_SPR_DVC2                    0x13f
#define PPC440_SPR_DVLIM                   0x398
#define PPC440_SPR_ICDBDR                  0x3d3
#define PPC440_SPR_ICDBTRH                 0x39f
#define PPC440_SPR_ICDBTRL                 0x39e
#define PPC440_SPR_INV(x)                  (0x370 + (x))
#define PPC440_SPR_ITV(x)                  (0x374 + (x))
#define PPC440_SPR_IVLIM                   0x399
#define PPC440_SPR_MMUCR                   0x3b2
#define PPC440_SPR_RSTCFG                  0x39b
#define PPC440_SPR_USPR0                   0x100
#define PPC440_SPR_MCSR                    0x23c

#define PPC440GX_SPR_MCSRR0                0x23a
#define PPC440GX_SPR_MCSRR1                0x23b

/*
 * SDR Register Definations
 */
#define PPC440GX_SDR0_CFG_ADDR             0x000e
#define PPC440GX_SDR0_CFG_DATA             0x000f
#define PPC440GX_SDR0_SDSTP0               0x0020
#define PPC440GX_SDR0_SDSTP1               0x0021
#define PPC440GX_SDR0_UART0                0x0120
#define PPC440GX_SDR0_UART1                0x0121
#define PPC440GX_SDR0_MFR                  0x4300

#define PPC440EPX_SDR_PFC1                 0x4101
#define PPC440EPX_SDR_PFC2                 0x4102

#define set_sdr(reg, data)                \
    set_dcr(PPC440GX_SDR0_CFG_ADDR, reg); \
    set_dcr(PPC440GX_SDR0_CFG_DATA, data);
#define get_sdr(reg, data)                \
    set_dcr(PPC440GX_SDR0_CFG_ADDR, reg); \
    data = get_dcr(PPC440GX_SDR0_CFG_DATA);

/*
 * SDR register bits
 */
#define PPC440GX_SDR0_SDSTP0_ENG_MAKS     _ONEBIT32B(0)
#define PPC440GX_SDR0_SDSTP0_ENG_SHIFT    (31 - 0)
#define PPC440GX_SDR0_SDSTP0_SRC_MASK     _ONEBIT32B(1)
#define PPC440GX_SDR0_SDSTP0_SRC_SHIFT    (31 - 1)
#define PPC440GX_SDR0_SDSTP0_SEL_MASK     _BITFIELD32B(4, 0x7)
#define PPC440GX_SDR0_SDSTP0_SEL_SHIFT    (31 - 4)
#define PPC440GX_SDR0_SDSTP0_FBDV_MASK    _BITFIELD32B(19, 0x1f)
#define PPC440GX_SDR0_SDSTP0_FBDV_SHIFT   (31 - 19)
#define PPC440GX_SDR0_SDSTP0_FWDVA_MASK   _BITFIELD32B(23, 0xf)
#define PPC440GX_SDR0_SDSTP0_FWDVA_SHIFT  (31 - 23)
#define PPC440GX_SDR0_SDSTP0_FWDVB_MASK   _BITFIELD32B(26, 0x7)
#define PPC440GX_SDR0_SDSTP0_FWDVB_SHIFT  (31 - 26)
#define PPC440GX_SDR0_SDSTP0_PRBDV0_MASK  _BITFIELD32B(29, 0x7)
#define PPC440GX_SDR0_SDSTP0_PRBDV0_SHIFT (31 - 29)
#define PPC440GX_SDR0_SDSTP0_OPBDV0_MASK  _BITFIELD32B(31, 0x3)
#define PPC440GX_SDR0_SDSTP0_OPBDV0_SHIFT (31 - 31)

#define PPC440GX_SDR0_SDSTP1_LFBDV_MASK   _BITFIELD32B(5, 0x3f)
#define PPC440GX_SDR0_SDSTP1_LFBDV_SHIFT  (31 - 5)
#define PPC440GX_SDR0_SDSTP1_PERDV0_MASK  _BITFIELD32B(7, 0x3)
#define PPC440GX_SDR0_SDSTP1_PERDV0_SHIFT (31 - 7)

/*
 * DCR values
 */

#define PPC440_DCR_EBC0_CFGADDR           0x012
#define PPC440_DCR_EBC0_CFGDATA           0x013

#define PPC440_DCRBASE_UIC0               0x0c0
#define PPC440_DCRBASE_UIC1               0x0d0
/* on 440GX */
#define PPC440_DCRBASE_UIC2               0x210
#define PPC440_DCRBASE_UICB0              0x200

/* on 440EPX */
#define PPC440EPX_DCR_MAL0_TXTATTRR       0x188
#define PPC440EPX_DCR_MAL0_TXBADDR        0x189
#define PPC440EPX_DCR_MAL0_RXTATTRR       0x194
#define PPC440EPX_DCR_MAL0_RXBADDR        0x195

#define PPC440_DCR_UIC0_SR                PPCIBM_DCR_UIC_SR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_ER                PPCIBM_DCR_UIC_ER(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_CR                PPCIBM_DCR_UIC_CR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_PR                PPCIBM_DCR_UIC_PR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_TR                PPCIBM_DCR_UIC_TR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_MSR               PPCIBM_DCR_UIC_MSR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_VCR               PPCIBM_DCR_UIC_VCR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC0_VR                PPCIBM_DCR_UIC_VR(PPC440_DCRBASE_UIC0)
#define PPC440_DCR_UIC1_SR                PPCIBM_DCR_UIC_SR(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_ER                PPCIBM_DCR_UIC_ER(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_CR                PPCIBM_DCR_UIC_CR(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_PR                PPCIBM_DCR_UIC_PR(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_TR                PPCIBM_DCR_UIC_TR(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_MSR               PPCIBM_DCR_UIC_MSR(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_VCR               PPCIBM_DCR_UIC_VCR(PPC440_DCRBASE_UIC1)
#define PPC440_DCR_UIC1_VR                PPCIBM_DCR_UIC_VR(PPC440_DCRBASE_UIC1)

#define PPC440_DCR_UIC2_SR                PPCIBM_DCR_UIC_SR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_ER                PPCIBM_DCR_UIC_ER(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_CR                PPCIBM_DCR_UIC_CR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_PR                PPCIBM_DCR_UIC_PR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_TR                PPCIBM_DCR_UIC_TR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_MSR               PPCIBM_DCR_UIC_MSR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_VCR               PPCIBM_DCR_UIC_VCR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UIC2_VR                PPCIBM_DCR_UIC_VR(PPC440_DCRBASE_UIC2)
#define PPC440_DCR_UICB0_SR               PPCIBM_DCR_UIC_SR(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_ER               PPCIBM_DCR_UIC_ER(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_CR               PPCIBM_DCR_UIC_CR(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_PR               PPCIBM_DCR_UIC_PR(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_TR               PPCIBM_DCR_UIC_TR(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_MSR              PPCIBM_DCR_UIC_MSR(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_VCR              PPCIBM_DCR_UIC_VCR(PPC440_DCRBASE_UICB0)
#define PPC440_DCR_UICB0_VR               PPCIBM_DCR_UIC_VR(PPC440_DCRBASE_UICB0)

#define PPC440_DCR_CPC0_SYS0              0xe0
#define PPC440_DCR_CPC0_SYS1              0xe1
#define PPC440_DCR_CPC0_CUST0             0xe2
#define PPC440_DCR_CPC0_CUST1             0xe3
#define PPC440_DCR_CPC0_STRP0             0xe4
#define PPC440_DCR_CPC0_STRP1             0xe5
#define PPC440_DCR_CPC0_STRP2             0xe6
#define PPC440_DCR_CPC0_STRP3             0xe7
#define PPC440_DCR_CPC0_GPIO              0xe8
#define PPC440_DCR_CPC0_PLB               0xe9
#define PPC440_DCR_CPC0_CR1               0xea
#define PPC440_DCR_CPC0_CR0               0xeb
#define PPC440_DCR_CPC0_MIRQ0             0xec
#define PPC440_DCR_CPC0_MIRQ1             0xed
#define PPC440_DCR_CPC0_RST               0xee
#define PPC440_DCR_CPC0_JTAGID            0xef

#define PPC440GP_DCR_CPC0_SYS0            PPC440_DCR_CPC0_SYS0
#define PPC440GP_DCR_CPC0_SYS1            PPC440_DCR_CPC0_SYS1
#define PPC440GP_DCR_CPC0_CUST0           PPC440_DCR_CPC0_CUST0
#define PPC440GP_DCR_CPC0_CUST1           PPC440_DCR_CPC0_CUST1
#define PPC440GP_DCR_CPC0_STRP0           PPC440_DCR_CPC0_STRP0
#define PPC440GP_DCR_CPC0_STRP1           PPC440_DCR_CPC0_STRP1
#define PPC440GP_DCR_CPC0_STRP2           PPC440_DCR_CPC0_STRP2
#define PPC440GP_DCR_CPC0_STRP3           PPC440_DCR_CPC0_STRP3

/*
 * CPC0 Control Register 0 defination
 */
#define PPC440_CPC0_CR0_SWE               _ONEBIT32B(0)
#define PPC440_CPC0_CR0_CETE              _ONEBIT32B(1)
#define PPC440_CPC0_CR0_U1FCS             _ONEBIT32B(2)
#define PPC440_CPC0_CR0_U0DTE             _ONEBIT32B(3)
#define PPC440_CPC0_CR0_U0DRE             _ONEBIT32B(4)
#define PPC440_CPC0_CR0_U0DC              _ONEBIT32B(5)
#define PPC440_CPC0_CR0_U1DTE             _ONEBIT32B(6)
#define PPC440_CPC0_CR0_U1DRE             _ONEBIT32B(7)
#define PPC440_CPC0_CR0_U1DC              _ONEBIT32B(8)
#define PPC440_CPC0_CR0_U0EC              _ONEBIT32B(9)
#define PPC440_CPC0_CR0_U1EC              _ONEBIT32B(10)

/*
 * Indirect via EBC0_CFGADDR/EBC0_CFGDATA registers
 */
#define PPC440_EBC0_B0CR                  0x00
#define PPC440_EBC0_B1CR                  0x01
#define PPC440_EBC0_B2CR                  0x02
#define PPC440_EBC0_B3CR                  0x03
#define PPC440_EBC0_B4CR                  0x04
#define PPC440_EBC0_B5CR                  0x05
#define PPC440_EBC0_B6CR                  0x06
#define PPC440_EBC0_B7CR                  0x07
#define PPC440_EBC0_B0AP                  0x10
#define PPC440_EBC0_B1AP                  0x11
#define PPC440_EBC0_B2AP                  0x12
#define PPC440_EBC0_B3AP                  0x13
#define PPC440_EBC0_B4AP                  0x14
#define PPC440_EBC0_B5AP                  0x15
#define PPC440_EBC0_B6AP                  0x16
#define PPC440_EBC0_B7AP                  0x17
#define PPC440_EBC0_BEAR                  0x20
#define PPC440_EBC0_BESR                  0x21
#define PPC440_EBC0_CFG                   0x23
#define PPC440_EBC0_CID                   0x24

/*
 * Memory mapping for 440EPX
 */
#define PPC440EPX_ZMII_BASE               0x1ef600d00

#define PPC440EPX_EMAC0_BASE              0x1ef600e00

#define PPC440EPX_RGMII_BASE              0x1ef601000
#define PPC440EPX_RGMII_FER               0x00
#define PPC440EPX_RGMII_SSR               0x04

#endif

/* __SRCVERSION("440cpu.h $Rev: 153052 $"); */
