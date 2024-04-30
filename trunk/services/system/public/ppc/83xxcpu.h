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
 *  ppc/83xxcpu.h
 *
 * Registers specific to the Freescale MPC83xx chip
 *

 */

#ifndef __PPC_83xxCPU_H_INCLUDED
#define __PPC_83xxCPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

/* PPC603 is the core of PPC8260 */
#ifndef __PPC_603CPU_H_INCLUDED
#include _NTO_HDR_(ppc / 603cpu.h)
#endif

/*
 * Internal Memory Map Register
 */
#define PPC83xx_IMMR_ISB_MASK               _BITFIELD32B(11, 0xFFF)
#define PPC83xx_IMMR_ISB(x)                 _BITFIELD32B(11, x)
#define PPC83xx_IMMR_ISB_SHIFT              (31 - 11)

/*
 * Reset Module Register
 */
#define PPC83xx_RCWLR_LBIUCM                _ONEBIT32B(0)
#define PPC83xx_RCWLR_DDRCM                 _ONEBIT32B(1)
#define PPC83xx_RCWLR_SPMF_MASK             _BITFIELD32B(7, 0xF)
#define PPC83xx_RCWLR_SPMF_SHIFT            (31 - 7)
#define PPC83xx_RCWLR_COREPLL_MASK          _BITFIELD32B(15, 0xF)
#define PPC83xx_RCWLR_COREPLL_SHIFT         (31 - 15)

#define PPC83xx_RCWHR_PCIHOST               _ONEBIT32B(0)

/*
 * Clock Module Register
 */
#define PPC83xx_SPMR_LBIUCM                 _ONEBIT32B(0)
#define PPC83xx_SPMR_DDRCM                  _ONEBIT32B(1)
#define PPC83xx_SPMR_SPMF_MASK              _BITFIELD32B(7, 0xF)
#define PPC83xx_SPMR_SPMF_SHIFT             (31 - 7)
#define PPC83xx_SPMR_CKID                   _ONEBIT32B(8)
#define PPC83xx_SPMR_CKID_SHIFT             (31 - 8)
#define PPC83xx_SPMR_COREPLL_MASK           _BITFIELD32B(15, 0xF)
#define PPC83xx_SPMR_COREPLL_SHIFT          (31 - 15)

/*
 * DDR Memory Controller Register
 */
#define PPC83xx_CSx_BNDS_SA_MASK            _BITFIELD32B(15, 0xFF)
#define PPC83xx_CSx_BNDS_SA_SHIFT           8  /* Left shif to get start address */
#define PPC83xx_CSx_BNDS_EA_MASK            _BITFIELD32B(31, 0xFF)
#define PPC83xx_CSx_BNDS_EA_SHIFT           24 /* Left shif to get end address */
#define PPC83xx_CSx_CONFIG_CSEN             _ONEBIT32B(0)
#define PPC83xx_CSx_CONFIG_APEN             _ONEBIT32B(8)

/*
 * Memory mapped registers based off of IMMR
 */
#define PPC83xx_IMMR_OFF_SYSCON             0x00000
#define PPC83xx_IMMR_OFF_IMMRBAR            0x00000
#define PPC83xx_IMMR_OFF_ALTCBAR            0x00008
#define PPC83xx_IMMR_OFF_LBLAWBAR0          0x00020
#define PPC83xx_IMMR_OFF_LBLAWAR0           0x00024
#define PPC83xx_IMMR_OFF_LBLAWBAR1          0x00028
#define PPC83xx_IMMR_OFF_LBLAWAR1           0x0002C
#define PPC83xx_IMMR_OFF_LBLAWBAR2          0x00030
#define PPC83xx_IMMR_OFF_LBLAWAR2           0x00034
#define PPC83xx_IMMR_OFF_LBLAWBAR3          0x00038
#define PPC83xx_IMMR_OFF_LBLAWAR3           0x0003C
#define PPC83xx_IMMR_OFF_PCILAWBAR0         0x00060
#define PPC83xx_IMMR_OFF_PCILAWAR0          0x00064
#define PPC83xx_IMMR_OFF_PCILAWBAR1         0x00068
#define PPC83xx_IMMR_OFF_PCILAWAR1          0x0006C
#define PPC83xx_IMMR_OFF_DDRLAWBAR0         0x000A0
#define PPC83xx_IMMR_OFF_DDRLAWAR0          0x000A4
#define PPC83xx_IMMR_OFF_DDRLAWBAR1         0x000A8
#define PPC83xx_IMMR_OFF_DDRLAWAR1          0x000AC
#define PPC83xx_IMMR_OFF_SGPRL              0x00100
#define PPC83xx_IMMR_OFF_SGPRH              0x00104
#define PPC83xx_IMMR_OFF_SPRIDR             0x00108
#define PPC83xx_IMMR_OFF_SPCR               0x00110
#define PPC83xx_IMMR_OFF_SICRL              0x00114
#define PPC83xx_IMMR_OFF_SICRH              0x00118

