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
 *  ppc/pa6tcpu.h
 *
 * Registers specific to the PPC PA6T
 *

 */

#ifndef __PPC_PA6TCPU_H_INCLUDED
#define __PPC_PA6TCPU_H_INCLUDED

#ifndef __PLATFORM_H_INCLUDED
#include <sys/platform.h>
#endif

/*
 * SPR registers
 */
#define PPCPA6T_SPR_AMR                           29
#define PPCPA6T_SPR_ASID                          1022
#define PPCPA6T_SPR_BAR                           862
#define PPCPA6T_SPR_BTCR                          978
#define PPCPA6T_SPR_DABR1                         1016
#define PPCPA6T_SPR_DER                           982
#define PPCPA6T_SPR_DLCNT                         986
#define PPCPA6T_SPR_HDAR                          307
#define PPCPA6T_SPR_HDSISR                        306
#define PPCPA6T_SPR_HID0                          1008
#define PPCPA6T_SPR_HID1                          1009
#define PPCPA6T_SPR_HID4                          1012
#define PPCPA6T_SPR_HID5                          1014
#define PPCPA6T_SPR_HMEER                         337
#define PPCPA6T_SPR_HMER                          336
#define PPCPA6T_SPR_IABR                          1010
#define PPCPA6T_SPR_IABR1                         1011
#define PPCPA6T_SPR_IER                           981
#define PPCPA6T_SPR_IMA0                          880
#define PPCPA6T_SPR_IMA1                          881
#define PPCPA6T_SPR_IMA2                          882
#define PPCPA6T_SPR_IMA3                          883
#define PPCPA6T_SPR_IMA4                          884
#define PPCPA6T_SPR_IMA5                          885
#define PPCPA6T_SPR_IMA6                          886
#define PPCPA6T_SPR_IMA7                          887
#define PPCPA6T_SPR_IMA8                          888
#define PPCPA6T_SPR_IMA9                          889
#define PPCPA6T_SPR_IMMAT                         979
#define PPCPA6T_SPR_MER                           849
#define PPCPA6T_SPR_PWRC0                         1018
#define PPCPA6T_SPR_RPCCR                         1021
#define PPCPA6T_SPR_SIER                          785
#define PPCPA6T_SPR_SIER_USER                     769
#define PPCPA6T_SPR_TBCTL                         863
#define PPCPA6T_SPR_TBU40                         286
#define PPCPA6T_SPR_TSR0                          793
#define PPCPA6T_SPR_TSR0_USER                     777
#define PPCPA6T_SPR_TSR1                          794
#define PPCPA6T_SPR_TSR1_USER                     778
#define PPCPA6T_SPR_TSR2                          799
#define PPCPA6T_SPR_TSR2_USER                     783
#define PPCPA6T_SPR_TSR3                          784
#define PPCPA6T_SPR_TSR3_USER                     768

/*
 * Exception table vectors
 */
#define PPCPA6T_EXC_INSTR_BREAK                   (0x1300 / sizeof(uint32_t))
#define PPCPA6T_EXC_SOFT_PATCH                    (0x1500 / sizeof(uint32_t))

/*
 * HID0
 */
#define PPCPA6T_SPR_HID0_EN_OPT_ISYNC             _ONEBIT64B(0)
#define PPCPA6T_SPR_HID0_DIS_VMX                  _ONEBIT64B(1)
#define PPCPA6T_SPR_HID0_DIS_EXTMC                _ONEBIT64B(2)
#define PPCPA6T_SPR_HID0_DIS_THRMEINT             _ONEBIT64B(3)
#define PPCPA6T_SPR_HID0_DIS_EN_HANG              _ONEBIT64B(4)
#define PPCPA6T_SPR_HID0_DIS_FP                   _ONEBIT64B(5)
#define PPCPA6T_SPR_HID0_DIS_HILE                 _ONEBIT64B(6)

/*
 * HID1
 */
#define PPCPA6T_SPR_HID1_DIS_CACHE_STORE_COALESCE _ONEBIT64B(0)
#define PPCPA6T_SPR_HID1_DIS_MERGE_UNCACHED_STORE _ONEBIT64B(1)
#define PPCPA6T_SPR_HID1_DIS_UNCACHED_STORE_PIPE  _ONEBIT64B(2)
#define PPCPA6T_SPR_HID1_DIS_EXTERN_SNOOP_RETRY   _ONEBIT64B(3)
#define PPCPA6T_SPR_HID1_EN_EXTERN_SNOOP_RETRY    _ONEBIT64B(4)
#define PPCPA6T_SPR_HID1_DIS_SNP_RETRYONTID       _ONEBIT64B(5)
#define PPCPA6T_SPR_HID1_DIS_L1_WAY               _ONEBIT64B(9)
#define PPCPA6T_SPR_HID1_L1_WAY_SELECT            _ONEBIT64B(10)
#define PPCPA6T_SPR_HID1_FORCE_HW_FLUSH           _ONEBIT64B(13)
#define PPCPA6T_SPR_HID1_DIS_HW_FLUSH             _ONEBIT64B(14)
#define PPCPA6T_SPR_HID1_TB_66_MODE               _ONEBIT64B(63)

