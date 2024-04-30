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
 *  ppc/800cpu.h
 *
 * Registers specific to the Motorola PPC 800 chip
 *

 */

#ifndef __PPC_800CPU_H_INCLUDED
#define __PPC_800CPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

/*
 * SIU Module Configuration Register
 */
#define PPC800_SIUMCR_EARB            _ONEBIT32B(0)
#define PPC800_SIUMCR_EARP_MASK       _BITFIELD32B(3, 0x7)
#define PPC800_SIUMCR_EARP_SHIFT      (31 - 3)
#define PPC800_SIUMCR_DSHW            _ONEBIT32B(8)
#define PPC800_SIUMCR_DBGC_MASK       _BITFIELD32B(10, 0x3)
#define PPC800_SIUMCR_DBGC_00         _BITFIELD32B(10, 0x0)
#define PPC800_SIUMCR_DBGC_01         _BITFIELD32B(10, 0x1)
#define PPC800_SIUMCR_DBGC_11         _BITFIELD32B(10, 0x3)
#define PPC800_SIUMCR_DBPC_MASK       _BITFIELD32B(12, 0x3)
#define PPC800_SIUMCR_DBPC_00         _BITFIELD32B(12, 0x0)
#define PPC800_SIUMCR_DBPC_01         _BITFIELD32B(12, 0x1)
#define PPC800_SIUMCR_DBPC_11         _BITFIELD32B(12, 0x3)
#define PPC800_SIUMCR_FRC             _ONEBIT32B(14)
#define PPC800_SIUMCR_DLK             _ONEBIT32B(15)
#define PPC800_SIUMCR_PNCS            _ONEBIT32B(16)
#define PPC800_SIUMCR_OPAR            _ONEBIT32B(17)
#define PPC800_SIUMCR_DPC             _ONEBIT32B(18)
#define PPC800_SIUMCR_MPRE            _ONEBIT32B(19)
#define PPC800_SIUMCR_MLRC_MASK       _BITFIELD32B(21, 0x3)
#define PPC800_SIUMCR_MLRC_00         _BITFIELD32B(21, 0x0)
#define PPC800_SIUMCR_MLRC_01         _BITFIELD32B(21, 0x1)
#define PPC800_SIUMCR_MLRC_10         _BITFIELD32B(21, 0x2)
#define PPC800_SIUMCR_MLRC_11         _BITFIELD32B(21, 0x3)
#define PPC800_SIUMCR_AEME            _ONEBIT32B(22)
#define PPC800_SIUMCR_SEME            _ONEBIT32B(23)
#define PPC800_SIUMCR_BSC             _ONEBIT32B(24)
#define PPC800_SIUMCR_GB5E            _ONEBIT32B(25)
#define PPC800_SIUMCR_B2DD            _ONEBIT32B(26)
#define PPC800_SIUMCR_B3DD            _ONEBIT32B(27)

/*
 * Internal Memory Map Register
 */
#define PPC800_IMMR_ISB_MASK          _BITFIELD32B(15, 0xffff)
#define PPC800_IMMR_ISB_SHIFT         (31 - 15)
#define PPC800_IMMR_PARTNUM_MASK      _BITFIELD32B(23, 0xff)
#define PPC800_IMMR_PARTNUM_SHIFT     (31 - 23)
#define PPC800_IMMR_MASKNUM_MASK      _BITFIELD32B(31, 0xff)
#define PPC800_IMMR_MASKNUM_SHIFT     (31 - 31)

#define PPC800_GET_PARTNUM            ((get_spr(PPC800_SPR_IMMR) & PPC800_IMMR_PARTNUM_MASK) >> PPC800_IMMR_PARTNUM_SHIFT)

/* CPU Part Num inside MMR */
#define PPC800_PARTNUM_823            0x20
#define PPC800_PARTNUM_860_821        0x0

/*
 * System Protection Control Register
 */
#define PPC800_SYPCR_SWTC_MASK        _BITFIELD32B(15, 0xffff)
#define PPC800_SYPCR_SWTC_SHIFT       (31 - 15)
#define PPC800_SYPCR_BMT_MASK         _BITFIELD32B(23, 0xff)
#define PPC800_SYPCR_BMT_SHIFT        (31 - 23)
#define PPC800_SYPCR_BME              _ONEBIT32B(24)
#define PPC800_SYPCR_SWF              _ONEBIT32B(28)
#define PPC800_SYPCR_SWE              _ONEBIT32B(29)
#define PPC800_SYPCR_SWRI             _ONEBIT32B(30)
#define PPC800_SYPCR_SWP              _ONEBIT32B(31)