#define PPC83xx_IMMR_OFF_WDT                0x00200
#define PPC83xx_IMMR_OFF_SWCRR              0x00204
#define PPC83xx_IMMR_OFF_SWCNR              0x00208
#define PPC83xx_IMMR_OFF_SWSRR              0x0020E

#define PPC83xx_IMMR_OFF_RTC                0x00300
#define PPC83xx_IMMR_OFF_RTCNR              0x00300
#define PPC83xx_IMMR_OFF_RTLDR              0x00304
#define PPC83xx_IMMR_OFF_RTPSR              0x00308
#define PPC83xx_IMMR_OFF_RTCTR              0x0030C
#define PPC83xx_IMMR_OFF_RTEVR              0x00310
#define PPC83xx_IMMR_OFF_RTALR              0x00314

#define PPC83xx_IMMR_OFF_PIT                0x00400
#define PPC83xx_IMMR_OFF_PTCNR              0x00400
#define PPC83xx_IMMR_OFF_PTLDR              0x00404
#define PPC83xx_IMMR_OFF_PTPSR              0x00408
#define PPC83xx_IMMR_OFF_PTPCR              0x0040C
#define PPC83xx_IMMR_OFF_PTEVR              0x00410

#define PPC83xx_IMMR_OFF_GTM1               0x00500
#define PPC83xx_IMMR_OFF_GTM2               0x00600

#define PPC83xx_IMMR_OFF_IPIC               0x00700
#define PPC83xx_IMMR_OFF_SICFR              0x00700
#define PPC83xx_IMMR_OFF_SIVCR              0x00704
#define PPC83xx_IMMR_OFF_SIPNR_H            0x00708
#define PPC83xx_IMMR_OFF_SIPNR_L            0x0070C
#define PPC83xx_IMMR_OFF_SIPRR_A            0x00710
#define PPC83xx_IMMR_OFF_SIPRR_D            0x0071C
#define PPC83xx_IMMR_OFF_SIMSR_H            0x00720
#define PPC83xx_IMMR_OFF_SIMSR_L            0x00724
#define PPC83xx_IMMR_OFF_SEPNR              0x0072C
#define PPC83xx_IMMR_OFF_SMPRR_A            0x00730
#define PPC83xx_IMMR_OFF_SMPRR_B            0x00734
#define PPC83xx_IMMR_OFF_SEMSR              0x00738
#define PPC83xx_IMMR_OFF_SECNR              0x0073C
#define PPC83xx_IMMR_OFF_SERSR              0x00740
#define PPC83xx_IMMR_OFF_SERMR              0x00744
#define PPC83xx_IMMR_OFF_SERCR              0x00748
#define PPC83xx_IMMR_OFF_SIFCR_H            0x00750
#define PPC83xx_IMMR_OFF_SIFCR_L            0x00754
#define PPC83xx_IMMR_OFF_SEFCR              0x00758
#define PPC83xx_IMMR_OFF_SERFR              0x0075C
#define PPC83xx_IMMR_OFF_SCVCR              0x00760
#define PPC83xx_IMMR_OFF_SMVCR              0x00764