/*
 * HID4
 */
#define PPCPA6T_SPR_HID4_EN_SINGLE_ISSUE          _ONEBIT64B(0)
#define PPCPA6T_SPR_HID4_EN_HWPREF                _ONEBIT64B(1)
#define PPCPA6T_SPR_HID4_DIS_SWPREF               _ONEBIT64B(2)
#define PPCPA6T_SPR_HID4_REP_SW_ENTRY             _ONEBIT64B(3)
#define PPCPA6T_SPR_HID4_RESET_HWPREF             _ONEBIT64B(4)
#define PPCPA6T_SPR_HID4_HWPREF_DISTANCE          _ONEBIT64B(5)
#define PPCPA6T_SPR_HID4_DIS_SPEC_GLD             _ONEBIT64B(6)
#define PPCPA6T_SPR_HID4_DIS_SPEC_GLT             _ONEBIT64B(7)
#define PPCPA6T_SPR_HID4_DIS_MULT_UCLDS           _ONEBIT64B(8)
#define PPCPA6T_SPR_HID4_BLK_UCST_AFTER_UCLD      _ONEBIT64B(9)
#define PPCPA6T_SPR_HID4_DIS_BUBBLE_INJ           _ONEBIT64B(10)
#define PPCPA6T_SPR_HID4_DIS_LSQ_WAIT_REP         _ONEBIT64B(11)
#define PPCPA6T_SPR_HID4_LWSYNC_TO_SYNC           _ONEBIT64B(12)
#define PPCPA6T_SPR_HID4_EIEIO_TO_SYNC            _ONEBIT64B(13)
#define PPCPA6T_SPR_HID4_PTESYNC_TO_SYNC          _ONEBIT64B(14)
#define PPCPA6T_SPR_HID4_LWSYNC_TO_PTESYNC        _ONEBIT64B(15)
#define PPCPA6T_SPR_HID4_EIEIO_TO_PTESYNC         _ONEBIT64B(16)
#define PPCPA6T_SPR_HID4_SYNC_TO_PTESYNC          _ONEBIT64B(17)
#define PPCPA6T_SPR_HID4_HWP_STREAM               _ONEBIT64B(18)
#define PPCPA6T_SPR_HID4_FORCE_LD_CI              _ONEBIT64B(19)
#define PPCPA6T_SPR_HID4_FORCE_LD_G               _ONEBIT64B(20)
#define PPCPA6T_SPR_HID4_FORCE_ST_CI              _ONEBIT64B(21)
#define PPCPA6T_SPR_HID4_FORCE_ST_G               _ONEBIT64B(22)
#define PPCPA6T_SPR_HID4_X16_CRACK                _ONEBIT64B(23)
#define PPCPA6T_SPR_HID4_DIS_DCACHE               _ONEBIT64B(24)
#define PPCPA6T_SPR_HID4_MSC_RPLY_IMM             _ONEBIT64B(25)
#define PPCPA6T_SPR_HID4_DIS_SPEC_ST              _ONEBIT64B(26)
#define PPCPA6T_SPR_HID4_DIS_ST_AFTER_CMP_LD      _ONEBIT64B(27)
#define PPCPA6T_SPR_HID4_SYNC_WAIT_4_MRB_EMPTY    _ONEBIT64B(28)
#define PPCPA6T_SPR_HID4_EN_ALL_UNALIGN_FAULT     _ONEBIT64B(29)
#define PPCPA6T_SPR_HID4_EN_UC_MISALIGN_FAULT     _ONEBIT64B(30)
#define PPCPA6T_SPR_HID4_DIS_PIPELINE_DCBZ        _ONEBIT64B(31)
#define PPCPA6T_SPR_HID4_DIS_DCBZ_AFTER_CMP_LD    _ONEBIT64B(32)
#define PPCPA6T_SPR_HID4_DCBF_ORDER_LD            _ONEBIT64B(33)
#define PPCPA6T_SPR_HID4_FPCRK_W_UNALIGN_SEQ      _ONEBIT64B(34)
#define PPCPA6T_SPR_HID4_NONSPEC_LARX             _ONEBIT64B(35)
#define PPCPA6T_SPR_HID4_DIS_RC_UPD               _ONEBIT64B(44)
#define PPCPA6T_SPR_HID4_DIS_2ND_TW               _ONEBIT64B(45)
#define PPCPA6T_SPR_HID4_RMILL_EA_CHK             _ONEBIT64B(47)
#define PPCPA6T_SPR_HID4_SINGLE_SLB               _ONEBIT64B(48)
#define PPCPA6T_SPR_HID4_ESID_BYPASS              _ONEBIT64B(49)
#define PPCPA6T_SPR_HID4_DIS_TLB                  _ONEBIT64B(54)
#define PPCPA6T_SPR_HID4_DIS_PRELD                _ONEBIT64B(55)
#define PPCPA6T_SPR_HID4_DIS_SPECWALK             _ONEBIT64B(56)
#define PPCPA6T_SPR_HID4_DIS_PREFWALK             _ONEBIT64B(57)
#define PPCPA6T_SPR_HID4_DIS_ERROR                _ONEBIT64B(58)
#define PPCPA6T_SPR_HID4_LRU_SWBIAS1              _ONEBIT64B(59)
#define PPCPA6T_SPR_HID4_LRU_SWBIAS2              _ONEBIT64B(60)
#define PPCPA6T_SPR_HID4_LRU_HWBIAS3              _ONEBIT64B(61)
#define PPCPA6T_SPR_HID4_ADMIX_1M                 _ONEBIT64B(62)
#define PPCPA6T_SPR_HID4_RMUGRD_EN                _ONEBIT64B(63)