/*
 * Software Service Register
 */
#define PPC800_SWSR_VALUE1            0x556c
#define PPC800_SWSR_VALUE2            0xaa39

/*
 * Key registers
 */
#define PPC800_KEY_OPEN_VALUE         0x55ccaa33

/*
 * Transfer Error Status Register
 */
#define PPC800_TESR_IEXT              _ONEBIT32B(18)
#define PPC800_TESR_IBM               _ONEBIT32B(19)
#define PPC800_TESR_IPB0              _ONEBIT32B(20)
#define PPC800_TESR_IPB1              _ONEBIT32B(21)
#define PPC800_TESR_IPB2              _ONEBIT32B(22)
#define PPC800_TESR_IPB3              _ONEBIT32B(23)
#define PPC800_TESR_DEXT              _ONEBIT32B(26)
#define PPC800_TESR_DBM               _ONEBIT32B(27)
#define PPC800_TESR_DPB0              _ONEBIT32B(28)
#define PPC800_TESR_DPB1              _ONEBIT32B(29)
#define PPC800_TESR_DPB2              _ONEBIT32B(30)
#define PPC800_TESR_DPB3              _ONEBIT32B(31)

/*
 * Timebase Control and Status Register
 */
#define PPC800_TBSCR_TBIRQ_MASK       _BITFIELD16B(7, 0xff)
#define PPC800_TBSCR_TBIRQ_SHIFT      (15 - 7)
#define PPC800_TBSCR_REFA             _ONEBIT16B(8)
#define PPC800_TBSCR_REFB             _ONEBIT16B(9)
#define PPC800_TBSCR_REFAE            _ONEBIT16B(12)
#define PPC800_TBSCR_REFBE            _ONEBIT16B(13)
#define PPC800_TBSCR_TBF              _ONEBIT16B(14)
#define PPC800_TBSCR_TBE              _ONEBIT32B(15)

/*
 * Realtime Clock Status and Control Register
 */
#define PPC800_RTCSC_RTCIRQ_MASK      _BITFIELD16B(7, 0xff)
#define PPC800_RTCSC_RTCIRQ_SHIFT     (15 - 7)
#define PPC800_RTCSC_SEC              _ONEBIT16B(8)
#define PPC800_RTCSC_ALR              _ONEBIT16B(9)
#define PPC800_RTCSC_38K              _ONEBIT16B(11)
#define PPC800_RTCSC_SIE              _ONEBIT16B(12)
#define PPC800_RTCSC_ALE              _ONEBIT16B(13)
#define PPC800_RTCSC_RTF              _ONEBIT16B(14)
#define PPC800_RTCSC_RTE              _ONEBIT16B(15)

/*
 * Periodic Interrupt Status and Control Register
 */
#define PPC800_PISCR_PIRQ_MASK        _BITFIELD16B(7, 0xff)
#define PPC800_PISCR_PIRQ_SHIFT       (15 - 7)
#define PPC800_PISCR_PS               _ONEBIT16B(8)
#define PPC800_PISCR_PIE              _ONEBIT16B(13)
#define PPC800_PISCR_PITF             _ONEBIT16B(14)
#define PPC800_PISCR_PTE              _ONEBIT16B(15)

/*
 * System Clock and Reset Control Register
 */