#define PPC83xx_IMMR_OFF_SAR                0x00800
#define PPC83xx_IMMR_OFF_ACR                0x00800
#define PPC83xx_IMMR_OFF_ATR                0x00804
#define PPC83xx_IMMR_OFF_AER                0x0080C
#define PPC83xx_IMMR_OFF_AIDR               0x00810
#define PPC83xx_IMMR_OFF_AMR                0x00814
#define PPC83xx_IMMR_OFF_AEATR              0x00818
#define PPC83xx_IMMR_OFF_AEADR              0x0081C
#define PPC83xx_IMMR_OFF_AERR               0x00820

#define PPC83xx_IMMR_OFF_RESET              0x00900
#define PPC83xx_IMMR_OFF_RCWLR              0x00900
#define PPC83xx_IMMR_OFF_RCWHR              0x00904
#define PPC83xx_IMMR_OFF_RSR                0x00910
#define PPC83xx_IMMR_OFF_RMR                0x00914
#define PPC83xx_IMMR_OFF_RPR                0x00918
#define PPC83xx_IMMR_OFF_RCR                0x0091C
#define PPC83xx_IMMR_OFF_RCER               0x00920

#define PPC83xx_IMMR_OFF_CLOCK              0x00A00
#define PPC83xx_IMMR_OFF_SPMR               0x00A00
#define PPC83xx_IMMR_OFF_OCCR               0x00A04
#define PPC83xx_IMMR_OFF_SCCR               0x00A08

#define PPC83xx_IMMR_OFF_PMCM               0x00B00
#define PPC83xx_IMMR_OFF_PMCCR              0x00B00
#define PPC83xx_IMMR_OFF_PMCER              0x00B04
#define PPC83xx_IMMR_OFF_PMCMR              0x00B08

#define PPC83xx_IMMR_OFF_GPIO1              0x00C00
#define PPC83xx_IMMR_OFF_GP1DIR             0x00C00
#define PPC83xx_IMMR_OFF_GP1DR              0x00C04
#define PPC83xx_IMMR_OFF_GP1DAT             0x00C08
#define PPC83xx_IMMR_OFF_GP1IER             0x00C0C
#define PPC83xx_IMMR_OFF_GP1IMR             0x00C10
#define PPC83xx_IMMR_OFF_GP1ICR             0x00C14

#define PPC83xx_IMMR_OFF_GPIO2              0x00D00
#define PPC83xx_IMMR_OFF_GP2DIR             0x00D00
#define PPC83xx_IMMR_OFF_GP2DR              0x00D04
#define PPC83xx_IMMR_OFF_GP2DAT             0x00D08
#define PPC83xx_IMMR_OFF_GP2IER             0x00D0C
#define PPC83xx_IMMR_OFF_GP2IMR             0x00D10
#define PPC83xx_IMMR_OFF_GP2ICR             0x00D14

#define PPC83xx_IMMR_OFF_DLL                0x00F00
#define PPC83xx_IMMR_OFF_DLLOVR             0x01108
#define PPC83xx_IMMR_OFF_DLLSR              0x0110C
#define PPC83xx_IMMR_OFF_DLLCK              0x01110