/*
 * HID5
 */
#define PPCPA6T_SPR_HID5_DIS_IC                   _ONEBIT64B(0)
#define PPCPA6T_SPR_HID5_DIS_WAY                  _ONEBIT64B(1)
#define PPCPA6T_SPR_HID5_DIS_WAY_SEL              _ONEBIT64B(2)
#define PPCPA6T_SPR_HID5_EN_128B                  _ONEBIT64B(3)
#define PPCPA6T_SPR_HID5_DIS_PREF                 _ONEBIT64B(4)
#define PPCPA6T_SPR_HID5_DIS_MULTMISS             _ONEBIT64B(5)
#define PPCPA6T_SPR_HID5_DIS_IC_REC               _ONEBIT64B(6)
#define PPCPA6T_SPR_HID5_IC_PE                    _ONEBIT64B(7)
#define PPCPA6T_SPR_HID5_DIS_SPECF                _ONEBIT64B(8)
#define PPCPA6T_SPR_HID5_FORCE_ICBI               _ONEBIT64B(9)
#define PPCPA6T_SPR_HID5_DIS_CG_SPECF             _ONEBIT64B(10)
#define PPCPA6T_SPR_HID5_EN_FIXED_SLOT            _ONEBIT64B(11)
#define PPCPA6T_SPR_HID5_DIS_IERAT                _ONEBIT64B(13)
#define PPCPA6T_SPR_HID5_DIS_NFP                  _ONEBIT64B(17)
#define PPCPA6T_SPR_HID5_DIS_BTP                  _ONEBIT64B(18)
#define PPCPA6T_SPR_HID5_DIS_RAS                  _ONEBIT64B(19)
#define PPCPA6T_SPR_HID5_DIS_BDP                  _ONEBIT64B(20)
#define PPCPA6T_SPR_HID5_DIS_BR_HINT              _ONEBIT64B(21)
#define PPCPA6T_SPR_HID5_DIS_GH_HYP               _ONEBIT64B(22)
#define PPCPA6T_SPR_HID5_DIS_GH_PNH               _ONEBIT64B(23)
#define PPCPA6T_SPR_HID5_DIS_GH_PRO               _ONEBIT64B(24)
#define PPCPA6T_SPR_HID5_BTP_GPATH                _ONEBIT64B(28)
#define PPCPA6T_SPR_HID5_EN_NSPECI                _ONEBIT64B(35)
#define PPCPA6T_SPR_HID5_EN_IOI                   _ONEBIT64B(36)
#define PPCPA6T_SPR_HID5_DCBZ_SIZE                _ONEBIT64B(56)
#define PPCPA6T_SPR_HID5_DCBZ_ILL                 _ONEBIT64B(57)
#define PPCPA6T_SPR_HID5_EN_205_COMP              _ONEBIT64B(58)
#define PPCPA6T_SPR_HID5_EN_205_PS                _ONEBIT64B(59)
#define PPCPA6T_SPR_HID5_EN_205_FP                _ONEBIT64B(60)
#define PPCPA6T_SPR_HID5_EN_205_MEI               _ONEBIT64B(61)

#endif

/* __SRCVERSION("pa6tcpu.h $Rev: 153052 $"); */