#define PPC800_SCCR_COM_MASK          _BITFIELD32B(2, 0x3)
#define PPC800_SCCR_COM_FULL          _BITFIELD32B(2, 0x0)
#define PPC800_SCCR_COM_HALF          _BITFIELD32B(2, 0x1)
#define PPC800_SCCR_COM_DISABLED      _BITFIELD32B(2, 0x3)
#define PPC800_SCCR_TBS               _ONEBIT32B(6)
#define PPC800_SCCR_RTDIV             _ONEBIT32B(7)
#define PPC800_SCCR_RTSEL             _ONEBIT32B(8)
#define PPC800_SCCR_CRQEN             _ONEBIT32B(9)
#define PPC800_SCCR_PRQEN             _ONEBIT32B(10)
#define PPC800_SCCR_EBDF_MASK         _BITFIELD32B(14, 0x3)
#define PPC800_SCCR_EBDF_DIV1         _BITFIELD32B(14, 0x0)
#define PPC800_SCCR_EBDF_DIV2         _BITFIELD32B(14, 0x1)
#define PPC800_SCCR_DFSYNC_MASK       _BITFIELD32B(18, 0x3)
#define PPC800_SCCR_DFSYNC_DIV1       _BITFIELD32B(18, 0x0)
#define PPC800_SCCR_DFSYNC_DIV4       _BITFIELD32B(18, 0x1)
#define PPC800_SCCR_DFSYNC_DIV16      _BITFIELD32B(18, 0x2)
#define PPC800_SCCR_DFSYNC_DIV64      _BITFIELD32B(18, 0x3)
#define PPC800_SCCR_DFBRG_MASK        _BITFIELD32B(20, 0x3)
#define PPC800_SCCR_DFBRG_DIV1        _BITFIELD32B(20, 0x0)
#define PPC800_SCCR_DFBRG_DIV4        _BITFIELD32B(20, 0x1)
#define PPC800_SCCR_DFBRG_DIV16       _BITFIELD32B(20, 0x2)
#define PPC800_SCCR_DFBRG_DIV64       _BITFIELD32B(20, 0x3)
#define PPC800_SCCR_DFNL_MASK         _BITFIELD32B(23, 0x7)
#define PPC800_SCCR_DFNL_DIV2         _BITFIELD32B(23, 0x0)
#define PPC800_SCCR_DFNL_DIV4         _BITFIELD32B(23, 0x1)
#define PPC800_SCCR_DFNL_DIV8         _BITFIELD32B(23, 0x2)
#define PPC800_SCCR_DFNL_DIV16        _BITFIELD32B(23, 0x3)
#define PPC800_SCCR_DFNL_DIV32        _BITFIELD32B(23, 0x4)
#define PPC800_SCCR_DFNL_DIV64        _BITFIELD32B(23, 0x5)
#define PPC800_SCCR_DFNL_DIV256       _BITFIELD32B(23, 0x7)
#define PPC800_SCCR_DFNH_MASK         _BITFIELD32B(26, 0x7)
#define PPC800_SCCR_DFNH_DIV1         _BITFIELD32B(26, 0x0)
#define PPC800_SCCR_DFNH_DIV2         _BITFIELD32B(26, 0x1)
#define PPC800_SCCR_DFNH_DIV4         _BITFIELD32B(26, 0x2)
#define PPC800_SCCR_DFNH_DIV8         _BITFIELD32B(26, 0x3)
#define PPC800_SCCR_DFNH_DIV16        _BITFIELD32B(26, 0x4)
#define PPC800_SCCR_DFNH_DIV32        _BITFIELD32B(26, 0x5)
#define PPC800_SCCR_DFNH_DIV64        _BITFIELD32B(26, 0x6)

/*
 * PLL, Low power, and Reset Control Register
 */
#define PPC800_PLPRCR_MF_MASK         _BITFIELD32B(11, 0xfff)
#define PPC800_PLPRCR_MF_SHIFT        (31 - 11)
#define PPC800_PLPRCR_SPLSS           _ONEBIT32B(16)
#define PPC800_PLPRCR_TEXPS           _ONEBIT32B(17)
#define PPC800_PLPRCR_TMIST           _ONEBIT32B(19)
#define PPC800_PLPRCR_CSRC            _ONEBIT32B(21)
#define PPC800_PLPRCR_LPM_MASK        _BITFIELD32B(23, 0x3)
#define PPC800_PLPRCR_LPM_SHIFT       (31 - 23)
#define PPC800_PLPRCR_LPM_NORMAL      _BITFIELD32B(23, 0x0)
#define PPC800_PLPRCR_LPM_DOZE        _BITFIELD32B(23, 0x1)
#define PPC800_PLPRCR_LPM_SLEEP       _BITFIELD32B(23, 0x2)
#define PPC800_PLPRCR_LPM_DEEP_SLEEP  _BITFIELD32B(23, 0x3)
#define PPC800_PLPRCR_CSR             _ONEBIT32B(24)
#define PPC800_PLPRCR_LOLRE           _ONEBIT32B(25)
#define PPC800_PLPRCR_FIOPD           _ONEBIT32B(26)

/*
 * SPR numbers
 */