#define PPC83xx_IMMR_OFF_DDRC               0x02000
#define PPC83xx_IMMR_OFF_CS0_BNDS           0x02000
#define PPC83xx_IMMR_OFF_CS1_BNDS           0x02008
#define PPC83xx_IMMR_OFF_CS2_BNDS           0x02010
#define PPC83xx_IMMR_OFF_CS3_BNDS           0x02018
#define PPC83xx_IMMR_OFF_CS0_CONFIG         0x02080
#define PPC83xx_IMMR_OFF_CS1_CONFIG         0x02084
#define PPC83xx_IMMR_OFF_CS2_CONFIG         0x02088
#define PPC83xx_IMMR_OFF_CS3_CONFIG         0x0208C
#define PPC83xx_IMMR_OFF_TIMING_CFG_1       0x02108
#define PPC83xx_IMMR_OFF_TIMING_CFG_2       0x0210C
#define PPC83xx_IMMR_OFF_DDR_SDRAM_CFG      0x02110
#define PPC83xx_IMMR_OFF_DDR_SDRAM_MODE     0x02118
#define PPC83xx_IMMR_OFF_DDR_SDRAM_INTERVAL 0x02124
#define PPC83xx_IMMR_OFF_DDR_SDRAM_CLK_CNTL 0x02130
#define PPC83xx_IMMR_OFF_DATA_ERR_INJECT_HI 0x02E00
#define PPC83xx_IMMR_OFF_DATA_ERR_INJECT_LO 0x02E04
#define PPC83xx_IMMR_OFF_ECC_ERR_INJECT     0x02E08
#define PPC83xx_IMMR_OFF_CAPTURE_DATA_HI    0x02E20
#define PPC83xx_IMMR_OFF_CAPTURE_DATA_LO    0x02E24
#define PPC83xx_IMMR_OFF_CAPTURE_ECC        0x02E28
#define PPC83xx_IMMR_OFF_ERR_DETECT         0x02E40
#define PPC83xx_IMMR_OFF_ERR_DISABLE        0x02E44
#define PPC83xx_IMMR_OFF_ERR_INT_EN         0x02E48
#define PPC83xx_IMMR_OFF_CAPTURE_ATTRIBUTES 0x02E4C
#define PPC83xx_IMMR_OFF_CAPTURE_ADDRESS    0x02E50
#define PPC83xx_IMMR_OFF_ERR_SBE            0x02E58

#define PPC83xx_IMMR_OFF_I2C1               0x03000
#define PPC83xx_IMMR_OFF_I2C1ADR            0x03000
#define PPC83xx_IMMR_OFF_I2C1FDR            0x03004
#define PPC83xx_IMMR_OFF_I2C1CR             0x03008
#define PPC83xx_IMMR_OFF_I2C1SR             0x0300C
#define PPC83xx_IMMR_OFF_I2C1DR             0x03010
#define PPC83xx_IMMR_OFF_I2C1DFSRR          0x03014

#define PPC83xx_IMMR_OFF_I2C2               0x03100
#define PPC83xx_IMMR_OFF_I2C2ADR            0x03100
#define PPC83xx_IMMR_OFF_I2C2FDR            0x03104
#define PPC83xx_IMMR_OFF_I2C2CR             0x03108
#define PPC83xx_IMMR_OFF_I2C2SR             0x0310C
#define PPC83xx_IMMR_OFF_I2C2DR             0x03110
#define PPC83xx_IMMR_OFF_I2C2DFSRR          0x03114

#define PPC83xx_IMMR_OFF_DUART              0x04500

#define PPC83xx_IMMR_OFF_LBC                0x05000
#define PPC83xx_IMMR_OFF_BR0                0x05000
#define PPC83xx_IMMR_OFF_OR0                0x05004
#define PPC83xx_IMMR_OFF_BR1                0x05008
#define PPC83xx_IMMR_OFF_OR1                0x0500C
#define PPC83xx_IMMR_OFF_BR2                0x05010
#define PPC83xx_IMMR_OFF_OR2                0x05014
#define PPC83xx_IMMR_OFF_BR3                0x05018
#define PPC83xx_IMMR_OFF_OR3                0x0501C
#define PPC83xx_IMMR_OFF_MAR                0x05068
#define PPC83xx_IMMR_OFF_MAMR               0x05070
#define PPC83xx_IMMR_OFF_MBMR               0x05074
#define PPC83xx_IMMR_OFF_MCMR               0x05078
#define PPC83xx_IMMR_OFF_MRTPR              0x05084
#define PPC83xx_IMMR_OFF_MDR                0x05088
#define PPC83xx_IMMR_OFF_LSDMR              0x05094
#define PPC83xx_IMMR_OFF_LURT               0x050A0
#define PPC83xx_IMMR_OFF_LSRT               0x050A4
#define PPC83xx_IMMR_OFF_LTESR              0x050B0
#define PPC83xx_IMMR_OFF_LTEDR              0x050B4
#define PPC83xx_IMMR_OFF_LTEIR              0x050B8
#define PPC83xx_IMMR_OFF_LTEATR             0x050BC
#define PPC83xx_IMMR_OFF_LTEAR              0x050C0
#define PPC83xx_IMMR_OFF_LBCR               0x050D0
#define PPC83xx_IMMR_OFF_LCRR               0x050D4