#define PPC800_SPR_EIE                80
#define PPC800_SPR_EID                81
#define PPC800_SPR_NRI                82
#define PPC800_SPR_CMPA               144
#define PPC800_SPR_CMPB               145
#define PPC800_SPR_CMPC               146
#define PPC800_SPR_CMPD               147
#define PPC800_SPR_ICR                148
#define PPC800_SPR_DER                149
#define PPC800_SPR_COUNTA             150
#define PPC800_SPR_COUNTB             151
#define PPC800_SPR_CMPE               152
#define PPC800_SPR_CMPF               153
#define PPC800_SPR_CMPG               154
#define PPC800_SPR_CMPH               155
#define PPC800_SPR_LCTRL1             156
#define PPC800_SPR_LCTRL2             157
#define PPC800_SPR_ICTRL              158
#define PPC800_SPR_BAR                159
#define PPC800_SPR_DPDR               630
#define PPC800_SPR_DPIR               631
#define PPC800_SPR_IMMR               638
#define PPC800_SPR_IC_CST             560
#define PPC800_SPR_IC_ADR             561
#define PPC800_SPR_IC_DAT             562
#define PPC800_SPR_DC_CST             568
#define PPC800_SPR_DC_ADR             569
#define PPC800_SPR_DC_DAT             570
#define PPC800_SPR_MI_CTR             784
#define PPC800_SPR_MI_AP              786
#define PPC800_SPR_MI_EPN             787
#define PPC800_SPR_MI_TWC             789
#define PPC800_SPR_MI_RPN             790
#define PPC800_SPR_MI_DBCAM           816
#define PPC800_SPR_MI_DBRAM0          817
#define PPC800_SPR_MI_DBRAM1          818
#define PPC800_SPR_MD_CTR             792
#define PPC800_SPR_M_CASID            793
#define PPC800_SPR_MD_AP              794
#define PPC800_SPR_MD_EPN             795
#define PPC800_SPR_M_TWB              796
#define PPC800_SPR_MD_TWC             797
#define PPC800_SPR_MD_RPN             798
#define PPC800_SPR_M_TW               799
#define PPC800_SPR_MD_DBCAM           824
#define PPC800_SPR_MD_DBRAM0          825
#define PPC800_SPR_MD_DBRAM1          826

/*
 * Exception table vectors
 */
#define PPC800_EXC_ID_SOFTEMU         (0x1000 / sizeof(uint32_t))
#define PPC800_EXC_ID_ITLB_MISS       (0x1100 / sizeof(uint32_t))
#define PPC800_EXC_ID_DTLB_MISS       (0x1200 / sizeof(uint32_t))
#define PPC800_EXC_ID_ITLB_ERR        (0x1300 / sizeof(uint32_t))
#define PPC800_EXC_ID_DTLB_ERR        (0x1400 / sizeof(uint32_t))
#define PPC800_EXC_ID_DBRKPT          (0x1c00 / sizeof(uint32_t))
#define PPC800_EXC_ID_IBRKPT          (0x1d00 / sizeof(uint32_t))
#define PPC800_EXC_ID_PBRKPT          (0x1e00 / sizeof(uint32_t))
#define PPC800_EXC_ID_NM_DEVPORT      (0x1f00 / sizeof(uint32_t))

/*
 * Memory mapped registers based off of IMMR
 */
#define PPC800_IMMR_SIUMCR            0x000
#define PPC800_IMMR_SYPCR             0x004
#define PPC800_IMMR_SWT               0x008
#define PPC800_IMMR_SWSR              0x00e
#define PPC800_IMMR_SIPEND            0x010
#define PPC800_IMMR_SIMASK            0x014
#define PPC800_IMMR_SIEL              0x018
#define PPC800_IMMR_SIVEC             0x01c
#define PPC800_IMMR_TESR              0x020
#define PPC800_IMMR_SDCR              0x030
#define PPC800_IMMR_PBR0              0x080
#define PPC800_IMMR_POR0              0x084
#define PPC800_IMMR_PBR1              0x088
#define PPC800_IMMR_POR1              0x08c
#define PPC800_IMMR_PBR2              0x090
#define PPC800_IMMR_POR2              0x094
#define PPC800_IMMR_PBR3              0x098
#define PPC800_IMMR_POR3              0x09c
#define PPC800_IMMR_PBR4              0x0a0
#define PPC800_IMMR_POR4              0x0a4
#define PPC800_IMMR_PBR5              0x0a8
#define PPC800_IMMR_POR5              0x0ac
#define PPC800_IMMR_PBR6              0x0b0
#define PPC800_IMMR_POR6              0x0b4
#define PPC800_IMMR_PBR7              0x0b8
#define PPC800_IMMR_POR7              0x0bc
#define PPC800_IMMR_PGCRA             0x0e0
#define PPC800_IMMR_PGCRB             0x0e4
#define PPC800_IMMR_PSCR              0x0e8
#define PPC800_IMMR_PIPR              0x0f0
#define PPC800_IMMR_PER               0x0f8
#define PPC800_IMMR_BR0               0x100
#define PPC800_IMMR_OR0               0x104
#define PPC800_IMMR_BR1               0x108
#define PPC800_IMMR_OR1               0x10c
#define PPC800_IMMR_BR2               0x110
#define PPC800_IMMR_OR2               0x114
#define PPC800_IMMR_BR3               0x118
#define PPC800_IMMR_OR3               0x11c
#define PPC800_IMMR_BR4               0x120
#define PPC800_IMMR_OR4               0x124
#define PPC800_IMMR_BR5               0x128
#define PPC800_IMMR_OR5               0x12c
#define PPC800_IMMR_BR6               0x130
#define PPC800_IMMR_OR6               0x134
#define PPC800_IMMR_BR7               0x138
#define PPC800_IMMR_OR7               0x13c
#define PPC800_IMMR_MAR               0x164
#define PPC800_IMMR_MCR               0x168
#define PPC800_IMMR_MAMR              0x170
#define PPC800_IMMR_MBMR              0x174
#define PPC800_IMMR_MSTAT             0x178
#define PPC800_IMMR_MPTPR             0x17a
#define PPC800_IMMR_MDR               0x17c
#define PPC800_IMMR_TBSCR             0x200
#define PPC800_IMMR_TBREFF0           0x204
#define PPC800_IMMR_TBREFF1           0x208
#define PPC800_IMMR_RTCSC             0x220
#define PPC800_IMMR_RTC               0x224
#define PPC800_IMMR_RTSEC             0x228
#define PPC800_IMMR_RTCAL             0x22c
#define PPC800_IMMR_PISCR             0x240
#define PPC800_IMMR_PITC              0x244
#define PPC800_IMMR_PITR              0x248
#define PPC800_IMMR_SCCR              0x280
#define PPC800_IMMR_PLPRCR            0x284
#define PPC800_IMMR_RSR               0x288
#define PPC800_IMMR_TBSCRK            0x300
#define PPC800_IMMR_TBREFF0K          0x304
#define PPC800_IMMR_TBREFF1K          0x308
#define PPC800_IMMR_TBK               0x30c
#define PPC800_IMMR_RTCSCK            0x320
#define PPC800_IMMR_RTCK              0x324
#define PPC800_IMMR_RTSECK            0x328
#define PPC800_IMMR_RTCALK            0x32c
#define PPC800_IMMR_PISCRK            0x340
#define PPC800_IMMR_PITCK             0x344
#define PPC800_IMMR_SCCRK             0x380
#define PPC800_IMMR_PLPRCRK           0x384
#define PPC800_IMMR_RSRK              0x388
#define PPC800_IMMR_LCCR              0x840
#define PPC800_IMMR_LCHCR             0x844
#define PPC800_IMMR_LCVCR             0x848
#define PPC800_IMMR_LCFAA             0x850
#define PPC800_IMMR_LCFBA             0x854
#define PPC800_IMMR_LCSR              0x858
#define PPC800_IMMR_I2MOD             0x860
#define PPC800_IMMR_I2ADD             0x864
#define PPC800_IMMR_I2BRG             0x868
#define PPC800_IMMR_I2COM             0x86c
#define PPC800_IMMR_I2CER             0x870
#define PPC800_IMMR_I2CMR             0x874
#define PPC800_IMMR_SDAR              0x904
#define PPC800_IMMR_SDSR              0x908
#define PPC800_IMMR_SDMR              0x90c
#define PPC800_IMMR_IDSR1             0x910
#define PPC800_IMMR_IDMR1             0x914
#define PPC800_IMMR_IDSR2             0x918
#define PPC800_IMMR_IDMR2             0x91c
#define PPC800_IMMR_CIVR              0x930
#define PPC800_IMMR_CICR              0x940
#define PPC800_IMMR_CIPR              0x944
#define PPC800_IMMR_CIMR              0x948
#define PPC800_IMMR_CISR              0x94c
#define PPC800_IMMR_PADIR             0x950
#define PPC800_IMMR_PAPAR             0x952
#define PPC800_IMMR_PAODR             0x954
#define PPC800_IMMR_PADAT             0x956
#define PPC800_IMMR_PCDIR             0x960
#define PPC800_IMMR_PCPAR             0x962
#define PPC800_IMMR_PCSO              0x964
#define PPC800_IMMR_PCDAT             0x966
#define PPC800_IMMR_PCINT             0x968
#define PPC800_IMMR_PDDIR             0x970
#define PPC800_IMMR_PDPAR             0x972
#define PPC800_IMMR_PDDAT             0x976
#define PPC800_IMMR_TGCR              0x980
#define PPC800_IMMR_TMR1              0x990
#define PPC800_IMMR_TMR2              0x992
#define PPC800_IMMR_TRR1              0x994
#define PPC800_IMMR_TRR2              0x996
#define PPC800_IMMR_TCR1              0x998
#define PPC800_IMMR_TCR2              0x99a
#define PPC800_IMMR_TCN1              0x99c
#define PPC800_IMMR_TCN2              0x99e
#define PPC800_IMMR_TMR3              0x9a0
#define PPC800_IMMR_TMR4              0x9a2
#define PPC800_IMMR_TRR3              0x9a4
#define PPC800_IMMR_TRR4              0x9a6
#define PPC800_IMMR_TCR3              0x9a8
#define PPC800_IMMR_TCR4              0x9aa
#define PPC800_IMMR_TCN3              0x9ac
#define PPC800_IMMR_TCN4              0x9ae
#define PPC800_IMMR_TER1              0x9b0
#define PPC800_IMMR_TER2              0x9b2
#define PPC800_IMMR_TER3              0x9b4
#define PPC800_IMMR_TER4              0x9b6
#define PPC800_IMMR_CPCR              0x9c0
#define PPC800_IMMR_RCCR              0x9c4
#define PPC800_IMMR_RMDS              0x9c7
#define PPC800_IMMR_RMDR              0x9c8
#define PPC800_IMMR_CPMCR1            0x9cc
#define PPC800_IMMR_CPMCR2            0x9ce
#define PPC800_IMMR_CPMCR3            0x9d0
#define PPC800_IMMR_CPMCR4            0x9d2
#define PPC800_IMMR_RTER              0x9d6
#define PPC800_IMMR_RTMR              0x9da
#define PPC800_IMMR_BRGC1             0x9f0
#define PPC800_IMMR_BRGC2             0x9f4
#define PPC800_IMMR_BRGC3             0x9f8
#define PPC800_IMMR_BRGC4             0x9fc
#define PPC800_IMMR_GSMR_L1           0xa00
#define PPC800_IMMR_GSMR_H1           0xa04
#define PPC800_IMMR_PSMR1             0xa08
#define PPC800_IMMR_TODR1             0xa0c
#define PPC800_IMMR_DSR1              0xa0e
#define PPC800_IMMR_SCCE1             0xa10
#define PPC800_IMMR_SCCM1             0xa14
#define PPC800_IMMR_SCCS1             0xa17
#define PPC800_IMMR_GSMR_L2           0xa20
#define PPC800_IMMR_GSMR_H2           0xa24
#define PPC800_IMMR_PSMR2             0xa28
#define PPC800_IMMR_TODR2             0xa2c
#define PPC800_IMMR_DSR2              0xa2e
#define PPC800_IMMR_SCCE2             0xa30
#define PPC800_IMMR_SCCM2             0xa34
#define PPC800_IMMR_SCCS2             0xa37
#define PPC800_IMMR_GSMR_L3           0xa40
#define PPC800_IMMR_GSMR_H3           0xa44
#define PPC800_IMMR_PSMR3             0xa48
#define PPC800_IMMR_TODR3             0xa4c
#define PPC800_IMMR_DSR3              0xa4e
#define PPC800_IMMR_SCCE3             0xa50
#define PPC800_IMMR_SCCM3             0xa54
#define PPC800_IMMR_SCCS3             0xa57
#define PPC800_IMMR_GSMR_L4           0xa60
#define PPC800_IMMR_GSMR_H4           0xa64
#define PPC800_IMMR_PSMR4             0xa68
#define PPC800_IMMR_TODR4             0xa6c
#define PPC800_IMMR_DSR4              0xa6e
#define PPC800_IMMR_SCCE4             0xa70
#define PPC800_IMMR_SCCM4             0xa74
#define PPC800_IMMR_SCCS4             0xa77
#define PPC800_IMMR_SMCMR1            0xa82
#define PPC800_IMMR_SMCE1             0xa86
#define PPC800_IMMR_SMCM1             0xa8a
#define PPC800_IMMR_SMCMR2            0xa92
#define PPC800_IMMR_SMCE2             0xa96
#define PPC800_IMMR_SMCM2             0xa9a
#define PPC800_IMMR_SPMODE            0xaa0
#define PPC800_IMMR_SPIE              0xaa6
#define PPC800_IMMR_SPIM              0xaaa
#define PPC800_IMMR_SPCOM             0xaad
#define PPC800_IMMR_PIPC              0xab2
#define PPC800_IMMR_PTPR              0xab6
#define PPC800_IMMR_PBDIR             0xab8
#define PPC800_IMMR_PBPAR             0xabc
#define PPC800_IMMR_PBODR             0xac2
#define PPC800_IMMR_PBDAT             0xac4
#define PPC800_IMMR_SIMODE            0xae0
#define PPC800_IMMR_SIGMR             0xae4
#define PPC800_IMMR_SISTR             0xae6
#define PPC800_IMMR_SICMR             0xae7
#define PPC800_IMMR_SICR              0xaec
#define PPC800_IMMR_SIRP              0xaf0
#define PPC800_IMMR_SIRAM             0xc00
#define PPC800_IMMR_LCOLR             0xe00
#define PPC800_IMMR_DPRAM             0x2000