#define PPC83xx_IMMR_OFF_SPI                0x07000
#define PPC83xx_IMMR_OFF_SPMODE             0x07020
#define PPC83xx_IMMR_OFF_SPIE               0x07024
#define PPC83xx_IMMR_OFF_SPIM               0x07028
#define PPC83xx_IMMR_OFF_SPCOM              0x0702C
#define PPC83xx_IMMR_OFF_SPITD              0x07030
#define PPC83xx_IMMR_OFF_SPIRD              0x07034

#define PPC83xx_IMMR_OFF_DMAC               0x08000
#define PPC83xx_IMMR_OFF_OMISR              0x08030
#define PPC83xx_IMMR_OFF_OMIMR              0x08034
#define PPC83xx_IMMR_OFF_IMR0               0x08050
#define PPC83xx_IMMR_OFF_IMR1               0x08054
#define PPC83xx_IMMR_OFF_OMR0               0x08058
#define PPC83xx_IMMR_OFF_OMR1               0x0805C
#define PPC83xx_IMMR_OFF_ODR                0x08060
#define PPC83xx_IMMR_OFF_IDR                0x08068
#define PPC83xx_IMMR_OFF_IMISR              0x08080
#define PPC83xx_IMMR_OFF_IMIMR              0x08084
#define PPC83xx_IMMR_OFF_DMAMR0             0x08100
#define PPC83xx_IMMR_OFF_DMASR0             0x08104
#define PPC83xx_IMMR_OFF_DMACDAR0           0x08108
#define PPC83xx_IMMR_OFF_DMASAR0            0x08110
#define PPC83xx_IMMR_OFF_DMADAR0            0x08118
#define PPC83xx_IMMR_OFF_DMABCR0            0x08120
#define PPC83xx_IMMR_OFF_DMANDAR0           0x08124
#define PPC83xx_IMMR_OFF_DMAMR1             0x08180
#define PPC83xx_IMMR_OFF_DMASR1             0x08184
#define PPC83xx_IMMR_OFF_DMACDAR1           0x08188
#define PPC83xx_IMMR_OFF_DMASAR1            0x08190
#define PPC83xx_IMMR_OFF_DMADAR1            0x08198
#define PPC83xx_IMMR_OFF_DMABCR1            0x081A0
#define PPC83xx_IMMR_OFF_DMANDAR1           0x081A4
#define PPC83xx_IMMR_OFF_DMAMR2             0x08200
#define PPC83xx_IMMR_OFF_DMASR2             0x08204
#define PPC83xx_IMMR_OFF_DMACDAR2           0x08208
#define PPC83xx_IMMR_OFF_DMASAR2            0x08210
#define PPC83xx_IMMR_OFF_DMADAR2            0x08218
#define PPC83xx_IMMR_OFF_DMABCR2            0x08220
#define PPC83xx_IMMR_OFF_DMANDAR2           0x08224
#define PPC83xx_IMMR_OFF_DMAMR3             0x08280
#define PPC83xx_IMMR_OFF_DMASR3             0x08284
#define PPC83xx_IMMR_OFF_DMACDAR3           0x08288
#define PPC83xx_IMMR_OFF_DMASAR3            0x08290
#define PPC83xx_IMMR_OFF_DMADAR3            0x08298
#define PPC83xx_IMMR_OFF_DMABCR3            0x082A0
#define PPC83xx_IMMR_OFF_DMANDAR3           0x082A4
#define PPC83xx_IMMR_OFF_DMAGSR             0x082A8

#define PPC83xx_IMMR_OFF_PCI1_CONFIG        0x08300

#define PPC83xx_IMMR_OFF_USB_MPH            0x22000
#define PPC83xx_IMMR_OFF_USB_DR             0x23000

/* default immr location for neutrino */
#define PPC83xx_IMMR_ISB_DEFAULT            0xFF400000
#define PPC83xx_IMMR(immr, reg, size)       (*(volatile uint##size##_t*)(immr + PPC83xx_IMMR_OFF_##reg))

#endif

/* __SRCVERSION("83xxcpu.h $Rev: 153052 $"); */