#define PPC800_IMMR(reg, size)        (*(volatile uint##size##_t*)((get_spr(PPC800_SPR_IMMR) & PPC800_IMMR_ISB_MASK) + PPC800_IMMR_##reg))

/*
 * Level 1 descriptor
 */
#define PPC800_L1DESC_L2BA_MASK       _BITFIELD32B(19, 0xfffff)
#define PPC800_L1DESC_L2BA_SHIFT      (31 - 19)
#define PPC800_L1DESC_APG_MASK        _BITFIELD32B(26, 0xf)
#define PPC800_L1DESC_APG_SHIFT       (31 - 26)
#define PPC800_L1DESC_G               _ONEBIT32B(27)
#define PPC800_L1DESC_PS_MASK         _BITFIELD32B(29, 0x3)
#define PPC800_L1DESC_PS_SMALL        _BITFIELD32B(29, 0)
#define PPC800_L1DESC_PS_512K         _BITFIELD32B(29, 1)
#define PPC800_L1DESC_PS_8M           _BITFIELD32B(29, 3)
#define PPC800_L1DESC_WT              _ONEBIT32B(30)
#define PPC800_L1DESC_V               _ONEBIT32B(31)

/*
 * Level 2 descriptor
 */
#define PPC800_L2DESC_RPN_MASK        _BITFIELD32B(19, 0xfffff)
#define PPC800_L2DESC_RPN_SHIFT       (31 - 19)
#define PPC800_L2DESC_PP1_MASK        _BITFIELD32B(21, 0x3)
#define PPC800_L2DESC_PP1_SHIFT       (31 - 21)
#define PPC800_L2DESC_PP2_MASK        _BITFIELD32B(23, 0x3)
#define PPC800_L2DESC_PP2_SHIFT       (31 - 23)
#define PPC800_L2DESC_PP3_MASK        _BITFIELD32B(25, 0x3)
#define PPC800_L2DESC_PP3_SHIFT       (31 - 25)
#define PPC800_L2DESC_PP4_MASK        _BITFIELD32B(27, 0x3)
#define PPC800_L2DESC_PP4_SHIFT       (31 - 27)
#define PPC800_L2DESC_SPS             _ONEBIT32B(28)
#define PPC800_L2DESC_SH              _ONEBIT32B(29)
#define PPC800_L2DESC_CI              _ONEBIT32B(30)
#define PPC800_L2DESC_V               _ONEBIT32B(31)

/*
 * MMU Instruction Control Register
 */
#define PPC800_MICTR_GPM              _ONEBIT32B(0)
#define PPC800_MICTR_PPM              _ONEBIT32B(1)
#define PPC800_MICTR_CIDEF            _ONEBIT32B(2)
#define PPC800_MICTR_RSV2I            _ONEBIT32B(4)
#define PPC800_MICTR_PPCS             _ONEBIT32B(6)
#define PPC800_MICTR_INDX_MASK        _BITFIELD32B(23, 0x7)
#define PPC800_MICTR_INDX_SHIFT       (31 - 23)

/*
 * MMU Data Control Register
 */
#define PPC800_MDCTR_GPM              _ONEBIT32B(0)
#define PPC800_MDCTR_PPM              _ONEBIT32B(1)
#define PPC800_MDCTR_CIDEF            _ONEBIT32B(2)
#define PPC800_MDCTR_WTDEF            _ONEBIT32B(3)
#define PPC800_MDCTR_RSV2D            _ONEBIT32B(4)
#define PPC800_MDCTR_TWAN             _ONEBIT32B(5)
#define PPC800_MDCTR_PPCS             _ONEBIT32B(6)
#define PPC800_MDCTR_INDX_MASK        _BITFIELD32B(23, 0x7)
#define PPC800_MDCTR_INDX_SHIFT       (31 - 23)

/*
 * MMU Instruction/Data Effective Page Number Register
 */
#define PPC800_EPN_EPN_MASK           _BITFIELD32B(19, 0xfffff)
#define PPC800_EPN_EPN_SHIFT          (31 - 19)
#define PPC800_EPN_EV                 _ONEBIT32B(22)
#define PPC800_EPN_ASID_MASK          _BITFIELD32B(31, 0xf)
#define PPC800_EPN_ASID_SHIFT         (31 - 31)

/*
 * MMU Instruction/Data Real Page Number Register
 */
#define PPC800_RPN_RPN_MASK           _BITFIELD32B(19, 0xfffff)
#define PPC800_RPN_RPN_SHIFT          (31 - 19)
#define PPC800_RPN_PP1_MASK           _BITFIELD32B(21, 0x3)
#define PPC800_RPN_PP1_SHIFT          (31 - 21)
#define PPC800_RPN_PP2_MASK           _BITFIELD32B(23, 0x3)
#define PPC800_RPN_PP2_SHIFT          (31 - 23)
#define PPC800_RPN_PP3_MASK           _BITFIELD32B(25, 0x3)
#define PPC800_RPN_PP3_SHIFT          (31 - 25)
#define PPC800_RPN_PP4_MASK           _BITFIELD32B(27, 0x3)
#define PPC800_RPN_PP4_SHIFT          (31 - 27)
#define PPC800_RPN_LPS                _ONEBIT32B(28)
#define PPC800_RPN_SH                 _ONEBIT32B(29)
#define PPC800_RPN_CI                 _ONEBIT32B(30)
#define PPC800_RPN_V                  _ONEBIT32B(31)

/*
 * MMU Instruction/Data Access Protection Register
 */
#define PPC800_AP_MASK(g)             _BITFIELD32B((g)*2 + 1, 3)
#define PPC800_AP_GPMODE_NOACC(g)     _BITFIELD32B((g)*2 + 1, 0)
#define PPC800_AP_GPMODE_PGPERM(g)    _BITFIELD32B((g)*2 + 1, 1)
#define PPC800_AP_GPMODE_MGRFREE(g)   _BITFIELD32B((g)*2 + 1, 3)
#define PPC800_AP_PPCMODE_ACCPRIV(g)  _BITFIELD32B((g)*2 + 1, 0)
#define PPC800_AP_PPCMODE_PGPERM(g)   _BITFIELD32B((g)*2 + 1, 1)
#define PPC800_AP_PPCMODE_SWAPPERM(g) _BITFIELD32B((g)*2 + 1, 2)
#define PPC800_AP_PPCMODE_ACCPROB(g)  _BITFIELD32B((g)*2 + 1, 3)

/*
 * MMU Instruction/Data Tablewalk Control Register
 */
#define PPC800_TWC_L2TB_MASK          _BITFIELD32B(19, 0xfffff) /*Data only*/
#define PPC800_TWC_L2TB_SHIFT         (31 - 19)                 /*Data only*/
#define PPC800_TWC_APG_MASK           _BITFIELD32B(26, 0xf)
#define PPC800_TWC_APG_SHIFT          (31 - 26)
#define PPC800_TWC_G                  _ONEBIT32B(27)
#define PPC800_TWC_PS_MASK            _BITFIELD32B(29, 0x3)
#define PPC800_TWC_PS_SMALL           _BITFIELD32B(29, 0)
#define PPC800_TWC_PS_512K            _BITFIELD32B(29, 1)
#define PPC800_TWC_PS_8M              _BITFIELD32B(29, 3)
#define PPC800_TWC_WT                 _ONEBIT32B(30) /*Data only*/
#define PPC800_TWC_V                  _ONEBIT32B(31)

#endif

/* __SRCVERSION("800cpu.h $Rev: 153052 $"); */
