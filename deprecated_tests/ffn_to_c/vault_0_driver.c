/* Auto-generated Unrolled NMP C Driver for Vault 0 */
#include <stdint.h>
#include <stdbool.h>
#include <nmp_vault_ops.h>

void execute_vault_0_schedule()
{
  nmp_vault_init(0);
  /* Step 000: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000000U, 4096U, true);
  /* Step 001: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 002: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040000U, 4096U, false);
  /* Step 003: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 004: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080000U, 4096U, false);
  /* Step 005: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 006: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0000U, 4096U, false);
  /* Step 007: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 008: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100000U, 4096U, false);
  /* Step 009: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 010: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140000U, 4096U, false);
  /* Step 011: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 012: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180000U, 4096U, false);
  /* Step 013: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 014: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0000U, 4096U, false);
  /* Step 015: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 016: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200000U, 4096U, false);
  /* Step 017: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 018: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240000U, 4096U, false);
  /* Step 019: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 020: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280000U, 4096U, false);
  /* Step 021: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 022: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0000U, 4096U, false);
  /* Step 023: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 024: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300000U, 4096U, false);
  /* Step 025: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 026: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340000U, 4096U, false);
  /* Step 027: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 028: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380000U, 4096U, false);
  /* Step 029: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 030: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0000U, 4096U, false);
  /* Step 031: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 032: [up_proj] DRAIN */
  nmp_op_drain(0x0080A800U, 2048U, true);
  /* Step 033: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400000U, 128U);
  /* Step 034: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000080U, 4096U, true);
  /* Step 035: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 036: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040080U, 4096U, false);
  /* Step 037: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 038: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080080U, 4096U, false);
  /* Step 039: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 040: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0080U, 4096U, false);
  /* Step 041: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 042: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100080U, 4096U, false);
  /* Step 043: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 044: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140080U, 4096U, false);
  /* Step 045: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 046: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180080U, 4096U, false);
  /* Step 047: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 048: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0080U, 4096U, false);
  /* Step 049: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 050: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200080U, 4096U, false);
  /* Step 051: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 052: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240080U, 4096U, false);
  /* Step 053: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 054: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280080U, 4096U, false);
  /* Step 055: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 056: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0080U, 4096U, false);
  /* Step 057: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 058: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300080U, 4096U, false);
  /* Step 059: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 060: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340080U, 4096U, false);
  /* Step 061: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 062: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380080U, 4096U, false);
  /* Step 063: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 064: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0080U, 4096U, false);
  /* Step 065: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 066: [up_proj] DRAIN */
  nmp_op_drain(0x0080A880U, 2048U, true);
  /* Step 067: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400080U, 128U);
  /* Step 068: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000100U, 4096U, true);
  /* Step 069: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 070: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040100U, 4096U, false);
  /* Step 071: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 072: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080100U, 4096U, false);
  /* Step 073: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 074: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0100U, 4096U, false);
  /* Step 075: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 076: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100100U, 4096U, false);
  /* Step 077: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 078: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140100U, 4096U, false);
  /* Step 079: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 080: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180100U, 4096U, false);
  /* Step 081: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 082: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0100U, 4096U, false);
  /* Step 083: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 084: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200100U, 4096U, false);
  /* Step 085: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 086: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240100U, 4096U, false);
  /* Step 087: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 088: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280100U, 4096U, false);
  /* Step 089: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 090: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0100U, 4096U, false);
  /* Step 091: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 092: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300100U, 4096U, false);
  /* Step 093: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 094: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340100U, 4096U, false);
  /* Step 095: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 096: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380100U, 4096U, false);
  /* Step 097: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 098: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0100U, 4096U, false);
  /* Step 099: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 100: [up_proj] DRAIN */
  nmp_op_drain(0x0080A900U, 2048U, true);
  /* Step 101: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400100U, 128U);
  /* Step 102: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000180U, 4096U, true);
  /* Step 103: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 104: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040180U, 4096U, false);
  /* Step 105: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 106: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080180U, 4096U, false);
  /* Step 107: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 108: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0180U, 4096U, false);
  /* Step 109: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 110: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100180U, 4096U, false);
  /* Step 111: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 112: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140180U, 4096U, false);
  /* Step 113: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 114: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180180U, 4096U, false);
  /* Step 115: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 116: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0180U, 4096U, false);
  /* Step 117: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 118: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200180U, 4096U, false);
  /* Step 119: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 120: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240180U, 4096U, false);
  /* Step 121: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 122: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280180U, 4096U, false);
  /* Step 123: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 124: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0180U, 4096U, false);
  /* Step 125: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 126: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300180U, 4096U, false);
  /* Step 127: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 128: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340180U, 4096U, false);
  /* Step 129: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 130: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380180U, 4096U, false);
  /* Step 131: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 132: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0180U, 4096U, false);
  /* Step 133: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 134: [up_proj] DRAIN */
  nmp_op_drain(0x0080A980U, 2048U, true);
  /* Step 135: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400180U, 128U);
  /* Step 136: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000200U, 4096U, true);
  /* Step 137: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 138: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040200U, 4096U, false);
  /* Step 139: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 140: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080200U, 4096U, false);
  /* Step 141: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 142: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0200U, 4096U, false);
  /* Step 143: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 144: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100200U, 4096U, false);
  /* Step 145: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 146: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140200U, 4096U, false);
  /* Step 147: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 148: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180200U, 4096U, false);
  /* Step 149: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 150: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0200U, 4096U, false);
  /* Step 151: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 152: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200200U, 4096U, false);
  /* Step 153: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 154: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240200U, 4096U, false);
  /* Step 155: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 156: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280200U, 4096U, false);
  /* Step 157: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 158: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0200U, 4096U, false);
  /* Step 159: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 160: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300200U, 4096U, false);
  /* Step 161: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 162: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340200U, 4096U, false);
  /* Step 163: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 164: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380200U, 4096U, false);
  /* Step 165: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 166: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0200U, 4096U, false);
  /* Step 167: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 168: [up_proj] DRAIN */
  nmp_op_drain(0x0080AA00U, 2048U, true);
  /* Step 169: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400200U, 128U);
  /* Step 170: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000280U, 4096U, true);
  /* Step 171: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 172: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040280U, 4096U, false);
  /* Step 173: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 174: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080280U, 4096U, false);
  /* Step 175: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 176: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0280U, 4096U, false);
  /* Step 177: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 178: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100280U, 4096U, false);
  /* Step 179: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 180: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140280U, 4096U, false);
  /* Step 181: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 182: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180280U, 4096U, false);
  /* Step 183: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 184: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0280U, 4096U, false);
  /* Step 185: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 186: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200280U, 4096U, false);
  /* Step 187: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 188: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240280U, 4096U, false);
  /* Step 189: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 190: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280280U, 4096U, false);
  /* Step 191: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 192: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0280U, 4096U, false);
  /* Step 193: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 194: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300280U, 4096U, false);
  /* Step 195: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 196: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340280U, 4096U, false);
  /* Step 197: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 198: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380280U, 4096U, false);
  /* Step 199: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 200: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0280U, 4096U, false);
  /* Step 201: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 202: [up_proj] DRAIN */
  nmp_op_drain(0x0080AA80U, 2048U, true);
  /* Step 203: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400280U, 128U);
  /* Step 204: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000300U, 4096U, true);
  /* Step 205: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 206: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040300U, 4096U, false);
  /* Step 207: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 208: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080300U, 4096U, false);
  /* Step 209: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 210: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0300U, 4096U, false);
  /* Step 211: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 212: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100300U, 4096U, false);
  /* Step 213: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 214: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140300U, 4096U, false);
  /* Step 215: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 216: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180300U, 4096U, false);
  /* Step 217: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 218: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0300U, 4096U, false);
  /* Step 219: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 220: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200300U, 4096U, false);
  /* Step 221: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 222: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240300U, 4096U, false);
  /* Step 223: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 224: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280300U, 4096U, false);
  /* Step 225: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 226: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0300U, 4096U, false);
  /* Step 227: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 228: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300300U, 4096U, false);
  /* Step 229: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 230: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340300U, 4096U, false);
  /* Step 231: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 232: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380300U, 4096U, false);
  /* Step 233: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 234: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0300U, 4096U, false);
  /* Step 235: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 236: [up_proj] DRAIN */
  nmp_op_drain(0x0080AB00U, 2048U, true);
  /* Step 237: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400300U, 128U);
  /* Step 238: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000380U, 4096U, true);
  /* Step 239: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 240: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040380U, 4096U, false);
  /* Step 241: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 242: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080380U, 4096U, false);
  /* Step 243: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 244: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0380U, 4096U, false);
  /* Step 245: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 246: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100380U, 4096U, false);
  /* Step 247: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 248: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140380U, 4096U, false);
  /* Step 249: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 250: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180380U, 4096U, false);
  /* Step 251: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 252: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0380U, 4096U, false);
  /* Step 253: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 254: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200380U, 4096U, false);
  /* Step 255: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 256: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240380U, 4096U, false);
  /* Step 257: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 258: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280380U, 4096U, false);
  /* Step 259: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 260: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0380U, 4096U, false);
  /* Step 261: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 262: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300380U, 4096U, false);
  /* Step 263: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 264: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340380U, 4096U, false);
  /* Step 265: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 266: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380380U, 4096U, false);
  /* Step 267: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 268: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0380U, 4096U, false);
  /* Step 269: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 270: [up_proj] DRAIN */
  nmp_op_drain(0x0080AB80U, 2048U, true);
  /* Step 271: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400380U, 128U);
  /* Step 272: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000400U, 4096U, true);
  /* Step 273: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 274: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040400U, 4096U, false);
  /* Step 275: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 276: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080400U, 4096U, false);
  /* Step 277: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 278: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0400U, 4096U, false);
  /* Step 279: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 280: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100400U, 4096U, false);
  /* Step 281: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 282: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140400U, 4096U, false);
  /* Step 283: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 284: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180400U, 4096U, false);
  /* Step 285: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 286: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0400U, 4096U, false);
  /* Step 287: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 288: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200400U, 4096U, false);
  /* Step 289: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 290: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240400U, 4096U, false);
  /* Step 291: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 292: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280400U, 4096U, false);
  /* Step 293: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 294: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0400U, 4096U, false);
  /* Step 295: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 296: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300400U, 4096U, false);
  /* Step 297: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 298: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340400U, 4096U, false);
  /* Step 299: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 300: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380400U, 4096U, false);
  /* Step 301: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 302: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0400U, 4096U, false);
  /* Step 303: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 304: [up_proj] DRAIN */
  nmp_op_drain(0x0080AC00U, 2048U, true);
  /* Step 305: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400400U, 128U);
  /* Step 306: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000480U, 4096U, true);
  /* Step 307: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 308: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040480U, 4096U, false);
  /* Step 309: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 310: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080480U, 4096U, false);
  /* Step 311: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 312: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0480U, 4096U, false);
  /* Step 313: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 314: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100480U, 4096U, false);
  /* Step 315: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 316: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140480U, 4096U, false);
  /* Step 317: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 318: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180480U, 4096U, false);
  /* Step 319: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 320: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0480U, 4096U, false);
  /* Step 321: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 322: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200480U, 4096U, false);
  /* Step 323: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 324: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240480U, 4096U, false);
  /* Step 325: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 326: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280480U, 4096U, false);
  /* Step 327: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 328: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0480U, 4096U, false);
  /* Step 329: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 330: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300480U, 4096U, false);
  /* Step 331: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 332: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340480U, 4096U, false);
  /* Step 333: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 334: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380480U, 4096U, false);
  /* Step 335: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 336: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0480U, 4096U, false);
  /* Step 337: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 338: [up_proj] DRAIN */
  nmp_op_drain(0x0080AC80U, 2048U, true);
  /* Step 339: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400480U, 128U);
  /* Step 340: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000500U, 4096U, true);
  /* Step 341: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 342: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040500U, 4096U, false);
  /* Step 343: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 344: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080500U, 4096U, false);
  /* Step 345: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 346: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0500U, 4096U, false);
  /* Step 347: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 348: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100500U, 4096U, false);
  /* Step 349: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 350: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140500U, 4096U, false);
  /* Step 351: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 352: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180500U, 4096U, false);
  /* Step 353: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 354: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0500U, 4096U, false);
  /* Step 355: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 356: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200500U, 4096U, false);
  /* Step 357: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 358: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240500U, 4096U, false);
  /* Step 359: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 360: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280500U, 4096U, false);
  /* Step 361: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 362: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0500U, 4096U, false);
  /* Step 363: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 364: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300500U, 4096U, false);
  /* Step 365: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 366: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340500U, 4096U, false);
  /* Step 367: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 368: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380500U, 4096U, false);
  /* Step 369: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 370: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0500U, 4096U, false);
  /* Step 371: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 372: [up_proj] DRAIN */
  nmp_op_drain(0x0080AD00U, 2048U, true);
  /* Step 373: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400500U, 128U);
  /* Step 374: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000580U, 4096U, true);
  /* Step 375: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 376: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040580U, 4096U, false);
  /* Step 377: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 378: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080580U, 4096U, false);
  /* Step 379: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 380: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0580U, 4096U, false);
  /* Step 381: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 382: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100580U, 4096U, false);
  /* Step 383: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 384: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140580U, 4096U, false);
  /* Step 385: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 386: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180580U, 4096U, false);
  /* Step 387: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 388: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0580U, 4096U, false);
  /* Step 389: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 390: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200580U, 4096U, false);
  /* Step 391: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 392: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240580U, 4096U, false);
  /* Step 393: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 394: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280580U, 4096U, false);
  /* Step 395: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 396: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0580U, 4096U, false);
  /* Step 397: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 398: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300580U, 4096U, false);
  /* Step 399: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 400: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340580U, 4096U, false);
  /* Step 401: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 402: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380580U, 4096U, false);
  /* Step 403: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 404: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0580U, 4096U, false);
  /* Step 405: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 406: [up_proj] DRAIN */
  nmp_op_drain(0x0080AD80U, 2048U, true);
  /* Step 407: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400580U, 128U);
  /* Step 408: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000600U, 4096U, true);
  /* Step 409: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 410: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040600U, 4096U, false);
  /* Step 411: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 412: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080600U, 4096U, false);
  /* Step 413: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 414: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0600U, 4096U, false);
  /* Step 415: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 416: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100600U, 4096U, false);
  /* Step 417: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 418: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140600U, 4096U, false);
  /* Step 419: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 420: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180600U, 4096U, false);
  /* Step 421: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 422: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0600U, 4096U, false);
  /* Step 423: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 424: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200600U, 4096U, false);
  /* Step 425: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 426: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240600U, 4096U, false);
  /* Step 427: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 428: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280600U, 4096U, false);
  /* Step 429: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 430: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0600U, 4096U, false);
  /* Step 431: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 432: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300600U, 4096U, false);
  /* Step 433: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 434: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340600U, 4096U, false);
  /* Step 435: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 436: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380600U, 4096U, false);
  /* Step 437: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 438: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0600U, 4096U, false);
  /* Step 439: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 440: [up_proj] DRAIN */
  nmp_op_drain(0x0080AE00U, 2048U, true);
  /* Step 441: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400600U, 128U);
  /* Step 442: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000680U, 4096U, true);
  /* Step 443: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 444: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040680U, 4096U, false);
  /* Step 445: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 446: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080680U, 4096U, false);
  /* Step 447: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 448: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0680U, 4096U, false);
  /* Step 449: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 450: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100680U, 4096U, false);
  /* Step 451: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 452: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140680U, 4096U, false);
  /* Step 453: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 454: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180680U, 4096U, false);
  /* Step 455: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 456: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0680U, 4096U, false);
  /* Step 457: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 458: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200680U, 4096U, false);
  /* Step 459: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 460: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240680U, 4096U, false);
  /* Step 461: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 462: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280680U, 4096U, false);
  /* Step 463: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 464: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0680U, 4096U, false);
  /* Step 465: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 466: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300680U, 4096U, false);
  /* Step 467: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 468: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340680U, 4096U, false);
  /* Step 469: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 470: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380680U, 4096U, false);
  /* Step 471: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 472: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0680U, 4096U, false);
  /* Step 473: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 474: [up_proj] DRAIN */
  nmp_op_drain(0x0080AE80U, 2048U, true);
  /* Step 475: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400680U, 128U);
  /* Step 476: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000700U, 4096U, true);
  /* Step 477: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 478: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040700U, 4096U, false);
  /* Step 479: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 480: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080700U, 4096U, false);
  /* Step 481: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 482: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0700U, 4096U, false);
  /* Step 483: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 484: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100700U, 4096U, false);
  /* Step 485: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 486: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140700U, 4096U, false);
  /* Step 487: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 488: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180700U, 4096U, false);
  /* Step 489: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 490: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0700U, 4096U, false);
  /* Step 491: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 492: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200700U, 4096U, false);
  /* Step 493: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 494: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240700U, 4096U, false);
  /* Step 495: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 496: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280700U, 4096U, false);
  /* Step 497: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 498: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0700U, 4096U, false);
  /* Step 499: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 500: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300700U, 4096U, false);
  /* Step 501: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 502: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340700U, 4096U, false);
  /* Step 503: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 504: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380700U, 4096U, false);
  /* Step 505: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 506: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0700U, 4096U, false);
  /* Step 507: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 508: [up_proj] DRAIN */
  nmp_op_drain(0x0080AF00U, 2048U, true);
  /* Step 509: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400700U, 128U);
  /* Step 510: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000780U, 4096U, true);
  /* Step 511: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 512: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040780U, 4096U, false);
  /* Step 513: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 514: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080780U, 4096U, false);
  /* Step 515: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 516: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0780U, 4096U, false);
  /* Step 517: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 518: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100780U, 4096U, false);
  /* Step 519: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 520: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140780U, 4096U, false);
  /* Step 521: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 522: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180780U, 4096U, false);
  /* Step 523: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 524: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0780U, 4096U, false);
  /* Step 525: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 526: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200780U, 4096U, false);
  /* Step 527: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 528: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240780U, 4096U, false);
  /* Step 529: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 530: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280780U, 4096U, false);
  /* Step 531: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 532: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0780U, 4096U, false);
  /* Step 533: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 534: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300780U, 4096U, false);
  /* Step 535: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 536: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340780U, 4096U, false);
  /* Step 537: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 538: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380780U, 4096U, false);
  /* Step 539: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 540: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0780U, 4096U, false);
  /* Step 541: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 542: [up_proj] DRAIN */
  nmp_op_drain(0x0080AF80U, 2048U, true);
  /* Step 543: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400780U, 128U);
  /* Step 544: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000800U, 4096U, true);
  /* Step 545: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 546: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040800U, 4096U, false);
  /* Step 547: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 548: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080800U, 4096U, false);
  /* Step 549: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 550: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0800U, 4096U, false);
  /* Step 551: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 552: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100800U, 4096U, false);
  /* Step 553: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 554: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140800U, 4096U, false);
  /* Step 555: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 556: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180800U, 4096U, false);
  /* Step 557: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 558: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0800U, 4096U, false);
  /* Step 559: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 560: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200800U, 4096U, false);
  /* Step 561: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 562: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240800U, 4096U, false);
  /* Step 563: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 564: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280800U, 4096U, false);
  /* Step 565: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 566: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0800U, 4096U, false);
  /* Step 567: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 568: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300800U, 4096U, false);
  /* Step 569: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 570: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340800U, 4096U, false);
  /* Step 571: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 572: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380800U, 4096U, false);
  /* Step 573: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 574: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0800U, 4096U, false);
  /* Step 575: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 576: [up_proj] DRAIN */
  nmp_op_drain(0x0080B000U, 2048U, true);
  /* Step 577: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400800U, 128U);
  /* Step 578: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000880U, 4096U, true);
  /* Step 579: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 580: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040880U, 4096U, false);
  /* Step 581: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 582: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080880U, 4096U, false);
  /* Step 583: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 584: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0880U, 4096U, false);
  /* Step 585: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 586: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100880U, 4096U, false);
  /* Step 587: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 588: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140880U, 4096U, false);
  /* Step 589: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 590: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180880U, 4096U, false);
  /* Step 591: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 592: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0880U, 4096U, false);
  /* Step 593: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 594: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200880U, 4096U, false);
  /* Step 595: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 596: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240880U, 4096U, false);
  /* Step 597: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 598: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280880U, 4096U, false);
  /* Step 599: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 600: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0880U, 4096U, false);
  /* Step 601: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 602: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300880U, 4096U, false);
  /* Step 603: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 604: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340880U, 4096U, false);
  /* Step 605: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 606: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380880U, 4096U, false);
  /* Step 607: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 608: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0880U, 4096U, false);
  /* Step 609: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 610: [up_proj] DRAIN */
  nmp_op_drain(0x0080B080U, 2048U, true);
  /* Step 611: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400880U, 128U);
  /* Step 612: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000900U, 4096U, true);
  /* Step 613: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 614: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040900U, 4096U, false);
  /* Step 615: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 616: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080900U, 4096U, false);
  /* Step 617: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 618: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0900U, 4096U, false);
  /* Step 619: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 620: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100900U, 4096U, false);
  /* Step 621: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 622: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140900U, 4096U, false);
  /* Step 623: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 624: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180900U, 4096U, false);
  /* Step 625: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 626: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0900U, 4096U, false);
  /* Step 627: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 628: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200900U, 4096U, false);
  /* Step 629: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 630: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240900U, 4096U, false);
  /* Step 631: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 632: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280900U, 4096U, false);
  /* Step 633: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 634: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0900U, 4096U, false);
  /* Step 635: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 636: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300900U, 4096U, false);
  /* Step 637: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 638: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340900U, 4096U, false);
  /* Step 639: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 640: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380900U, 4096U, false);
  /* Step 641: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 642: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0900U, 4096U, false);
  /* Step 643: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 644: [up_proj] DRAIN */
  nmp_op_drain(0x0080B100U, 2048U, true);
  /* Step 645: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400900U, 128U);
  /* Step 646: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000980U, 4096U, true);
  /* Step 647: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 648: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040980U, 4096U, false);
  /* Step 649: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 650: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080980U, 4096U, false);
  /* Step 651: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 652: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0980U, 4096U, false);
  /* Step 653: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 654: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100980U, 4096U, false);
  /* Step 655: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 656: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140980U, 4096U, false);
  /* Step 657: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 658: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180980U, 4096U, false);
  /* Step 659: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 660: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0980U, 4096U, false);
  /* Step 661: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 662: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200980U, 4096U, false);
  /* Step 663: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 664: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240980U, 4096U, false);
  /* Step 665: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 666: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280980U, 4096U, false);
  /* Step 667: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 668: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0980U, 4096U, false);
  /* Step 669: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 670: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300980U, 4096U, false);
  /* Step 671: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 672: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340980U, 4096U, false);
  /* Step 673: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 674: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380980U, 4096U, false);
  /* Step 675: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 676: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0980U, 4096U, false);
  /* Step 677: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 678: [up_proj] DRAIN */
  nmp_op_drain(0x0080B180U, 2048U, true);
  /* Step 679: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400980U, 128U);
  /* Step 680: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000A00U, 4096U, true);
  /* Step 681: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 682: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040A00U, 4096U, false);
  /* Step 683: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 684: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080A00U, 4096U, false);
  /* Step 685: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 686: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0A00U, 4096U, false);
  /* Step 687: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 688: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100A00U, 4096U, false);
  /* Step 689: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 690: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140A00U, 4096U, false);
  /* Step 691: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 692: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180A00U, 4096U, false);
  /* Step 693: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 694: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0A00U, 4096U, false);
  /* Step 695: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 696: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200A00U, 4096U, false);
  /* Step 697: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 698: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240A00U, 4096U, false);
  /* Step 699: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 700: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280A00U, 4096U, false);
  /* Step 701: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 702: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0A00U, 4096U, false);
  /* Step 703: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 704: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300A00U, 4096U, false);
  /* Step 705: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 706: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340A00U, 4096U, false);
  /* Step 707: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 708: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380A00U, 4096U, false);
  /* Step 709: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 710: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0A00U, 4096U, false);
  /* Step 711: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 712: [up_proj] DRAIN */
  nmp_op_drain(0x0080B200U, 2048U, true);
  /* Step 713: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400A00U, 128U);
  /* Step 714: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000A80U, 4096U, true);
  /* Step 715: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 716: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040A80U, 4096U, false);
  /* Step 717: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 718: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080A80U, 4096U, false);
  /* Step 719: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 720: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0A80U, 4096U, false);
  /* Step 721: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 722: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100A80U, 4096U, false);
  /* Step 723: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 724: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140A80U, 4096U, false);
  /* Step 725: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 726: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180A80U, 4096U, false);
  /* Step 727: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 728: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0A80U, 4096U, false);
  /* Step 729: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 730: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200A80U, 4096U, false);
  /* Step 731: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 732: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240A80U, 4096U, false);
  /* Step 733: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 734: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280A80U, 4096U, false);
  /* Step 735: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 736: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0A80U, 4096U, false);
  /* Step 737: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 738: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300A80U, 4096U, false);
  /* Step 739: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 740: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340A80U, 4096U, false);
  /* Step 741: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 742: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380A80U, 4096U, false);
  /* Step 743: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 744: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0A80U, 4096U, false);
  /* Step 745: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 746: [up_proj] DRAIN */
  nmp_op_drain(0x0080B280U, 2048U, true);
  /* Step 747: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400A80U, 128U);
  /* Step 748: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000B00U, 4096U, true);
  /* Step 749: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 750: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040B00U, 4096U, false);
  /* Step 751: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 752: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080B00U, 4096U, false);
  /* Step 753: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 754: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0B00U, 4096U, false);
  /* Step 755: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 756: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100B00U, 4096U, false);
  /* Step 757: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 758: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140B00U, 4096U, false);
  /* Step 759: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 760: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180B00U, 4096U, false);
  /* Step 761: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 762: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0B00U, 4096U, false);
  /* Step 763: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 764: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200B00U, 4096U, false);
  /* Step 765: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 766: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240B00U, 4096U, false);
  /* Step 767: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 768: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280B00U, 4096U, false);
  /* Step 769: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 770: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0B00U, 4096U, false);
  /* Step 771: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 772: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300B00U, 4096U, false);
  /* Step 773: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 774: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340B00U, 4096U, false);
  /* Step 775: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 776: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380B00U, 4096U, false);
  /* Step 777: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 778: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0B00U, 4096U, false);
  /* Step 779: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 780: [up_proj] DRAIN */
  nmp_op_drain(0x0080B300U, 2048U, true);
  /* Step 781: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400B00U, 128U);
  /* Step 782: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000B80U, 4096U, true);
  /* Step 783: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 784: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040B80U, 4096U, false);
  /* Step 785: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 786: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080B80U, 4096U, false);
  /* Step 787: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 788: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0B80U, 4096U, false);
  /* Step 789: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 790: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100B80U, 4096U, false);
  /* Step 791: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 792: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140B80U, 4096U, false);
  /* Step 793: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 794: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180B80U, 4096U, false);
  /* Step 795: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 796: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0B80U, 4096U, false);
  /* Step 797: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 798: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200B80U, 4096U, false);
  /* Step 799: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 800: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240B80U, 4096U, false);
  /* Step 801: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 802: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280B80U, 4096U, false);
  /* Step 803: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 804: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0B80U, 4096U, false);
  /* Step 805: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 806: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300B80U, 4096U, false);
  /* Step 807: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 808: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340B80U, 4096U, false);
  /* Step 809: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 810: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380B80U, 4096U, false);
  /* Step 811: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 812: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0B80U, 4096U, false);
  /* Step 813: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 814: [up_proj] DRAIN */
  nmp_op_drain(0x0080B380U, 2048U, true);
  /* Step 815: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400B80U, 128U);
  /* Step 816: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000C00U, 4096U, true);
  /* Step 817: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 818: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040C00U, 4096U, false);
  /* Step 819: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 820: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080C00U, 4096U, false);
  /* Step 821: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 822: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0C00U, 4096U, false);
  /* Step 823: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 824: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100C00U, 4096U, false);
  /* Step 825: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 826: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140C00U, 4096U, false);
  /* Step 827: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 828: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180C00U, 4096U, false);
  /* Step 829: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 830: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0C00U, 4096U, false);
  /* Step 831: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 832: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200C00U, 4096U, false);
  /* Step 833: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 834: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240C00U, 4096U, false);
  /* Step 835: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 836: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280C00U, 4096U, false);
  /* Step 837: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 838: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0C00U, 4096U, false);
  /* Step 839: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 840: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300C00U, 4096U, false);
  /* Step 841: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 842: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340C00U, 4096U, false);
  /* Step 843: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 844: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380C00U, 4096U, false);
  /* Step 845: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 846: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0C00U, 4096U, false);
  /* Step 847: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 848: [up_proj] DRAIN */
  nmp_op_drain(0x0080B400U, 2048U, true);
  /* Step 849: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400C00U, 128U);
  /* Step 850: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000C80U, 4096U, true);
  /* Step 851: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 852: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040C80U, 4096U, false);
  /* Step 853: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 854: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080C80U, 4096U, false);
  /* Step 855: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 856: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0C80U, 4096U, false);
  /* Step 857: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 858: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100C80U, 4096U, false);
  /* Step 859: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 860: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140C80U, 4096U, false);
  /* Step 861: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 862: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180C80U, 4096U, false);
  /* Step 863: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 864: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0C80U, 4096U, false);
  /* Step 865: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 866: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200C80U, 4096U, false);
  /* Step 867: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 868: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240C80U, 4096U, false);
  /* Step 869: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 870: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280C80U, 4096U, false);
  /* Step 871: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 872: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0C80U, 4096U, false);
  /* Step 873: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 874: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300C80U, 4096U, false);
  /* Step 875: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 876: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340C80U, 4096U, false);
  /* Step 877: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 878: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380C80U, 4096U, false);
  /* Step 879: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 880: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0C80U, 4096U, false);
  /* Step 881: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 882: [up_proj] DRAIN */
  nmp_op_drain(0x0080B480U, 2048U, true);
  /* Step 883: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400C80U, 128U);
  /* Step 884: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000D00U, 4096U, true);
  /* Step 885: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 886: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040D00U, 4096U, false);
  /* Step 887: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 888: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080D00U, 4096U, false);
  /* Step 889: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 890: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0D00U, 4096U, false);
  /* Step 891: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 892: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100D00U, 4096U, false);
  /* Step 893: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 894: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140D00U, 4096U, false);
  /* Step 895: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 896: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180D00U, 4096U, false);
  /* Step 897: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 898: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0D00U, 4096U, false);
  /* Step 899: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 900: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200D00U, 4096U, false);
  /* Step 901: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 902: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240D00U, 4096U, false);
  /* Step 903: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 904: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280D00U, 4096U, false);
  /* Step 905: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 906: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0D00U, 4096U, false);
  /* Step 907: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 908: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300D00U, 4096U, false);
  /* Step 909: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 910: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340D00U, 4096U, false);
  /* Step 911: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 912: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380D00U, 4096U, false);
  /* Step 913: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 914: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0D00U, 4096U, false);
  /* Step 915: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 916: [up_proj] DRAIN */
  nmp_op_drain(0x0080B500U, 2048U, true);
  /* Step 917: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400D00U, 128U);
  /* Step 918: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000D80U, 4096U, true);
  /* Step 919: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 920: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040D80U, 4096U, false);
  /* Step 921: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 922: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080D80U, 4096U, false);
  /* Step 923: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 924: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0D80U, 4096U, false);
  /* Step 925: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 926: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100D80U, 4096U, false);
  /* Step 927: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 928: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140D80U, 4096U, false);
  /* Step 929: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 930: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180D80U, 4096U, false);
  /* Step 931: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 932: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0D80U, 4096U, false);
  /* Step 933: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 934: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200D80U, 4096U, false);
  /* Step 935: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 936: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240D80U, 4096U, false);
  /* Step 937: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 938: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280D80U, 4096U, false);
  /* Step 939: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 940: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0D80U, 4096U, false);
  /* Step 941: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 942: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300D80U, 4096U, false);
  /* Step 943: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 944: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340D80U, 4096U, false);
  /* Step 945: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 946: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380D80U, 4096U, false);
  /* Step 947: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 948: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0D80U, 4096U, false);
  /* Step 949: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 950: [up_proj] DRAIN */
  nmp_op_drain(0x0080B580U, 2048U, true);
  /* Step 951: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400D80U, 128U);
  /* Step 952: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000E00U, 4096U, true);
  /* Step 953: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 954: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040E00U, 4096U, false);
  /* Step 955: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 956: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080E00U, 4096U, false);
  /* Step 957: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 958: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0E00U, 4096U, false);
  /* Step 959: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 960: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100E00U, 4096U, false);
  /* Step 961: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 962: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140E00U, 4096U, false);
  /* Step 963: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 964: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180E00U, 4096U, false);
  /* Step 965: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 966: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0E00U, 4096U, false);
  /* Step 967: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 968: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200E00U, 4096U, false);
  /* Step 969: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 970: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240E00U, 4096U, false);
  /* Step 971: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 972: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280E00U, 4096U, false);
  /* Step 973: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 974: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0E00U, 4096U, false);
  /* Step 975: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 976: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300E00U, 4096U, false);
  /* Step 977: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 978: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340E00U, 4096U, false);
  /* Step 979: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 980: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380E00U, 4096U, false);
  /* Step 981: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 982: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0E00U, 4096U, false);
  /* Step 983: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 984: [up_proj] DRAIN */
  nmp_op_drain(0x0080B600U, 2048U, true);
  /* Step 985: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400E00U, 128U);
  /* Step 986: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000E80U, 4096U, true);
  /* Step 987: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 988: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040E80U, 4096U, false);
  /* Step 989: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 990: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080E80U, 4096U, false);
  /* Step 991: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 992: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0E80U, 4096U, false);
  /* Step 993: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 994: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100E80U, 4096U, false);
  /* Step 995: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 996: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140E80U, 4096U, false);
  /* Step 997: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 998: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180E80U, 4096U, false);
  /* Step 999: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1000: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0E80U, 4096U, false);
  /* Step 1001: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1002: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200E80U, 4096U, false);
  /* Step 1003: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1004: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240E80U, 4096U, false);
  /* Step 1005: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1006: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280E80U, 4096U, false);
  /* Step 1007: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1008: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0E80U, 4096U, false);
  /* Step 1009: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1010: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300E80U, 4096U, false);
  /* Step 1011: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1012: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340E80U, 4096U, false);
  /* Step 1013: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1014: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380E80U, 4096U, false);
  /* Step 1015: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1016: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0E80U, 4096U, false);
  /* Step 1017: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1018: [up_proj] DRAIN */
  nmp_op_drain(0x0080B680U, 2048U, true);
  /* Step 1019: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400E80U, 128U);
  /* Step 1020: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000F00U, 4096U, true);
  /* Step 1021: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1022: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040F00U, 4096U, false);
  /* Step 1023: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1024: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080F00U, 4096U, false);
  /* Step 1025: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1026: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0F00U, 4096U, false);
  /* Step 1027: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1028: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100F00U, 4096U, false);
  /* Step 1029: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1030: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140F00U, 4096U, false);
  /* Step 1031: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1032: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180F00U, 4096U, false);
  /* Step 1033: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1034: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0F00U, 4096U, false);
  /* Step 1035: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1036: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200F00U, 4096U, false);
  /* Step 1037: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1038: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240F00U, 4096U, false);
  /* Step 1039: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1040: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280F00U, 4096U, false);
  /* Step 1041: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1042: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0F00U, 4096U, false);
  /* Step 1043: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1044: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300F00U, 4096U, false);
  /* Step 1045: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1046: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340F00U, 4096U, false);
  /* Step 1047: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1048: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380F00U, 4096U, false);
  /* Step 1049: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1050: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0F00U, 4096U, false);
  /* Step 1051: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1052: [up_proj] DRAIN */
  nmp_op_drain(0x0080B700U, 2048U, true);
  /* Step 1053: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400F00U, 128U);
  /* Step 1054: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00000F80U, 4096U, true);
  /* Step 1055: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1056: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00040F80U, 4096U, false);
  /* Step 1057: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1058: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00080F80U, 4096U, false);
  /* Step 1059: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1060: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C0F80U, 4096U, false);
  /* Step 1061: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1062: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00100F80U, 4096U, false);
  /* Step 1063: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1064: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00140F80U, 4096U, false);
  /* Step 1065: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1066: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00180F80U, 4096U, false);
  /* Step 1067: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1068: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C0F80U, 4096U, false);
  /* Step 1069: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1070: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00200F80U, 4096U, false);
  /* Step 1071: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1072: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00240F80U, 4096U, false);
  /* Step 1073: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1074: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00280F80U, 4096U, false);
  /* Step 1075: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1076: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C0F80U, 4096U, false);
  /* Step 1077: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1078: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00300F80U, 4096U, false);
  /* Step 1079: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1080: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00340F80U, 4096U, false);
  /* Step 1081: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1082: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00380F80U, 4096U, false);
  /* Step 1083: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1084: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C0F80U, 4096U, false);
  /* Step 1085: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1086: [up_proj] DRAIN */
  nmp_op_drain(0x0080B780U, 2048U, true);
  /* Step 1087: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00400F80U, 128U);
  /* Step 1088: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001000U, 4096U, true);
  /* Step 1089: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1090: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041000U, 4096U, false);
  /* Step 1091: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1092: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081000U, 4096U, false);
  /* Step 1093: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1094: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1000U, 4096U, false);
  /* Step 1095: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1096: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101000U, 4096U, false);
  /* Step 1097: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1098: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141000U, 4096U, false);
  /* Step 1099: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1100: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181000U, 4096U, false);
  /* Step 1101: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1102: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1000U, 4096U, false);
  /* Step 1103: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1104: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201000U, 4096U, false);
  /* Step 1105: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1106: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241000U, 4096U, false);
  /* Step 1107: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1108: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281000U, 4096U, false);
  /* Step 1109: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1110: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1000U, 4096U, false);
  /* Step 1111: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1112: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301000U, 4096U, false);
  /* Step 1113: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1114: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341000U, 4096U, false);
  /* Step 1115: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1116: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381000U, 4096U, false);
  /* Step 1117: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1118: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1000U, 4096U, false);
  /* Step 1119: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1120: [up_proj] DRAIN */
  nmp_op_drain(0x0080B800U, 2048U, true);
  /* Step 1121: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401000U, 128U);
  /* Step 1122: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001080U, 4096U, true);
  /* Step 1123: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1124: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041080U, 4096U, false);
  /* Step 1125: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1126: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081080U, 4096U, false);
  /* Step 1127: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1128: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1080U, 4096U, false);
  /* Step 1129: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1130: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101080U, 4096U, false);
  /* Step 1131: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1132: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141080U, 4096U, false);
  /* Step 1133: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1134: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181080U, 4096U, false);
  /* Step 1135: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1136: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1080U, 4096U, false);
  /* Step 1137: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1138: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201080U, 4096U, false);
  /* Step 1139: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1140: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241080U, 4096U, false);
  /* Step 1141: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1142: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281080U, 4096U, false);
  /* Step 1143: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1144: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1080U, 4096U, false);
  /* Step 1145: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1146: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301080U, 4096U, false);
  /* Step 1147: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1148: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341080U, 4096U, false);
  /* Step 1149: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1150: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381080U, 4096U, false);
  /* Step 1151: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1152: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1080U, 4096U, false);
  /* Step 1153: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1154: [up_proj] DRAIN */
  nmp_op_drain(0x0080B880U, 2048U, true);
  /* Step 1155: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401080U, 128U);
  /* Step 1156: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001100U, 4096U, true);
  /* Step 1157: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1158: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041100U, 4096U, false);
  /* Step 1159: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1160: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081100U, 4096U, false);
  /* Step 1161: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1162: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1100U, 4096U, false);
  /* Step 1163: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1164: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101100U, 4096U, false);
  /* Step 1165: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1166: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141100U, 4096U, false);
  /* Step 1167: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1168: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181100U, 4096U, false);
  /* Step 1169: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1170: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1100U, 4096U, false);
  /* Step 1171: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1172: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201100U, 4096U, false);
  /* Step 1173: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1174: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241100U, 4096U, false);
  /* Step 1175: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1176: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281100U, 4096U, false);
  /* Step 1177: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1178: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1100U, 4096U, false);
  /* Step 1179: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1180: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301100U, 4096U, false);
  /* Step 1181: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1182: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341100U, 4096U, false);
  /* Step 1183: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1184: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381100U, 4096U, false);
  /* Step 1185: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1186: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1100U, 4096U, false);
  /* Step 1187: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1188: [up_proj] DRAIN */
  nmp_op_drain(0x0080B900U, 2048U, true);
  /* Step 1189: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401100U, 128U);
  /* Step 1190: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001180U, 4096U, true);
  /* Step 1191: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1192: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041180U, 4096U, false);
  /* Step 1193: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1194: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081180U, 4096U, false);
  /* Step 1195: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1196: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1180U, 4096U, false);
  /* Step 1197: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1198: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101180U, 4096U, false);
  /* Step 1199: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1200: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141180U, 4096U, false);
  /* Step 1201: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1202: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181180U, 4096U, false);
  /* Step 1203: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1204: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1180U, 4096U, false);
  /* Step 1205: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1206: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201180U, 4096U, false);
  /* Step 1207: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1208: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241180U, 4096U, false);
  /* Step 1209: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1210: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281180U, 4096U, false);
  /* Step 1211: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1212: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1180U, 4096U, false);
  /* Step 1213: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1214: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301180U, 4096U, false);
  /* Step 1215: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1216: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341180U, 4096U, false);
  /* Step 1217: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1218: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381180U, 4096U, false);
  /* Step 1219: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1220: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1180U, 4096U, false);
  /* Step 1221: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1222: [up_proj] DRAIN */
  nmp_op_drain(0x0080B980U, 2048U, true);
  /* Step 1223: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401180U, 128U);
  /* Step 1224: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001200U, 4096U, true);
  /* Step 1225: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1226: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041200U, 4096U, false);
  /* Step 1227: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1228: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081200U, 4096U, false);
  /* Step 1229: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1230: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1200U, 4096U, false);
  /* Step 1231: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1232: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101200U, 4096U, false);
  /* Step 1233: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1234: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141200U, 4096U, false);
  /* Step 1235: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1236: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181200U, 4096U, false);
  /* Step 1237: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1238: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1200U, 4096U, false);
  /* Step 1239: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1240: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201200U, 4096U, false);
  /* Step 1241: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1242: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241200U, 4096U, false);
  /* Step 1243: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1244: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281200U, 4096U, false);
  /* Step 1245: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1246: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1200U, 4096U, false);
  /* Step 1247: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1248: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301200U, 4096U, false);
  /* Step 1249: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1250: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341200U, 4096U, false);
  /* Step 1251: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1252: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381200U, 4096U, false);
  /* Step 1253: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1254: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1200U, 4096U, false);
  /* Step 1255: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1256: [up_proj] DRAIN */
  nmp_op_drain(0x0080BA00U, 2048U, true);
  /* Step 1257: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401200U, 128U);
  /* Step 1258: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001280U, 4096U, true);
  /* Step 1259: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1260: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041280U, 4096U, false);
  /* Step 1261: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1262: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081280U, 4096U, false);
  /* Step 1263: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1264: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1280U, 4096U, false);
  /* Step 1265: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1266: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101280U, 4096U, false);
  /* Step 1267: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1268: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141280U, 4096U, false);
  /* Step 1269: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1270: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181280U, 4096U, false);
  /* Step 1271: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1272: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1280U, 4096U, false);
  /* Step 1273: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1274: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201280U, 4096U, false);
  /* Step 1275: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1276: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241280U, 4096U, false);
  /* Step 1277: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1278: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281280U, 4096U, false);
  /* Step 1279: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1280: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1280U, 4096U, false);
  /* Step 1281: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1282: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301280U, 4096U, false);
  /* Step 1283: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1284: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341280U, 4096U, false);
  /* Step 1285: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1286: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381280U, 4096U, false);
  /* Step 1287: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1288: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1280U, 4096U, false);
  /* Step 1289: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1290: [up_proj] DRAIN */
  nmp_op_drain(0x0080BA80U, 2048U, true);
  /* Step 1291: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401280U, 128U);
  /* Step 1292: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001300U, 4096U, true);
  /* Step 1293: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1294: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041300U, 4096U, false);
  /* Step 1295: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1296: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081300U, 4096U, false);
  /* Step 1297: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1298: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1300U, 4096U, false);
  /* Step 1299: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1300: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101300U, 4096U, false);
  /* Step 1301: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1302: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141300U, 4096U, false);
  /* Step 1303: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1304: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181300U, 4096U, false);
  /* Step 1305: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1306: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1300U, 4096U, false);
  /* Step 1307: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1308: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201300U, 4096U, false);
  /* Step 1309: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1310: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241300U, 4096U, false);
  /* Step 1311: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1312: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281300U, 4096U, false);
  /* Step 1313: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1314: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1300U, 4096U, false);
  /* Step 1315: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1316: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301300U, 4096U, false);
  /* Step 1317: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1318: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341300U, 4096U, false);
  /* Step 1319: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1320: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381300U, 4096U, false);
  /* Step 1321: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1322: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1300U, 4096U, false);
  /* Step 1323: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1324: [up_proj] DRAIN */
  nmp_op_drain(0x0080BB00U, 2048U, true);
  /* Step 1325: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401300U, 128U);
  /* Step 1326: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001380U, 4096U, true);
  /* Step 1327: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1328: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041380U, 4096U, false);
  /* Step 1329: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1330: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081380U, 4096U, false);
  /* Step 1331: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1332: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1380U, 4096U, false);
  /* Step 1333: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1334: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101380U, 4096U, false);
  /* Step 1335: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1336: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141380U, 4096U, false);
  /* Step 1337: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1338: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181380U, 4096U, false);
  /* Step 1339: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1340: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1380U, 4096U, false);
  /* Step 1341: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1342: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201380U, 4096U, false);
  /* Step 1343: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1344: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241380U, 4096U, false);
  /* Step 1345: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1346: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281380U, 4096U, false);
  /* Step 1347: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1348: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1380U, 4096U, false);
  /* Step 1349: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1350: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301380U, 4096U, false);
  /* Step 1351: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1352: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341380U, 4096U, false);
  /* Step 1353: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1354: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381380U, 4096U, false);
  /* Step 1355: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1356: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1380U, 4096U, false);
  /* Step 1357: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1358: [up_proj] DRAIN */
  nmp_op_drain(0x0080BB80U, 2048U, true);
  /* Step 1359: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401380U, 128U);
  /* Step 1360: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001400U, 4096U, true);
  /* Step 1361: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1362: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041400U, 4096U, false);
  /* Step 1363: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1364: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081400U, 4096U, false);
  /* Step 1365: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1366: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1400U, 4096U, false);
  /* Step 1367: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1368: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101400U, 4096U, false);
  /* Step 1369: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1370: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141400U, 4096U, false);
  /* Step 1371: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1372: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181400U, 4096U, false);
  /* Step 1373: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1374: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1400U, 4096U, false);
  /* Step 1375: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1376: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201400U, 4096U, false);
  /* Step 1377: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1378: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241400U, 4096U, false);
  /* Step 1379: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1380: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281400U, 4096U, false);
  /* Step 1381: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1382: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1400U, 4096U, false);
  /* Step 1383: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1384: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301400U, 4096U, false);
  /* Step 1385: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1386: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341400U, 4096U, false);
  /* Step 1387: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1388: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381400U, 4096U, false);
  /* Step 1389: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1390: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1400U, 4096U, false);
  /* Step 1391: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1392: [up_proj] DRAIN */
  nmp_op_drain(0x0080BC00U, 2048U, true);
  /* Step 1393: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401400U, 128U);
  /* Step 1394: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001480U, 4096U, true);
  /* Step 1395: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1396: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041480U, 4096U, false);
  /* Step 1397: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1398: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081480U, 4096U, false);
  /* Step 1399: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1400: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1480U, 4096U, false);
  /* Step 1401: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1402: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101480U, 4096U, false);
  /* Step 1403: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1404: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141480U, 4096U, false);
  /* Step 1405: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1406: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181480U, 4096U, false);
  /* Step 1407: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1408: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1480U, 4096U, false);
  /* Step 1409: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1410: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201480U, 4096U, false);
  /* Step 1411: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1412: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241480U, 4096U, false);
  /* Step 1413: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1414: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281480U, 4096U, false);
  /* Step 1415: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1416: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1480U, 4096U, false);
  /* Step 1417: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1418: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301480U, 4096U, false);
  /* Step 1419: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1420: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341480U, 4096U, false);
  /* Step 1421: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1422: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381480U, 4096U, false);
  /* Step 1423: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1424: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1480U, 4096U, false);
  /* Step 1425: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1426: [up_proj] DRAIN */
  nmp_op_drain(0x0080BC80U, 2048U, true);
  /* Step 1427: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401480U, 128U);
  /* Step 1428: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001500U, 4096U, true);
  /* Step 1429: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1430: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041500U, 4096U, false);
  /* Step 1431: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1432: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081500U, 4096U, false);
  /* Step 1433: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1434: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1500U, 4096U, false);
  /* Step 1435: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1436: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101500U, 4096U, false);
  /* Step 1437: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1438: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141500U, 4096U, false);
  /* Step 1439: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1440: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181500U, 4096U, false);
  /* Step 1441: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1442: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1500U, 4096U, false);
  /* Step 1443: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1444: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201500U, 4096U, false);
  /* Step 1445: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1446: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241500U, 4096U, false);
  /* Step 1447: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1448: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281500U, 4096U, false);
  /* Step 1449: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1450: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1500U, 4096U, false);
  /* Step 1451: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1452: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301500U, 4096U, false);
  /* Step 1453: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1454: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341500U, 4096U, false);
  /* Step 1455: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1456: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381500U, 4096U, false);
  /* Step 1457: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1458: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1500U, 4096U, false);
  /* Step 1459: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1460: [up_proj] DRAIN */
  nmp_op_drain(0x0080BD00U, 2048U, true);
  /* Step 1461: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401500U, 128U);
  /* Step 1462: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001580U, 4096U, true);
  /* Step 1463: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1464: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041580U, 4096U, false);
  /* Step 1465: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1466: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081580U, 4096U, false);
  /* Step 1467: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1468: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1580U, 4096U, false);
  /* Step 1469: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1470: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101580U, 4096U, false);
  /* Step 1471: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1472: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141580U, 4096U, false);
  /* Step 1473: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1474: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181580U, 4096U, false);
  /* Step 1475: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1476: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1580U, 4096U, false);
  /* Step 1477: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1478: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201580U, 4096U, false);
  /* Step 1479: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1480: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241580U, 4096U, false);
  /* Step 1481: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1482: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281580U, 4096U, false);
  /* Step 1483: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1484: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1580U, 4096U, false);
  /* Step 1485: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1486: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301580U, 4096U, false);
  /* Step 1487: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1488: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341580U, 4096U, false);
  /* Step 1489: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1490: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381580U, 4096U, false);
  /* Step 1491: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1492: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1580U, 4096U, false);
  /* Step 1493: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1494: [up_proj] DRAIN */
  nmp_op_drain(0x0080BD80U, 2048U, true);
  /* Step 1495: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401580U, 128U);
  /* Step 1496: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001600U, 4096U, true);
  /* Step 1497: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1498: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041600U, 4096U, false);
  /* Step 1499: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1500: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081600U, 4096U, false);
  /* Step 1501: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1502: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1600U, 4096U, false);
  /* Step 1503: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1504: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101600U, 4096U, false);
  /* Step 1505: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1506: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141600U, 4096U, false);
  /* Step 1507: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1508: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181600U, 4096U, false);
  /* Step 1509: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1510: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1600U, 4096U, false);
  /* Step 1511: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1512: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201600U, 4096U, false);
  /* Step 1513: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1514: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241600U, 4096U, false);
  /* Step 1515: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1516: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281600U, 4096U, false);
  /* Step 1517: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1518: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1600U, 4096U, false);
  /* Step 1519: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1520: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301600U, 4096U, false);
  /* Step 1521: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1522: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341600U, 4096U, false);
  /* Step 1523: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1524: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381600U, 4096U, false);
  /* Step 1525: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1526: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1600U, 4096U, false);
  /* Step 1527: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1528: [up_proj] DRAIN */
  nmp_op_drain(0x0080BE00U, 2048U, true);
  /* Step 1529: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401600U, 128U);
  /* Step 1530: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001680U, 4096U, true);
  /* Step 1531: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1532: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041680U, 4096U, false);
  /* Step 1533: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1534: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081680U, 4096U, false);
  /* Step 1535: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1536: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1680U, 4096U, false);
  /* Step 1537: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1538: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101680U, 4096U, false);
  /* Step 1539: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1540: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141680U, 4096U, false);
  /* Step 1541: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1542: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181680U, 4096U, false);
  /* Step 1543: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1544: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1680U, 4096U, false);
  /* Step 1545: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1546: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201680U, 4096U, false);
  /* Step 1547: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1548: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241680U, 4096U, false);
  /* Step 1549: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1550: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281680U, 4096U, false);
  /* Step 1551: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1552: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1680U, 4096U, false);
  /* Step 1553: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1554: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301680U, 4096U, false);
  /* Step 1555: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1556: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341680U, 4096U, false);
  /* Step 1557: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1558: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381680U, 4096U, false);
  /* Step 1559: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1560: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1680U, 4096U, false);
  /* Step 1561: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1562: [up_proj] DRAIN */
  nmp_op_drain(0x0080BE80U, 2048U, true);
  /* Step 1563: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401680U, 128U);
  /* Step 1564: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001700U, 4096U, true);
  /* Step 1565: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1566: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041700U, 4096U, false);
  /* Step 1567: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1568: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081700U, 4096U, false);
  /* Step 1569: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1570: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1700U, 4096U, false);
  /* Step 1571: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1572: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101700U, 4096U, false);
  /* Step 1573: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1574: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141700U, 4096U, false);
  /* Step 1575: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1576: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181700U, 4096U, false);
  /* Step 1577: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1578: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1700U, 4096U, false);
  /* Step 1579: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1580: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201700U, 4096U, false);
  /* Step 1581: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1582: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241700U, 4096U, false);
  /* Step 1583: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1584: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281700U, 4096U, false);
  /* Step 1585: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1586: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1700U, 4096U, false);
  /* Step 1587: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1588: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301700U, 4096U, false);
  /* Step 1589: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1590: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341700U, 4096U, false);
  /* Step 1591: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1592: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381700U, 4096U, false);
  /* Step 1593: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1594: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1700U, 4096U, false);
  /* Step 1595: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1596: [up_proj] DRAIN */
  nmp_op_drain(0x0080BF00U, 2048U, true);
  /* Step 1597: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401700U, 128U);
  /* Step 1598: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001780U, 4096U, true);
  /* Step 1599: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1600: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041780U, 4096U, false);
  /* Step 1601: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1602: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081780U, 4096U, false);
  /* Step 1603: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1604: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1780U, 4096U, false);
  /* Step 1605: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1606: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101780U, 4096U, false);
  /* Step 1607: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1608: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141780U, 4096U, false);
  /* Step 1609: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1610: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181780U, 4096U, false);
  /* Step 1611: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1612: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1780U, 4096U, false);
  /* Step 1613: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1614: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201780U, 4096U, false);
  /* Step 1615: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1616: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241780U, 4096U, false);
  /* Step 1617: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1618: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281780U, 4096U, false);
  /* Step 1619: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1620: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1780U, 4096U, false);
  /* Step 1621: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1622: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301780U, 4096U, false);
  /* Step 1623: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1624: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341780U, 4096U, false);
  /* Step 1625: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1626: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381780U, 4096U, false);
  /* Step 1627: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1628: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1780U, 4096U, false);
  /* Step 1629: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1630: [up_proj] DRAIN */
  nmp_op_drain(0x0080BF80U, 2048U, true);
  /* Step 1631: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401780U, 128U);
  /* Step 1632: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001800U, 4096U, true);
  /* Step 1633: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1634: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041800U, 4096U, false);
  /* Step 1635: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1636: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081800U, 4096U, false);
  /* Step 1637: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1638: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1800U, 4096U, false);
  /* Step 1639: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1640: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101800U, 4096U, false);
  /* Step 1641: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1642: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141800U, 4096U, false);
  /* Step 1643: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1644: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181800U, 4096U, false);
  /* Step 1645: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1646: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1800U, 4096U, false);
  /* Step 1647: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1648: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201800U, 4096U, false);
  /* Step 1649: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1650: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241800U, 4096U, false);
  /* Step 1651: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1652: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281800U, 4096U, false);
  /* Step 1653: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1654: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1800U, 4096U, false);
  /* Step 1655: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1656: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301800U, 4096U, false);
  /* Step 1657: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1658: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341800U, 4096U, false);
  /* Step 1659: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1660: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381800U, 4096U, false);
  /* Step 1661: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1662: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1800U, 4096U, false);
  /* Step 1663: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1664: [up_proj] DRAIN */
  nmp_op_drain(0x0080C000U, 2048U, true);
  /* Step 1665: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401800U, 128U);
  /* Step 1666: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001880U, 4096U, true);
  /* Step 1667: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1668: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041880U, 4096U, false);
  /* Step 1669: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1670: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081880U, 4096U, false);
  /* Step 1671: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1672: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1880U, 4096U, false);
  /* Step 1673: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1674: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101880U, 4096U, false);
  /* Step 1675: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1676: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141880U, 4096U, false);
  /* Step 1677: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1678: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181880U, 4096U, false);
  /* Step 1679: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1680: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1880U, 4096U, false);
  /* Step 1681: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1682: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201880U, 4096U, false);
  /* Step 1683: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1684: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241880U, 4096U, false);
  /* Step 1685: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1686: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281880U, 4096U, false);
  /* Step 1687: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1688: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1880U, 4096U, false);
  /* Step 1689: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1690: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301880U, 4096U, false);
  /* Step 1691: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1692: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341880U, 4096U, false);
  /* Step 1693: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1694: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381880U, 4096U, false);
  /* Step 1695: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1696: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1880U, 4096U, false);
  /* Step 1697: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1698: [up_proj] DRAIN */
  nmp_op_drain(0x0080C080U, 2048U, true);
  /* Step 1699: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401880U, 128U);
  /* Step 1700: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001900U, 4096U, true);
  /* Step 1701: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1702: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041900U, 4096U, false);
  /* Step 1703: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1704: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081900U, 4096U, false);
  /* Step 1705: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1706: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1900U, 4096U, false);
  /* Step 1707: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1708: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101900U, 4096U, false);
  /* Step 1709: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1710: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141900U, 4096U, false);
  /* Step 1711: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1712: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181900U, 4096U, false);
  /* Step 1713: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1714: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1900U, 4096U, false);
  /* Step 1715: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1716: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201900U, 4096U, false);
  /* Step 1717: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1718: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241900U, 4096U, false);
  /* Step 1719: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1720: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281900U, 4096U, false);
  /* Step 1721: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1722: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1900U, 4096U, false);
  /* Step 1723: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1724: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301900U, 4096U, false);
  /* Step 1725: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1726: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341900U, 4096U, false);
  /* Step 1727: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1728: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381900U, 4096U, false);
  /* Step 1729: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1730: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1900U, 4096U, false);
  /* Step 1731: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1732: [up_proj] DRAIN */
  nmp_op_drain(0x0080C100U, 2048U, true);
  /* Step 1733: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401900U, 128U);
  /* Step 1734: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001980U, 4096U, true);
  /* Step 1735: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1736: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041980U, 4096U, false);
  /* Step 1737: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1738: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081980U, 4096U, false);
  /* Step 1739: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1740: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1980U, 4096U, false);
  /* Step 1741: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1742: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101980U, 4096U, false);
  /* Step 1743: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1744: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141980U, 4096U, false);
  /* Step 1745: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1746: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181980U, 4096U, false);
  /* Step 1747: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1748: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1980U, 4096U, false);
  /* Step 1749: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1750: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201980U, 4096U, false);
  /* Step 1751: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1752: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241980U, 4096U, false);
  /* Step 1753: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1754: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281980U, 4096U, false);
  /* Step 1755: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1756: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1980U, 4096U, false);
  /* Step 1757: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1758: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301980U, 4096U, false);
  /* Step 1759: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1760: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341980U, 4096U, false);
  /* Step 1761: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1762: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381980U, 4096U, false);
  /* Step 1763: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1764: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1980U, 4096U, false);
  /* Step 1765: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1766: [up_proj] DRAIN */
  nmp_op_drain(0x0080C180U, 2048U, true);
  /* Step 1767: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401980U, 128U);
  /* Step 1768: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001A00U, 4096U, true);
  /* Step 1769: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1770: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041A00U, 4096U, false);
  /* Step 1771: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1772: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081A00U, 4096U, false);
  /* Step 1773: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1774: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1A00U, 4096U, false);
  /* Step 1775: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1776: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101A00U, 4096U, false);
  /* Step 1777: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1778: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141A00U, 4096U, false);
  /* Step 1779: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1780: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181A00U, 4096U, false);
  /* Step 1781: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1782: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1A00U, 4096U, false);
  /* Step 1783: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1784: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201A00U, 4096U, false);
  /* Step 1785: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1786: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241A00U, 4096U, false);
  /* Step 1787: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1788: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281A00U, 4096U, false);
  /* Step 1789: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1790: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1A00U, 4096U, false);
  /* Step 1791: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1792: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301A00U, 4096U, false);
  /* Step 1793: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1794: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341A00U, 4096U, false);
  /* Step 1795: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1796: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381A00U, 4096U, false);
  /* Step 1797: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1798: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1A00U, 4096U, false);
  /* Step 1799: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1800: [up_proj] DRAIN */
  nmp_op_drain(0x0080C200U, 2048U, true);
  /* Step 1801: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401A00U, 128U);
  /* Step 1802: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001A80U, 4096U, true);
  /* Step 1803: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1804: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041A80U, 4096U, false);
  /* Step 1805: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1806: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081A80U, 4096U, false);
  /* Step 1807: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1808: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1A80U, 4096U, false);
  /* Step 1809: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1810: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101A80U, 4096U, false);
  /* Step 1811: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1812: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141A80U, 4096U, false);
  /* Step 1813: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1814: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181A80U, 4096U, false);
  /* Step 1815: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1816: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1A80U, 4096U, false);
  /* Step 1817: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1818: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201A80U, 4096U, false);
  /* Step 1819: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1820: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241A80U, 4096U, false);
  /* Step 1821: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1822: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281A80U, 4096U, false);
  /* Step 1823: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1824: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1A80U, 4096U, false);
  /* Step 1825: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1826: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301A80U, 4096U, false);
  /* Step 1827: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1828: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341A80U, 4096U, false);
  /* Step 1829: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1830: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381A80U, 4096U, false);
  /* Step 1831: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1832: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1A80U, 4096U, false);
  /* Step 1833: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1834: [up_proj] DRAIN */
  nmp_op_drain(0x0080C280U, 2048U, true);
  /* Step 1835: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401A80U, 128U);
  /* Step 1836: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001B00U, 4096U, true);
  /* Step 1837: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1838: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041B00U, 4096U, false);
  /* Step 1839: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1840: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081B00U, 4096U, false);
  /* Step 1841: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1842: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1B00U, 4096U, false);
  /* Step 1843: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1844: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101B00U, 4096U, false);
  /* Step 1845: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1846: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141B00U, 4096U, false);
  /* Step 1847: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1848: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181B00U, 4096U, false);
  /* Step 1849: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1850: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1B00U, 4096U, false);
  /* Step 1851: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1852: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201B00U, 4096U, false);
  /* Step 1853: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1854: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241B00U, 4096U, false);
  /* Step 1855: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1856: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281B00U, 4096U, false);
  /* Step 1857: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1858: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1B00U, 4096U, false);
  /* Step 1859: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1860: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301B00U, 4096U, false);
  /* Step 1861: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1862: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341B00U, 4096U, false);
  /* Step 1863: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1864: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381B00U, 4096U, false);
  /* Step 1865: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1866: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1B00U, 4096U, false);
  /* Step 1867: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1868: [up_proj] DRAIN */
  nmp_op_drain(0x0080C300U, 2048U, true);
  /* Step 1869: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401B00U, 128U);
  /* Step 1870: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001B80U, 4096U, true);
  /* Step 1871: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1872: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041B80U, 4096U, false);
  /* Step 1873: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1874: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081B80U, 4096U, false);
  /* Step 1875: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1876: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1B80U, 4096U, false);
  /* Step 1877: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1878: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101B80U, 4096U, false);
  /* Step 1879: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1880: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141B80U, 4096U, false);
  /* Step 1881: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1882: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181B80U, 4096U, false);
  /* Step 1883: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1884: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1B80U, 4096U, false);
  /* Step 1885: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1886: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201B80U, 4096U, false);
  /* Step 1887: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1888: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241B80U, 4096U, false);
  /* Step 1889: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1890: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281B80U, 4096U, false);
  /* Step 1891: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1892: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1B80U, 4096U, false);
  /* Step 1893: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1894: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301B80U, 4096U, false);
  /* Step 1895: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1896: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341B80U, 4096U, false);
  /* Step 1897: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1898: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381B80U, 4096U, false);
  /* Step 1899: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1900: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1B80U, 4096U, false);
  /* Step 1901: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1902: [up_proj] DRAIN */
  nmp_op_drain(0x0080C380U, 2048U, true);
  /* Step 1903: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401B80U, 128U);
  /* Step 1904: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001C00U, 4096U, true);
  /* Step 1905: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1906: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041C00U, 4096U, false);
  /* Step 1907: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1908: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081C00U, 4096U, false);
  /* Step 1909: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1910: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1C00U, 4096U, false);
  /* Step 1911: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1912: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101C00U, 4096U, false);
  /* Step 1913: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1914: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141C00U, 4096U, false);
  /* Step 1915: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1916: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181C00U, 4096U, false);
  /* Step 1917: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1918: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1C00U, 4096U, false);
  /* Step 1919: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1920: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201C00U, 4096U, false);
  /* Step 1921: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1922: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241C00U, 4096U, false);
  /* Step 1923: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1924: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281C00U, 4096U, false);
  /* Step 1925: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1926: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1C00U, 4096U, false);
  /* Step 1927: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1928: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301C00U, 4096U, false);
  /* Step 1929: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1930: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341C00U, 4096U, false);
  /* Step 1931: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1932: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381C00U, 4096U, false);
  /* Step 1933: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1934: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1C00U, 4096U, false);
  /* Step 1935: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1936: [up_proj] DRAIN */
  nmp_op_drain(0x0080C400U, 2048U, true);
  /* Step 1937: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401C00U, 128U);
  /* Step 1938: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001C80U, 4096U, true);
  /* Step 1939: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1940: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041C80U, 4096U, false);
  /* Step 1941: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1942: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081C80U, 4096U, false);
  /* Step 1943: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1944: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1C80U, 4096U, false);
  /* Step 1945: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1946: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101C80U, 4096U, false);
  /* Step 1947: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1948: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141C80U, 4096U, false);
  /* Step 1949: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1950: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181C80U, 4096U, false);
  /* Step 1951: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1952: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1C80U, 4096U, false);
  /* Step 1953: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1954: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201C80U, 4096U, false);
  /* Step 1955: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1956: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241C80U, 4096U, false);
  /* Step 1957: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1958: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281C80U, 4096U, false);
  /* Step 1959: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1960: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1C80U, 4096U, false);
  /* Step 1961: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1962: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301C80U, 4096U, false);
  /* Step 1963: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1964: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341C80U, 4096U, false);
  /* Step 1965: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 1966: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381C80U, 4096U, false);
  /* Step 1967: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 1968: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1C80U, 4096U, false);
  /* Step 1969: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 1970: [up_proj] DRAIN */
  nmp_op_drain(0x0080C480U, 2048U, true);
  /* Step 1971: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401C80U, 128U);
  /* Step 1972: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001D00U, 4096U, true);
  /* Step 1973: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 1974: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041D00U, 4096U, false);
  /* Step 1975: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 1976: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081D00U, 4096U, false);
  /* Step 1977: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 1978: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1D00U, 4096U, false);
  /* Step 1979: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 1980: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101D00U, 4096U, false);
  /* Step 1981: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 1982: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141D00U, 4096U, false);
  /* Step 1983: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 1984: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181D00U, 4096U, false);
  /* Step 1985: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 1986: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1D00U, 4096U, false);
  /* Step 1987: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 1988: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201D00U, 4096U, false);
  /* Step 1989: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 1990: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241D00U, 4096U, false);
  /* Step 1991: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 1992: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281D00U, 4096U, false);
  /* Step 1993: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 1994: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1D00U, 4096U, false);
  /* Step 1995: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 1996: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301D00U, 4096U, false);
  /* Step 1997: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 1998: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341D00U, 4096U, false);
  /* Step 1999: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 2000: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381D00U, 4096U, false);
  /* Step 2001: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 2002: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1D00U, 4096U, false);
  /* Step 2003: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 2004: [up_proj] DRAIN */
  nmp_op_drain(0x0080C500U, 2048U, true);
  /* Step 2005: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401D00U, 128U);
  /* Step 2006: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001D80U, 4096U, true);
  /* Step 2007: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 2008: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041D80U, 4096U, false);
  /* Step 2009: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 2010: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081D80U, 4096U, false);
  /* Step 2011: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 2012: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1D80U, 4096U, false);
  /* Step 2013: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 2014: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101D80U, 4096U, false);
  /* Step 2015: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 2016: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141D80U, 4096U, false);
  /* Step 2017: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 2018: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181D80U, 4096U, false);
  /* Step 2019: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 2020: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1D80U, 4096U, false);
  /* Step 2021: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 2022: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201D80U, 4096U, false);
  /* Step 2023: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 2024: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241D80U, 4096U, false);
  /* Step 2025: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 2026: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281D80U, 4096U, false);
  /* Step 2027: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 2028: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1D80U, 4096U, false);
  /* Step 2029: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 2030: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301D80U, 4096U, false);
  /* Step 2031: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 2032: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341D80U, 4096U, false);
  /* Step 2033: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 2034: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381D80U, 4096U, false);
  /* Step 2035: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 2036: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1D80U, 4096U, false);
  /* Step 2037: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 2038: [up_proj] DRAIN */
  nmp_op_drain(0x0080C580U, 2048U, true);
  /* Step 2039: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401D80U, 128U);
  /* Step 2040: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001E00U, 4096U, true);
  /* Step 2041: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 2042: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041E00U, 4096U, false);
  /* Step 2043: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 2044: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081E00U, 4096U, false);
  /* Step 2045: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 2046: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1E00U, 4096U, false);
  /* Step 2047: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 2048: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101E00U, 4096U, false);
  /* Step 2049: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 2050: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141E00U, 4096U, false);
  /* Step 2051: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 2052: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181E00U, 4096U, false);
  /* Step 2053: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 2054: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1E00U, 4096U, false);
  /* Step 2055: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 2056: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201E00U, 4096U, false);
  /* Step 2057: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 2058: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241E00U, 4096U, false);
  /* Step 2059: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 2060: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281E00U, 4096U, false);
  /* Step 2061: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 2062: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1E00U, 4096U, false);
  /* Step 2063: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 2064: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301E00U, 4096U, false);
  /* Step 2065: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 2066: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341E00U, 4096U, false);
  /* Step 2067: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 2068: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381E00U, 4096U, false);
  /* Step 2069: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 2070: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1E00U, 4096U, false);
  /* Step 2071: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 2072: [up_proj] DRAIN */
  nmp_op_drain(0x0080C600U, 2048U, true);
  /* Step 2073: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401E00U, 128U);
  /* Step 2074: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001E80U, 4096U, true);
  /* Step 2075: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 2076: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041E80U, 4096U, false);
  /* Step 2077: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 2078: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081E80U, 4096U, false);
  /* Step 2079: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 2080: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1E80U, 4096U, false);
  /* Step 2081: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 2082: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101E80U, 4096U, false);
  /* Step 2083: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 2084: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141E80U, 4096U, false);
  /* Step 2085: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 2086: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181E80U, 4096U, false);
  /* Step 2087: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 2088: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1E80U, 4096U, false);
  /* Step 2089: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 2090: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201E80U, 4096U, false);
  /* Step 2091: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 2092: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241E80U, 4096U, false);
  /* Step 2093: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 2094: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281E80U, 4096U, false);
  /* Step 2095: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 2096: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1E80U, 4096U, false);
  /* Step 2097: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 2098: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301E80U, 4096U, false);
  /* Step 2099: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 2100: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341E80U, 4096U, false);
  /* Step 2101: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 2102: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381E80U, 4096U, false);
  /* Step 2103: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 2104: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1E80U, 4096U, false);
  /* Step 2105: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 2106: [up_proj] DRAIN */
  nmp_op_drain(0x0080C680U, 2048U, true);
  /* Step 2107: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401E80U, 128U);
  /* Step 2108: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001F00U, 4096U, true);
  /* Step 2109: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 2110: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041F00U, 4096U, false);
  /* Step 2111: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 2112: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081F00U, 4096U, false);
  /* Step 2113: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 2114: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1F00U, 4096U, false);
  /* Step 2115: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 2116: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101F00U, 4096U, false);
  /* Step 2117: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 2118: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141F00U, 4096U, false);
  /* Step 2119: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 2120: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181F00U, 4096U, false);
  /* Step 2121: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 2122: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1F00U, 4096U, false);
  /* Step 2123: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 2124: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201F00U, 4096U, false);
  /* Step 2125: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 2126: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241F00U, 4096U, false);
  /* Step 2127: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 2128: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281F00U, 4096U, false);
  /* Step 2129: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 2130: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1F00U, 4096U, false);
  /* Step 2131: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 2132: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301F00U, 4096U, false);
  /* Step 2133: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 2134: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341F00U, 4096U, false);
  /* Step 2135: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 2136: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381F00U, 4096U, false);
  /* Step 2137: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 2138: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1F00U, 4096U, false);
  /* Step 2139: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 2140: [up_proj] DRAIN */
  nmp_op_drain(0x0080C700U, 2048U, true);
  /* Step 2141: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401F00U, 128U);
  /* Step 2142: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00001F80U, 4096U, true);
  /* Step 2143: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802800U, 2048U);
  /* Step 2144: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00041F80U, 4096U, false);
  /* Step 2145: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802880U, 2048U);
  /* Step 2146: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00081F80U, 4096U, false);
  /* Step 2147: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802900U, 2048U);
  /* Step 2148: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x000C1F80U, 4096U, false);
  /* Step 2149: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802980U, 2048U);
  /* Step 2150: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00101F80U, 4096U, false);
  /* Step 2151: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A00U, 2048U);
  /* Step 2152: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00141F80U, 4096U, false);
  /* Step 2153: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802A80U, 2048U);
  /* Step 2154: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00181F80U, 4096U, false);
  /* Step 2155: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B00U, 2048U);
  /* Step 2156: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x001C1F80U, 4096U, false);
  /* Step 2157: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802B80U, 2048U);
  /* Step 2158: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00201F80U, 4096U, false);
  /* Step 2159: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C00U, 2048U);
  /* Step 2160: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00241F80U, 4096U, false);
  /* Step 2161: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802C80U, 2048U);
  /* Step 2162: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00281F80U, 4096U, false);
  /* Step 2163: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D00U, 2048U);
  /* Step 2164: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x002C1F80U, 4096U, false);
  /* Step 2165: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802D80U, 2048U);
  /* Step 2166: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00301F80U, 4096U, false);
  /* Step 2167: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E00U, 2048U);
  /* Step 2168: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00341F80U, 4096U, false);
  /* Step 2169: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802E80U, 2048U);
  /* Step 2170: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00381F80U, 4096U, false);
  /* Step 2171: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F00U, 2048U);
  /* Step 2172: [up_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x003C1F80U, 4096U, false);
  /* Step 2173: [up_proj] STREAM_ACT */
  nmp_op_stream_act(0x00802F80U, 2048U);
  /* Step 2174: [up_proj] DRAIN */
  nmp_op_drain(0x0080C780U, 2048U, true);
  /* Step 2175: [up_proj] ADD_BIAS */
  nmp_op_add_bias(0x00401F80U, 128U);
  /* Step 2176: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402000U, 4096U, true);
  /* Step 2177: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2178: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412000U, 4096U, false);
  /* Step 2179: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2180: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422000U, 4096U, false);
  /* Step 2181: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2182: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432000U, 4096U, false);
  /* Step 2183: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2184: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442000U, 4096U, false);
  /* Step 2185: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2186: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452000U, 4096U, false);
  /* Step 2187: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2188: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462000U, 4096U, false);
  /* Step 2189: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2190: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472000U, 4096U, false);
  /* Step 2191: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2192: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482000U, 4096U, false);
  /* Step 2193: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2194: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492000U, 4096U, false);
  /* Step 2195: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2196: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2000U, 4096U, false);
  /* Step 2197: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2198: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2000U, 4096U, false);
  /* Step 2199: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2200: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2000U, 4096U, false);
  /* Step 2201: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2202: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2000U, 4096U, false);
  /* Step 2203: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2204: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2000U, 4096U, false);
  /* Step 2205: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2206: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2000U, 4096U, false);
  /* Step 2207: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2208: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502000U, 4096U, false);
  /* Step 2209: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2210: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512000U, 4096U, false);
  /* Step 2211: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2212: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522000U, 4096U, false);
  /* Step 2213: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2214: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532000U, 4096U, false);
  /* Step 2215: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2216: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542000U, 4096U, false);
  /* Step 2217: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2218: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552000U, 4096U, false);
  /* Step 2219: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 2220: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562000U, 4096U, false);
  /* Step 2221: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 2222: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572000U, 4096U, false);
  /* Step 2223: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 2224: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582000U, 4096U, false);
  /* Step 2225: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 2226: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592000U, 4096U, false);
  /* Step 2227: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 2228: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2000U, 4096U, false);
  /* Step 2229: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 2230: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2000U, 4096U, false);
  /* Step 2231: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 2232: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2000U, 4096U, false);
  /* Step 2233: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 2234: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2000U, 4096U, false);
  /* Step 2235: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 2236: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2000U, 4096U, false);
  /* Step 2237: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 2238: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2000U, 4096U, false);
  /* Step 2239: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 2240: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602000U, 4096U, false);
  /* Step 2241: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 2242: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612000U, 4096U, false);
  /* Step 2243: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 2244: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622000U, 4096U, false);
  /* Step 2245: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 2246: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632000U, 4096U, false);
  /* Step 2247: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 2248: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642000U, 4096U, false);
  /* Step 2249: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 2250: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652000U, 4096U, false);
  /* Step 2251: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 2252: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662000U, 4096U, false);
  /* Step 2253: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 2254: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672000U, 4096U, false);
  /* Step 2255: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 2256: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682000U, 4096U, false);
  /* Step 2257: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 2258: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692000U, 4096U, false);
  /* Step 2259: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 2260: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2000U, 4096U, false);
  /* Step 2261: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 2262: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2000U, 4096U, false);
  /* Step 2263: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 2264: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2000U, 4096U, false);
  /* Step 2265: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 2266: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2000U, 4096U, false);
  /* Step 2267: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 2268: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2000U, 4096U, false);
  /* Step 2269: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 2270: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2000U, 4096U, false);
  /* Step 2271: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 2272: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702000U, 4096U, false);
  /* Step 2273: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 2274: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712000U, 4096U, false);
  /* Step 2275: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 2276: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722000U, 4096U, false);
  /* Step 2277: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 2278: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732000U, 4096U, false);
  /* Step 2279: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 2280: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742000U, 4096U, false);
  /* Step 2281: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 2282: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752000U, 4096U, false);
  /* Step 2283: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 2284: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762000U, 4096U, false);
  /* Step 2285: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 2286: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772000U, 4096U, false);
  /* Step 2287: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 2288: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782000U, 4096U, false);
  /* Step 2289: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 2290: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792000U, 4096U, false);
  /* Step 2291: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 2292: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2000U, 4096U, false);
  /* Step 2293: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 2294: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2000U, 4096U, false);
  /* Step 2295: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 2296: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2000U, 4096U, false);
  /* Step 2297: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 2298: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2000U, 4096U, false);
  /* Step 2299: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 2300: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2000U, 4096U, false);
  /* Step 2301: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 2302: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2000U, 4096U, false);
  /* Step 2303: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 2304: [down_proj] DRAIN */
  nmp_op_drain(0x0082A800U, 2048U, true);
  /* Step 2305: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802000U, 128U);
  /* Step 2306: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402080U, 4096U, true);
  /* Step 2307: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2308: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412080U, 4096U, false);
  /* Step 2309: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2310: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422080U, 4096U, false);
  /* Step 2311: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2312: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432080U, 4096U, false);
  /* Step 2313: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2314: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442080U, 4096U, false);
  /* Step 2315: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2316: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452080U, 4096U, false);
  /* Step 2317: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2318: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462080U, 4096U, false);
  /* Step 2319: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2320: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472080U, 4096U, false);
  /* Step 2321: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2322: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482080U, 4096U, false);
  /* Step 2323: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2324: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492080U, 4096U, false);
  /* Step 2325: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2326: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2080U, 4096U, false);
  /* Step 2327: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2328: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2080U, 4096U, false);
  /* Step 2329: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2330: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2080U, 4096U, false);
  /* Step 2331: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2332: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2080U, 4096U, false);
  /* Step 2333: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2334: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2080U, 4096U, false);
  /* Step 2335: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2336: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2080U, 4096U, false);
  /* Step 2337: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2338: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502080U, 4096U, false);
  /* Step 2339: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2340: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512080U, 4096U, false);
  /* Step 2341: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2342: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522080U, 4096U, false);
  /* Step 2343: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2344: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532080U, 4096U, false);
  /* Step 2345: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2346: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542080U, 4096U, false);
  /* Step 2347: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2348: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552080U, 4096U, false);
  /* Step 2349: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 2350: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562080U, 4096U, false);
  /* Step 2351: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 2352: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572080U, 4096U, false);
  /* Step 2353: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 2354: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582080U, 4096U, false);
  /* Step 2355: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 2356: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592080U, 4096U, false);
  /* Step 2357: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 2358: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2080U, 4096U, false);
  /* Step 2359: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 2360: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2080U, 4096U, false);
  /* Step 2361: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 2362: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2080U, 4096U, false);
  /* Step 2363: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 2364: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2080U, 4096U, false);
  /* Step 2365: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 2366: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2080U, 4096U, false);
  /* Step 2367: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 2368: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2080U, 4096U, false);
  /* Step 2369: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 2370: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602080U, 4096U, false);
  /* Step 2371: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 2372: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612080U, 4096U, false);
  /* Step 2373: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 2374: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622080U, 4096U, false);
  /* Step 2375: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 2376: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632080U, 4096U, false);
  /* Step 2377: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 2378: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642080U, 4096U, false);
  /* Step 2379: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 2380: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652080U, 4096U, false);
  /* Step 2381: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 2382: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662080U, 4096U, false);
  /* Step 2383: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 2384: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672080U, 4096U, false);
  /* Step 2385: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 2386: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682080U, 4096U, false);
  /* Step 2387: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 2388: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692080U, 4096U, false);
  /* Step 2389: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 2390: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2080U, 4096U, false);
  /* Step 2391: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 2392: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2080U, 4096U, false);
  /* Step 2393: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 2394: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2080U, 4096U, false);
  /* Step 2395: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 2396: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2080U, 4096U, false);
  /* Step 2397: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 2398: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2080U, 4096U, false);
  /* Step 2399: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 2400: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2080U, 4096U, false);
  /* Step 2401: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 2402: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702080U, 4096U, false);
  /* Step 2403: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 2404: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712080U, 4096U, false);
  /* Step 2405: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 2406: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722080U, 4096U, false);
  /* Step 2407: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 2408: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732080U, 4096U, false);
  /* Step 2409: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 2410: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742080U, 4096U, false);
  /* Step 2411: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 2412: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752080U, 4096U, false);
  /* Step 2413: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 2414: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762080U, 4096U, false);
  /* Step 2415: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 2416: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772080U, 4096U, false);
  /* Step 2417: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 2418: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782080U, 4096U, false);
  /* Step 2419: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 2420: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792080U, 4096U, false);
  /* Step 2421: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 2422: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2080U, 4096U, false);
  /* Step 2423: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 2424: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2080U, 4096U, false);
  /* Step 2425: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 2426: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2080U, 4096U, false);
  /* Step 2427: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 2428: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2080U, 4096U, false);
  /* Step 2429: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 2430: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2080U, 4096U, false);
  /* Step 2431: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 2432: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2080U, 4096U, false);
  /* Step 2433: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 2434: [down_proj] DRAIN */
  nmp_op_drain(0x0082A880U, 2048U, true);
  /* Step 2435: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802080U, 128U);
  /* Step 2436: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402100U, 4096U, true);
  /* Step 2437: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2438: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412100U, 4096U, false);
  /* Step 2439: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2440: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422100U, 4096U, false);
  /* Step 2441: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2442: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432100U, 4096U, false);
  /* Step 2443: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2444: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442100U, 4096U, false);
  /* Step 2445: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2446: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452100U, 4096U, false);
  /* Step 2447: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2448: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462100U, 4096U, false);
  /* Step 2449: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2450: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472100U, 4096U, false);
  /* Step 2451: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2452: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482100U, 4096U, false);
  /* Step 2453: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2454: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492100U, 4096U, false);
  /* Step 2455: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2456: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2100U, 4096U, false);
  /* Step 2457: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2458: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2100U, 4096U, false);
  /* Step 2459: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2460: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2100U, 4096U, false);
  /* Step 2461: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2462: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2100U, 4096U, false);
  /* Step 2463: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2464: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2100U, 4096U, false);
  /* Step 2465: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2466: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2100U, 4096U, false);
  /* Step 2467: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2468: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502100U, 4096U, false);
  /* Step 2469: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2470: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512100U, 4096U, false);
  /* Step 2471: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2472: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522100U, 4096U, false);
  /* Step 2473: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2474: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532100U, 4096U, false);
  /* Step 2475: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2476: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542100U, 4096U, false);
  /* Step 2477: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2478: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552100U, 4096U, false);
  /* Step 2479: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 2480: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562100U, 4096U, false);
  /* Step 2481: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 2482: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572100U, 4096U, false);
  /* Step 2483: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 2484: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582100U, 4096U, false);
  /* Step 2485: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 2486: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592100U, 4096U, false);
  /* Step 2487: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 2488: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2100U, 4096U, false);
  /* Step 2489: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 2490: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2100U, 4096U, false);
  /* Step 2491: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 2492: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2100U, 4096U, false);
  /* Step 2493: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 2494: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2100U, 4096U, false);
  /* Step 2495: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 2496: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2100U, 4096U, false);
  /* Step 2497: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 2498: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2100U, 4096U, false);
  /* Step 2499: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 2500: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602100U, 4096U, false);
  /* Step 2501: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 2502: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612100U, 4096U, false);
  /* Step 2503: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 2504: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622100U, 4096U, false);
  /* Step 2505: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 2506: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632100U, 4096U, false);
  /* Step 2507: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 2508: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642100U, 4096U, false);
  /* Step 2509: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 2510: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652100U, 4096U, false);
  /* Step 2511: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 2512: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662100U, 4096U, false);
  /* Step 2513: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 2514: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672100U, 4096U, false);
  /* Step 2515: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 2516: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682100U, 4096U, false);
  /* Step 2517: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 2518: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692100U, 4096U, false);
  /* Step 2519: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 2520: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2100U, 4096U, false);
  /* Step 2521: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 2522: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2100U, 4096U, false);
  /* Step 2523: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 2524: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2100U, 4096U, false);
  /* Step 2525: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 2526: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2100U, 4096U, false);
  /* Step 2527: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 2528: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2100U, 4096U, false);
  /* Step 2529: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 2530: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2100U, 4096U, false);
  /* Step 2531: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 2532: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702100U, 4096U, false);
  /* Step 2533: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 2534: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712100U, 4096U, false);
  /* Step 2535: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 2536: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722100U, 4096U, false);
  /* Step 2537: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 2538: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732100U, 4096U, false);
  /* Step 2539: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 2540: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742100U, 4096U, false);
  /* Step 2541: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 2542: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752100U, 4096U, false);
  /* Step 2543: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 2544: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762100U, 4096U, false);
  /* Step 2545: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 2546: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772100U, 4096U, false);
  /* Step 2547: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 2548: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782100U, 4096U, false);
  /* Step 2549: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 2550: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792100U, 4096U, false);
  /* Step 2551: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 2552: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2100U, 4096U, false);
  /* Step 2553: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 2554: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2100U, 4096U, false);
  /* Step 2555: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 2556: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2100U, 4096U, false);
  /* Step 2557: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 2558: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2100U, 4096U, false);
  /* Step 2559: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 2560: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2100U, 4096U, false);
  /* Step 2561: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 2562: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2100U, 4096U, false);
  /* Step 2563: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 2564: [down_proj] DRAIN */
  nmp_op_drain(0x0082A900U, 2048U, true);
  /* Step 2565: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802100U, 128U);
  /* Step 2566: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402180U, 4096U, true);
  /* Step 2567: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2568: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412180U, 4096U, false);
  /* Step 2569: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2570: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422180U, 4096U, false);
  /* Step 2571: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2572: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432180U, 4096U, false);
  /* Step 2573: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2574: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442180U, 4096U, false);
  /* Step 2575: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2576: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452180U, 4096U, false);
  /* Step 2577: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2578: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462180U, 4096U, false);
  /* Step 2579: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2580: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472180U, 4096U, false);
  /* Step 2581: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2582: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482180U, 4096U, false);
  /* Step 2583: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2584: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492180U, 4096U, false);
  /* Step 2585: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2586: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2180U, 4096U, false);
  /* Step 2587: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2588: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2180U, 4096U, false);
  /* Step 2589: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2590: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2180U, 4096U, false);
  /* Step 2591: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2592: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2180U, 4096U, false);
  /* Step 2593: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2594: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2180U, 4096U, false);
  /* Step 2595: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2596: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2180U, 4096U, false);
  /* Step 2597: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2598: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502180U, 4096U, false);
  /* Step 2599: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2600: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512180U, 4096U, false);
  /* Step 2601: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2602: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522180U, 4096U, false);
  /* Step 2603: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2604: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532180U, 4096U, false);
  /* Step 2605: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2606: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542180U, 4096U, false);
  /* Step 2607: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2608: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552180U, 4096U, false);
  /* Step 2609: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 2610: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562180U, 4096U, false);
  /* Step 2611: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 2612: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572180U, 4096U, false);
  /* Step 2613: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 2614: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582180U, 4096U, false);
  /* Step 2615: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 2616: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592180U, 4096U, false);
  /* Step 2617: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 2618: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2180U, 4096U, false);
  /* Step 2619: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 2620: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2180U, 4096U, false);
  /* Step 2621: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 2622: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2180U, 4096U, false);
  /* Step 2623: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 2624: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2180U, 4096U, false);
  /* Step 2625: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 2626: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2180U, 4096U, false);
  /* Step 2627: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 2628: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2180U, 4096U, false);
  /* Step 2629: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 2630: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602180U, 4096U, false);
  /* Step 2631: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 2632: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612180U, 4096U, false);
  /* Step 2633: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 2634: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622180U, 4096U, false);
  /* Step 2635: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 2636: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632180U, 4096U, false);
  /* Step 2637: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 2638: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642180U, 4096U, false);
  /* Step 2639: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 2640: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652180U, 4096U, false);
  /* Step 2641: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 2642: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662180U, 4096U, false);
  /* Step 2643: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 2644: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672180U, 4096U, false);
  /* Step 2645: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 2646: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682180U, 4096U, false);
  /* Step 2647: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 2648: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692180U, 4096U, false);
  /* Step 2649: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 2650: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2180U, 4096U, false);
  /* Step 2651: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 2652: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2180U, 4096U, false);
  /* Step 2653: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 2654: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2180U, 4096U, false);
  /* Step 2655: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 2656: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2180U, 4096U, false);
  /* Step 2657: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 2658: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2180U, 4096U, false);
  /* Step 2659: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 2660: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2180U, 4096U, false);
  /* Step 2661: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 2662: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702180U, 4096U, false);
  /* Step 2663: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 2664: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712180U, 4096U, false);
  /* Step 2665: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 2666: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722180U, 4096U, false);
  /* Step 2667: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 2668: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732180U, 4096U, false);
  /* Step 2669: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 2670: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742180U, 4096U, false);
  /* Step 2671: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 2672: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752180U, 4096U, false);
  /* Step 2673: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 2674: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762180U, 4096U, false);
  /* Step 2675: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 2676: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772180U, 4096U, false);
  /* Step 2677: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 2678: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782180U, 4096U, false);
  /* Step 2679: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 2680: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792180U, 4096U, false);
  /* Step 2681: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 2682: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2180U, 4096U, false);
  /* Step 2683: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 2684: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2180U, 4096U, false);
  /* Step 2685: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 2686: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2180U, 4096U, false);
  /* Step 2687: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 2688: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2180U, 4096U, false);
  /* Step 2689: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 2690: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2180U, 4096U, false);
  /* Step 2691: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 2692: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2180U, 4096U, false);
  /* Step 2693: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 2694: [down_proj] DRAIN */
  nmp_op_drain(0x0082A980U, 2048U, true);
  /* Step 2695: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802180U, 128U);
  /* Step 2696: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402200U, 4096U, true);
  /* Step 2697: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2698: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412200U, 4096U, false);
  /* Step 2699: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2700: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422200U, 4096U, false);
  /* Step 2701: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2702: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432200U, 4096U, false);
  /* Step 2703: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2704: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442200U, 4096U, false);
  /* Step 2705: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2706: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452200U, 4096U, false);
  /* Step 2707: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2708: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462200U, 4096U, false);
  /* Step 2709: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2710: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472200U, 4096U, false);
  /* Step 2711: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2712: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482200U, 4096U, false);
  /* Step 2713: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2714: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492200U, 4096U, false);
  /* Step 2715: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2716: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2200U, 4096U, false);
  /* Step 2717: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2718: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2200U, 4096U, false);
  /* Step 2719: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2720: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2200U, 4096U, false);
  /* Step 2721: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2722: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2200U, 4096U, false);
  /* Step 2723: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2724: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2200U, 4096U, false);
  /* Step 2725: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2726: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2200U, 4096U, false);
  /* Step 2727: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2728: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502200U, 4096U, false);
  /* Step 2729: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2730: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512200U, 4096U, false);
  /* Step 2731: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2732: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522200U, 4096U, false);
  /* Step 2733: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2734: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532200U, 4096U, false);
  /* Step 2735: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2736: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542200U, 4096U, false);
  /* Step 2737: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2738: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552200U, 4096U, false);
  /* Step 2739: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 2740: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562200U, 4096U, false);
  /* Step 2741: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 2742: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572200U, 4096U, false);
  /* Step 2743: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 2744: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582200U, 4096U, false);
  /* Step 2745: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 2746: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592200U, 4096U, false);
  /* Step 2747: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 2748: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2200U, 4096U, false);
  /* Step 2749: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 2750: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2200U, 4096U, false);
  /* Step 2751: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 2752: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2200U, 4096U, false);
  /* Step 2753: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 2754: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2200U, 4096U, false);
  /* Step 2755: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 2756: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2200U, 4096U, false);
  /* Step 2757: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 2758: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2200U, 4096U, false);
  /* Step 2759: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 2760: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602200U, 4096U, false);
  /* Step 2761: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 2762: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612200U, 4096U, false);
  /* Step 2763: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 2764: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622200U, 4096U, false);
  /* Step 2765: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 2766: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632200U, 4096U, false);
  /* Step 2767: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 2768: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642200U, 4096U, false);
  /* Step 2769: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 2770: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652200U, 4096U, false);
  /* Step 2771: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 2772: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662200U, 4096U, false);
  /* Step 2773: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 2774: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672200U, 4096U, false);
  /* Step 2775: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 2776: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682200U, 4096U, false);
  /* Step 2777: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 2778: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692200U, 4096U, false);
  /* Step 2779: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 2780: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2200U, 4096U, false);
  /* Step 2781: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 2782: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2200U, 4096U, false);
  /* Step 2783: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 2784: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2200U, 4096U, false);
  /* Step 2785: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 2786: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2200U, 4096U, false);
  /* Step 2787: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 2788: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2200U, 4096U, false);
  /* Step 2789: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 2790: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2200U, 4096U, false);
  /* Step 2791: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 2792: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702200U, 4096U, false);
  /* Step 2793: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 2794: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712200U, 4096U, false);
  /* Step 2795: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 2796: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722200U, 4096U, false);
  /* Step 2797: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 2798: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732200U, 4096U, false);
  /* Step 2799: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 2800: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742200U, 4096U, false);
  /* Step 2801: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 2802: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752200U, 4096U, false);
  /* Step 2803: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 2804: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762200U, 4096U, false);
  /* Step 2805: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 2806: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772200U, 4096U, false);
  /* Step 2807: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 2808: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782200U, 4096U, false);
  /* Step 2809: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 2810: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792200U, 4096U, false);
  /* Step 2811: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 2812: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2200U, 4096U, false);
  /* Step 2813: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 2814: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2200U, 4096U, false);
  /* Step 2815: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 2816: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2200U, 4096U, false);
  /* Step 2817: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 2818: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2200U, 4096U, false);
  /* Step 2819: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 2820: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2200U, 4096U, false);
  /* Step 2821: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 2822: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2200U, 4096U, false);
  /* Step 2823: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 2824: [down_proj] DRAIN */
  nmp_op_drain(0x0082AA00U, 2048U, true);
  /* Step 2825: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802200U, 128U);
  /* Step 2826: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402280U, 4096U, true);
  /* Step 2827: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2828: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412280U, 4096U, false);
  /* Step 2829: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2830: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422280U, 4096U, false);
  /* Step 2831: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2832: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432280U, 4096U, false);
  /* Step 2833: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2834: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442280U, 4096U, false);
  /* Step 2835: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2836: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452280U, 4096U, false);
  /* Step 2837: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2838: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462280U, 4096U, false);
  /* Step 2839: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2840: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472280U, 4096U, false);
  /* Step 2841: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2842: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482280U, 4096U, false);
  /* Step 2843: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2844: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492280U, 4096U, false);
  /* Step 2845: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2846: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2280U, 4096U, false);
  /* Step 2847: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2848: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2280U, 4096U, false);
  /* Step 2849: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2850: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2280U, 4096U, false);
  /* Step 2851: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2852: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2280U, 4096U, false);
  /* Step 2853: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2854: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2280U, 4096U, false);
  /* Step 2855: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2856: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2280U, 4096U, false);
  /* Step 2857: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2858: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502280U, 4096U, false);
  /* Step 2859: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2860: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512280U, 4096U, false);
  /* Step 2861: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2862: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522280U, 4096U, false);
  /* Step 2863: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2864: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532280U, 4096U, false);
  /* Step 2865: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2866: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542280U, 4096U, false);
  /* Step 2867: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2868: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552280U, 4096U, false);
  /* Step 2869: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 2870: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562280U, 4096U, false);
  /* Step 2871: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 2872: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572280U, 4096U, false);
  /* Step 2873: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 2874: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582280U, 4096U, false);
  /* Step 2875: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 2876: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592280U, 4096U, false);
  /* Step 2877: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 2878: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2280U, 4096U, false);
  /* Step 2879: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 2880: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2280U, 4096U, false);
  /* Step 2881: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 2882: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2280U, 4096U, false);
  /* Step 2883: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 2884: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2280U, 4096U, false);
  /* Step 2885: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 2886: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2280U, 4096U, false);
  /* Step 2887: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 2888: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2280U, 4096U, false);
  /* Step 2889: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 2890: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602280U, 4096U, false);
  /* Step 2891: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 2892: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612280U, 4096U, false);
  /* Step 2893: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 2894: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622280U, 4096U, false);
  /* Step 2895: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 2896: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632280U, 4096U, false);
  /* Step 2897: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 2898: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642280U, 4096U, false);
  /* Step 2899: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 2900: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652280U, 4096U, false);
  /* Step 2901: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 2902: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662280U, 4096U, false);
  /* Step 2903: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 2904: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672280U, 4096U, false);
  /* Step 2905: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 2906: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682280U, 4096U, false);
  /* Step 2907: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 2908: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692280U, 4096U, false);
  /* Step 2909: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 2910: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2280U, 4096U, false);
  /* Step 2911: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 2912: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2280U, 4096U, false);
  /* Step 2913: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 2914: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2280U, 4096U, false);
  /* Step 2915: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 2916: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2280U, 4096U, false);
  /* Step 2917: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 2918: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2280U, 4096U, false);
  /* Step 2919: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 2920: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2280U, 4096U, false);
  /* Step 2921: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 2922: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702280U, 4096U, false);
  /* Step 2923: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 2924: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712280U, 4096U, false);
  /* Step 2925: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 2926: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722280U, 4096U, false);
  /* Step 2927: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 2928: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732280U, 4096U, false);
  /* Step 2929: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 2930: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742280U, 4096U, false);
  /* Step 2931: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 2932: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752280U, 4096U, false);
  /* Step 2933: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 2934: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762280U, 4096U, false);
  /* Step 2935: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 2936: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772280U, 4096U, false);
  /* Step 2937: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 2938: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782280U, 4096U, false);
  /* Step 2939: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 2940: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792280U, 4096U, false);
  /* Step 2941: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 2942: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2280U, 4096U, false);
  /* Step 2943: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 2944: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2280U, 4096U, false);
  /* Step 2945: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 2946: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2280U, 4096U, false);
  /* Step 2947: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 2948: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2280U, 4096U, false);
  /* Step 2949: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 2950: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2280U, 4096U, false);
  /* Step 2951: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 2952: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2280U, 4096U, false);
  /* Step 2953: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 2954: [down_proj] DRAIN */
  nmp_op_drain(0x0082AA80U, 2048U, true);
  /* Step 2955: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802280U, 128U);
  /* Step 2956: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402300U, 4096U, true);
  /* Step 2957: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 2958: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412300U, 4096U, false);
  /* Step 2959: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 2960: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422300U, 4096U, false);
  /* Step 2961: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 2962: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432300U, 4096U, false);
  /* Step 2963: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 2964: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442300U, 4096U, false);
  /* Step 2965: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 2966: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452300U, 4096U, false);
  /* Step 2967: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 2968: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462300U, 4096U, false);
  /* Step 2969: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 2970: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472300U, 4096U, false);
  /* Step 2971: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 2972: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482300U, 4096U, false);
  /* Step 2973: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 2974: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492300U, 4096U, false);
  /* Step 2975: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 2976: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2300U, 4096U, false);
  /* Step 2977: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 2978: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2300U, 4096U, false);
  /* Step 2979: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 2980: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2300U, 4096U, false);
  /* Step 2981: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 2982: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2300U, 4096U, false);
  /* Step 2983: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 2984: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2300U, 4096U, false);
  /* Step 2985: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 2986: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2300U, 4096U, false);
  /* Step 2987: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 2988: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502300U, 4096U, false);
  /* Step 2989: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 2990: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512300U, 4096U, false);
  /* Step 2991: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 2992: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522300U, 4096U, false);
  /* Step 2993: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 2994: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532300U, 4096U, false);
  /* Step 2995: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 2996: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542300U, 4096U, false);
  /* Step 2997: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 2998: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552300U, 4096U, false);
  /* Step 2999: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3000: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562300U, 4096U, false);
  /* Step 3001: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3002: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572300U, 4096U, false);
  /* Step 3003: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3004: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582300U, 4096U, false);
  /* Step 3005: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3006: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592300U, 4096U, false);
  /* Step 3007: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3008: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2300U, 4096U, false);
  /* Step 3009: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3010: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2300U, 4096U, false);
  /* Step 3011: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3012: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2300U, 4096U, false);
  /* Step 3013: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3014: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2300U, 4096U, false);
  /* Step 3015: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3016: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2300U, 4096U, false);
  /* Step 3017: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3018: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2300U, 4096U, false);
  /* Step 3019: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3020: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602300U, 4096U, false);
  /* Step 3021: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3022: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612300U, 4096U, false);
  /* Step 3023: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3024: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622300U, 4096U, false);
  /* Step 3025: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3026: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632300U, 4096U, false);
  /* Step 3027: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3028: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642300U, 4096U, false);
  /* Step 3029: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3030: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652300U, 4096U, false);
  /* Step 3031: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3032: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662300U, 4096U, false);
  /* Step 3033: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3034: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672300U, 4096U, false);
  /* Step 3035: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3036: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682300U, 4096U, false);
  /* Step 3037: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3038: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692300U, 4096U, false);
  /* Step 3039: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3040: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2300U, 4096U, false);
  /* Step 3041: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3042: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2300U, 4096U, false);
  /* Step 3043: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3044: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2300U, 4096U, false);
  /* Step 3045: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3046: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2300U, 4096U, false);
  /* Step 3047: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3048: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2300U, 4096U, false);
  /* Step 3049: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3050: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2300U, 4096U, false);
  /* Step 3051: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3052: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702300U, 4096U, false);
  /* Step 3053: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3054: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712300U, 4096U, false);
  /* Step 3055: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3056: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722300U, 4096U, false);
  /* Step 3057: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3058: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732300U, 4096U, false);
  /* Step 3059: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3060: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742300U, 4096U, false);
  /* Step 3061: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3062: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752300U, 4096U, false);
  /* Step 3063: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3064: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762300U, 4096U, false);
  /* Step 3065: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3066: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772300U, 4096U, false);
  /* Step 3067: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3068: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782300U, 4096U, false);
  /* Step 3069: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3070: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792300U, 4096U, false);
  /* Step 3071: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3072: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2300U, 4096U, false);
  /* Step 3073: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3074: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2300U, 4096U, false);
  /* Step 3075: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3076: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2300U, 4096U, false);
  /* Step 3077: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3078: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2300U, 4096U, false);
  /* Step 3079: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3080: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2300U, 4096U, false);
  /* Step 3081: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3082: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2300U, 4096U, false);
  /* Step 3083: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3084: [down_proj] DRAIN */
  nmp_op_drain(0x0082AB00U, 2048U, true);
  /* Step 3085: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802300U, 128U);
  /* Step 3086: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402380U, 4096U, true);
  /* Step 3087: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3088: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412380U, 4096U, false);
  /* Step 3089: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3090: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422380U, 4096U, false);
  /* Step 3091: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3092: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432380U, 4096U, false);
  /* Step 3093: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3094: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442380U, 4096U, false);
  /* Step 3095: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3096: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452380U, 4096U, false);
  /* Step 3097: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3098: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462380U, 4096U, false);
  /* Step 3099: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3100: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472380U, 4096U, false);
  /* Step 3101: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3102: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482380U, 4096U, false);
  /* Step 3103: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3104: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492380U, 4096U, false);
  /* Step 3105: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3106: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2380U, 4096U, false);
  /* Step 3107: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3108: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2380U, 4096U, false);
  /* Step 3109: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3110: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2380U, 4096U, false);
  /* Step 3111: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3112: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2380U, 4096U, false);
  /* Step 3113: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3114: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2380U, 4096U, false);
  /* Step 3115: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3116: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2380U, 4096U, false);
  /* Step 3117: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3118: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502380U, 4096U, false);
  /* Step 3119: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3120: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512380U, 4096U, false);
  /* Step 3121: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3122: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522380U, 4096U, false);
  /* Step 3123: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3124: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532380U, 4096U, false);
  /* Step 3125: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3126: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542380U, 4096U, false);
  /* Step 3127: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3128: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552380U, 4096U, false);
  /* Step 3129: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3130: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562380U, 4096U, false);
  /* Step 3131: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3132: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572380U, 4096U, false);
  /* Step 3133: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3134: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582380U, 4096U, false);
  /* Step 3135: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3136: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592380U, 4096U, false);
  /* Step 3137: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3138: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2380U, 4096U, false);
  /* Step 3139: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3140: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2380U, 4096U, false);
  /* Step 3141: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3142: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2380U, 4096U, false);
  /* Step 3143: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3144: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2380U, 4096U, false);
  /* Step 3145: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3146: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2380U, 4096U, false);
  /* Step 3147: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3148: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2380U, 4096U, false);
  /* Step 3149: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3150: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602380U, 4096U, false);
  /* Step 3151: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3152: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612380U, 4096U, false);
  /* Step 3153: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3154: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622380U, 4096U, false);
  /* Step 3155: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3156: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632380U, 4096U, false);
  /* Step 3157: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3158: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642380U, 4096U, false);
  /* Step 3159: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3160: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652380U, 4096U, false);
  /* Step 3161: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3162: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662380U, 4096U, false);
  /* Step 3163: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3164: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672380U, 4096U, false);
  /* Step 3165: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3166: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682380U, 4096U, false);
  /* Step 3167: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3168: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692380U, 4096U, false);
  /* Step 3169: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3170: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2380U, 4096U, false);
  /* Step 3171: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3172: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2380U, 4096U, false);
  /* Step 3173: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3174: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2380U, 4096U, false);
  /* Step 3175: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3176: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2380U, 4096U, false);
  /* Step 3177: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3178: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2380U, 4096U, false);
  /* Step 3179: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3180: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2380U, 4096U, false);
  /* Step 3181: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3182: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702380U, 4096U, false);
  /* Step 3183: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3184: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712380U, 4096U, false);
  /* Step 3185: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3186: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722380U, 4096U, false);
  /* Step 3187: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3188: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732380U, 4096U, false);
  /* Step 3189: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3190: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742380U, 4096U, false);
  /* Step 3191: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3192: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752380U, 4096U, false);
  /* Step 3193: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3194: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762380U, 4096U, false);
  /* Step 3195: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3196: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772380U, 4096U, false);
  /* Step 3197: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3198: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782380U, 4096U, false);
  /* Step 3199: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3200: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792380U, 4096U, false);
  /* Step 3201: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3202: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2380U, 4096U, false);
  /* Step 3203: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3204: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2380U, 4096U, false);
  /* Step 3205: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3206: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2380U, 4096U, false);
  /* Step 3207: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3208: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2380U, 4096U, false);
  /* Step 3209: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3210: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2380U, 4096U, false);
  /* Step 3211: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3212: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2380U, 4096U, false);
  /* Step 3213: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3214: [down_proj] DRAIN */
  nmp_op_drain(0x0082AB80U, 2048U, true);
  /* Step 3215: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802380U, 128U);
  /* Step 3216: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402400U, 4096U, true);
  /* Step 3217: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3218: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412400U, 4096U, false);
  /* Step 3219: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3220: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422400U, 4096U, false);
  /* Step 3221: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3222: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432400U, 4096U, false);
  /* Step 3223: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3224: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442400U, 4096U, false);
  /* Step 3225: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3226: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452400U, 4096U, false);
  /* Step 3227: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3228: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462400U, 4096U, false);
  /* Step 3229: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3230: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472400U, 4096U, false);
  /* Step 3231: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3232: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482400U, 4096U, false);
  /* Step 3233: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3234: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492400U, 4096U, false);
  /* Step 3235: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3236: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2400U, 4096U, false);
  /* Step 3237: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3238: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2400U, 4096U, false);
  /* Step 3239: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3240: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2400U, 4096U, false);
  /* Step 3241: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3242: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2400U, 4096U, false);
  /* Step 3243: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3244: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2400U, 4096U, false);
  /* Step 3245: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3246: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2400U, 4096U, false);
  /* Step 3247: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3248: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502400U, 4096U, false);
  /* Step 3249: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3250: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512400U, 4096U, false);
  /* Step 3251: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3252: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522400U, 4096U, false);
  /* Step 3253: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3254: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532400U, 4096U, false);
  /* Step 3255: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3256: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542400U, 4096U, false);
  /* Step 3257: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3258: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552400U, 4096U, false);
  /* Step 3259: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3260: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562400U, 4096U, false);
  /* Step 3261: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3262: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572400U, 4096U, false);
  /* Step 3263: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3264: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582400U, 4096U, false);
  /* Step 3265: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3266: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592400U, 4096U, false);
  /* Step 3267: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3268: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2400U, 4096U, false);
  /* Step 3269: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3270: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2400U, 4096U, false);
  /* Step 3271: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3272: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2400U, 4096U, false);
  /* Step 3273: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3274: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2400U, 4096U, false);
  /* Step 3275: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3276: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2400U, 4096U, false);
  /* Step 3277: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3278: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2400U, 4096U, false);
  /* Step 3279: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3280: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602400U, 4096U, false);
  /* Step 3281: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3282: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612400U, 4096U, false);
  /* Step 3283: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3284: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622400U, 4096U, false);
  /* Step 3285: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3286: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632400U, 4096U, false);
  /* Step 3287: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3288: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642400U, 4096U, false);
  /* Step 3289: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3290: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652400U, 4096U, false);
  /* Step 3291: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3292: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662400U, 4096U, false);
  /* Step 3293: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3294: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672400U, 4096U, false);
  /* Step 3295: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3296: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682400U, 4096U, false);
  /* Step 3297: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3298: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692400U, 4096U, false);
  /* Step 3299: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3300: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2400U, 4096U, false);
  /* Step 3301: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3302: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2400U, 4096U, false);
  /* Step 3303: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3304: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2400U, 4096U, false);
  /* Step 3305: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3306: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2400U, 4096U, false);
  /* Step 3307: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3308: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2400U, 4096U, false);
  /* Step 3309: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3310: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2400U, 4096U, false);
  /* Step 3311: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3312: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702400U, 4096U, false);
  /* Step 3313: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3314: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712400U, 4096U, false);
  /* Step 3315: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3316: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722400U, 4096U, false);
  /* Step 3317: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3318: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732400U, 4096U, false);
  /* Step 3319: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3320: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742400U, 4096U, false);
  /* Step 3321: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3322: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752400U, 4096U, false);
  /* Step 3323: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3324: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762400U, 4096U, false);
  /* Step 3325: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3326: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772400U, 4096U, false);
  /* Step 3327: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3328: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782400U, 4096U, false);
  /* Step 3329: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3330: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792400U, 4096U, false);
  /* Step 3331: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3332: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2400U, 4096U, false);
  /* Step 3333: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3334: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2400U, 4096U, false);
  /* Step 3335: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3336: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2400U, 4096U, false);
  /* Step 3337: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3338: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2400U, 4096U, false);
  /* Step 3339: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3340: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2400U, 4096U, false);
  /* Step 3341: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3342: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2400U, 4096U, false);
  /* Step 3343: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3344: [down_proj] DRAIN */
  nmp_op_drain(0x0082AC00U, 2048U, true);
  /* Step 3345: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802400U, 128U);
  /* Step 3346: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402480U, 4096U, true);
  /* Step 3347: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3348: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412480U, 4096U, false);
  /* Step 3349: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3350: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422480U, 4096U, false);
  /* Step 3351: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3352: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432480U, 4096U, false);
  /* Step 3353: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3354: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442480U, 4096U, false);
  /* Step 3355: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3356: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452480U, 4096U, false);
  /* Step 3357: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3358: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462480U, 4096U, false);
  /* Step 3359: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3360: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472480U, 4096U, false);
  /* Step 3361: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3362: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482480U, 4096U, false);
  /* Step 3363: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3364: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492480U, 4096U, false);
  /* Step 3365: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3366: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2480U, 4096U, false);
  /* Step 3367: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3368: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2480U, 4096U, false);
  /* Step 3369: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3370: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2480U, 4096U, false);
  /* Step 3371: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3372: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2480U, 4096U, false);
  /* Step 3373: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3374: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2480U, 4096U, false);
  /* Step 3375: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3376: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2480U, 4096U, false);
  /* Step 3377: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3378: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502480U, 4096U, false);
  /* Step 3379: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3380: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512480U, 4096U, false);
  /* Step 3381: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3382: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522480U, 4096U, false);
  /* Step 3383: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3384: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532480U, 4096U, false);
  /* Step 3385: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3386: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542480U, 4096U, false);
  /* Step 3387: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3388: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552480U, 4096U, false);
  /* Step 3389: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3390: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562480U, 4096U, false);
  /* Step 3391: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3392: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572480U, 4096U, false);
  /* Step 3393: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3394: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582480U, 4096U, false);
  /* Step 3395: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3396: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592480U, 4096U, false);
  /* Step 3397: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3398: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2480U, 4096U, false);
  /* Step 3399: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3400: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2480U, 4096U, false);
  /* Step 3401: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3402: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2480U, 4096U, false);
  /* Step 3403: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3404: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2480U, 4096U, false);
  /* Step 3405: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3406: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2480U, 4096U, false);
  /* Step 3407: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3408: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2480U, 4096U, false);
  /* Step 3409: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3410: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602480U, 4096U, false);
  /* Step 3411: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3412: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612480U, 4096U, false);
  /* Step 3413: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3414: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622480U, 4096U, false);
  /* Step 3415: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3416: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632480U, 4096U, false);
  /* Step 3417: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3418: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642480U, 4096U, false);
  /* Step 3419: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3420: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652480U, 4096U, false);
  /* Step 3421: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3422: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662480U, 4096U, false);
  /* Step 3423: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3424: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672480U, 4096U, false);
  /* Step 3425: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3426: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682480U, 4096U, false);
  /* Step 3427: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3428: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692480U, 4096U, false);
  /* Step 3429: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3430: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2480U, 4096U, false);
  /* Step 3431: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3432: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2480U, 4096U, false);
  /* Step 3433: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3434: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2480U, 4096U, false);
  /* Step 3435: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3436: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2480U, 4096U, false);
  /* Step 3437: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3438: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2480U, 4096U, false);
  /* Step 3439: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3440: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2480U, 4096U, false);
  /* Step 3441: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3442: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702480U, 4096U, false);
  /* Step 3443: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3444: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712480U, 4096U, false);
  /* Step 3445: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3446: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722480U, 4096U, false);
  /* Step 3447: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3448: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732480U, 4096U, false);
  /* Step 3449: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3450: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742480U, 4096U, false);
  /* Step 3451: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3452: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752480U, 4096U, false);
  /* Step 3453: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3454: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762480U, 4096U, false);
  /* Step 3455: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3456: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772480U, 4096U, false);
  /* Step 3457: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3458: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782480U, 4096U, false);
  /* Step 3459: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3460: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792480U, 4096U, false);
  /* Step 3461: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3462: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2480U, 4096U, false);
  /* Step 3463: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3464: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2480U, 4096U, false);
  /* Step 3465: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3466: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2480U, 4096U, false);
  /* Step 3467: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3468: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2480U, 4096U, false);
  /* Step 3469: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3470: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2480U, 4096U, false);
  /* Step 3471: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3472: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2480U, 4096U, false);
  /* Step 3473: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3474: [down_proj] DRAIN */
  nmp_op_drain(0x0082AC80U, 2048U, true);
  /* Step 3475: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802480U, 128U);
  /* Step 3476: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402500U, 4096U, true);
  /* Step 3477: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3478: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412500U, 4096U, false);
  /* Step 3479: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3480: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422500U, 4096U, false);
  /* Step 3481: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3482: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432500U, 4096U, false);
  /* Step 3483: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3484: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442500U, 4096U, false);
  /* Step 3485: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3486: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452500U, 4096U, false);
  /* Step 3487: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3488: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462500U, 4096U, false);
  /* Step 3489: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3490: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472500U, 4096U, false);
  /* Step 3491: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3492: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482500U, 4096U, false);
  /* Step 3493: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3494: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492500U, 4096U, false);
  /* Step 3495: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3496: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2500U, 4096U, false);
  /* Step 3497: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3498: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2500U, 4096U, false);
  /* Step 3499: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3500: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2500U, 4096U, false);
  /* Step 3501: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3502: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2500U, 4096U, false);
  /* Step 3503: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3504: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2500U, 4096U, false);
  /* Step 3505: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3506: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2500U, 4096U, false);
  /* Step 3507: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3508: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502500U, 4096U, false);
  /* Step 3509: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3510: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512500U, 4096U, false);
  /* Step 3511: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3512: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522500U, 4096U, false);
  /* Step 3513: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3514: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532500U, 4096U, false);
  /* Step 3515: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3516: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542500U, 4096U, false);
  /* Step 3517: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3518: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552500U, 4096U, false);
  /* Step 3519: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3520: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562500U, 4096U, false);
  /* Step 3521: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3522: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572500U, 4096U, false);
  /* Step 3523: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3524: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582500U, 4096U, false);
  /* Step 3525: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3526: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592500U, 4096U, false);
  /* Step 3527: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3528: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2500U, 4096U, false);
  /* Step 3529: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3530: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2500U, 4096U, false);
  /* Step 3531: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3532: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2500U, 4096U, false);
  /* Step 3533: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3534: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2500U, 4096U, false);
  /* Step 3535: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3536: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2500U, 4096U, false);
  /* Step 3537: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3538: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2500U, 4096U, false);
  /* Step 3539: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3540: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602500U, 4096U, false);
  /* Step 3541: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3542: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612500U, 4096U, false);
  /* Step 3543: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3544: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622500U, 4096U, false);
  /* Step 3545: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3546: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632500U, 4096U, false);
  /* Step 3547: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3548: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642500U, 4096U, false);
  /* Step 3549: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3550: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652500U, 4096U, false);
  /* Step 3551: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3552: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662500U, 4096U, false);
  /* Step 3553: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3554: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672500U, 4096U, false);
  /* Step 3555: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3556: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682500U, 4096U, false);
  /* Step 3557: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3558: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692500U, 4096U, false);
  /* Step 3559: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3560: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2500U, 4096U, false);
  /* Step 3561: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3562: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2500U, 4096U, false);
  /* Step 3563: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3564: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2500U, 4096U, false);
  /* Step 3565: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3566: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2500U, 4096U, false);
  /* Step 3567: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3568: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2500U, 4096U, false);
  /* Step 3569: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3570: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2500U, 4096U, false);
  /* Step 3571: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3572: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702500U, 4096U, false);
  /* Step 3573: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3574: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712500U, 4096U, false);
  /* Step 3575: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3576: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722500U, 4096U, false);
  /* Step 3577: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3578: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732500U, 4096U, false);
  /* Step 3579: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3580: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742500U, 4096U, false);
  /* Step 3581: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3582: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752500U, 4096U, false);
  /* Step 3583: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3584: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762500U, 4096U, false);
  /* Step 3585: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3586: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772500U, 4096U, false);
  /* Step 3587: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3588: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782500U, 4096U, false);
  /* Step 3589: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3590: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792500U, 4096U, false);
  /* Step 3591: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3592: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2500U, 4096U, false);
  /* Step 3593: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3594: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2500U, 4096U, false);
  /* Step 3595: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3596: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2500U, 4096U, false);
  /* Step 3597: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3598: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2500U, 4096U, false);
  /* Step 3599: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3600: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2500U, 4096U, false);
  /* Step 3601: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3602: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2500U, 4096U, false);
  /* Step 3603: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3604: [down_proj] DRAIN */
  nmp_op_drain(0x0082AD00U, 2048U, true);
  /* Step 3605: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802500U, 128U);
  /* Step 3606: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402580U, 4096U, true);
  /* Step 3607: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3608: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412580U, 4096U, false);
  /* Step 3609: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3610: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422580U, 4096U, false);
  /* Step 3611: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3612: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432580U, 4096U, false);
  /* Step 3613: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3614: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442580U, 4096U, false);
  /* Step 3615: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3616: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452580U, 4096U, false);
  /* Step 3617: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3618: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462580U, 4096U, false);
  /* Step 3619: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3620: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472580U, 4096U, false);
  /* Step 3621: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3622: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482580U, 4096U, false);
  /* Step 3623: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3624: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492580U, 4096U, false);
  /* Step 3625: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3626: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2580U, 4096U, false);
  /* Step 3627: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3628: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2580U, 4096U, false);
  /* Step 3629: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3630: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2580U, 4096U, false);
  /* Step 3631: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3632: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2580U, 4096U, false);
  /* Step 3633: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3634: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2580U, 4096U, false);
  /* Step 3635: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3636: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2580U, 4096U, false);
  /* Step 3637: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3638: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502580U, 4096U, false);
  /* Step 3639: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3640: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512580U, 4096U, false);
  /* Step 3641: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3642: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522580U, 4096U, false);
  /* Step 3643: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3644: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532580U, 4096U, false);
  /* Step 3645: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3646: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542580U, 4096U, false);
  /* Step 3647: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3648: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552580U, 4096U, false);
  /* Step 3649: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3650: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562580U, 4096U, false);
  /* Step 3651: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3652: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572580U, 4096U, false);
  /* Step 3653: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3654: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582580U, 4096U, false);
  /* Step 3655: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3656: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592580U, 4096U, false);
  /* Step 3657: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3658: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2580U, 4096U, false);
  /* Step 3659: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3660: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2580U, 4096U, false);
  /* Step 3661: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3662: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2580U, 4096U, false);
  /* Step 3663: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3664: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2580U, 4096U, false);
  /* Step 3665: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3666: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2580U, 4096U, false);
  /* Step 3667: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3668: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2580U, 4096U, false);
  /* Step 3669: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3670: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602580U, 4096U, false);
  /* Step 3671: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3672: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612580U, 4096U, false);
  /* Step 3673: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3674: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622580U, 4096U, false);
  /* Step 3675: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3676: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632580U, 4096U, false);
  /* Step 3677: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3678: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642580U, 4096U, false);
  /* Step 3679: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3680: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652580U, 4096U, false);
  /* Step 3681: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3682: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662580U, 4096U, false);
  /* Step 3683: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3684: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672580U, 4096U, false);
  /* Step 3685: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3686: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682580U, 4096U, false);
  /* Step 3687: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3688: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692580U, 4096U, false);
  /* Step 3689: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3690: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2580U, 4096U, false);
  /* Step 3691: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3692: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2580U, 4096U, false);
  /* Step 3693: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3694: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2580U, 4096U, false);
  /* Step 3695: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3696: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2580U, 4096U, false);
  /* Step 3697: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3698: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2580U, 4096U, false);
  /* Step 3699: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3700: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2580U, 4096U, false);
  /* Step 3701: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3702: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702580U, 4096U, false);
  /* Step 3703: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3704: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712580U, 4096U, false);
  /* Step 3705: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3706: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722580U, 4096U, false);
  /* Step 3707: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3708: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732580U, 4096U, false);
  /* Step 3709: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3710: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742580U, 4096U, false);
  /* Step 3711: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3712: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752580U, 4096U, false);
  /* Step 3713: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3714: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762580U, 4096U, false);
  /* Step 3715: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3716: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772580U, 4096U, false);
  /* Step 3717: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3718: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782580U, 4096U, false);
  /* Step 3719: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3720: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792580U, 4096U, false);
  /* Step 3721: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3722: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2580U, 4096U, false);
  /* Step 3723: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3724: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2580U, 4096U, false);
  /* Step 3725: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3726: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2580U, 4096U, false);
  /* Step 3727: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3728: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2580U, 4096U, false);
  /* Step 3729: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3730: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2580U, 4096U, false);
  /* Step 3731: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3732: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2580U, 4096U, false);
  /* Step 3733: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3734: [down_proj] DRAIN */
  nmp_op_drain(0x0082AD80U, 2048U, true);
  /* Step 3735: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802580U, 128U);
  /* Step 3736: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402600U, 4096U, true);
  /* Step 3737: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3738: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412600U, 4096U, false);
  /* Step 3739: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3740: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422600U, 4096U, false);
  /* Step 3741: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3742: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432600U, 4096U, false);
  /* Step 3743: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3744: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442600U, 4096U, false);
  /* Step 3745: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3746: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452600U, 4096U, false);
  /* Step 3747: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3748: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462600U, 4096U, false);
  /* Step 3749: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3750: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472600U, 4096U, false);
  /* Step 3751: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3752: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482600U, 4096U, false);
  /* Step 3753: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3754: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492600U, 4096U, false);
  /* Step 3755: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3756: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2600U, 4096U, false);
  /* Step 3757: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3758: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2600U, 4096U, false);
  /* Step 3759: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3760: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2600U, 4096U, false);
  /* Step 3761: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3762: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2600U, 4096U, false);
  /* Step 3763: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3764: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2600U, 4096U, false);
  /* Step 3765: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3766: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2600U, 4096U, false);
  /* Step 3767: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3768: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502600U, 4096U, false);
  /* Step 3769: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3770: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512600U, 4096U, false);
  /* Step 3771: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3772: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522600U, 4096U, false);
  /* Step 3773: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3774: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532600U, 4096U, false);
  /* Step 3775: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3776: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542600U, 4096U, false);
  /* Step 3777: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3778: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552600U, 4096U, false);
  /* Step 3779: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3780: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562600U, 4096U, false);
  /* Step 3781: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3782: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572600U, 4096U, false);
  /* Step 3783: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3784: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582600U, 4096U, false);
  /* Step 3785: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3786: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592600U, 4096U, false);
  /* Step 3787: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3788: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2600U, 4096U, false);
  /* Step 3789: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3790: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2600U, 4096U, false);
  /* Step 3791: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3792: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2600U, 4096U, false);
  /* Step 3793: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3794: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2600U, 4096U, false);
  /* Step 3795: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3796: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2600U, 4096U, false);
  /* Step 3797: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3798: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2600U, 4096U, false);
  /* Step 3799: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3800: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602600U, 4096U, false);
  /* Step 3801: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3802: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612600U, 4096U, false);
  /* Step 3803: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3804: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622600U, 4096U, false);
  /* Step 3805: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3806: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632600U, 4096U, false);
  /* Step 3807: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3808: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642600U, 4096U, false);
  /* Step 3809: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3810: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652600U, 4096U, false);
  /* Step 3811: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3812: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662600U, 4096U, false);
  /* Step 3813: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3814: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672600U, 4096U, false);
  /* Step 3815: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3816: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682600U, 4096U, false);
  /* Step 3817: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3818: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692600U, 4096U, false);
  /* Step 3819: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3820: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2600U, 4096U, false);
  /* Step 3821: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3822: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2600U, 4096U, false);
  /* Step 3823: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3824: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2600U, 4096U, false);
  /* Step 3825: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3826: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2600U, 4096U, false);
  /* Step 3827: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3828: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2600U, 4096U, false);
  /* Step 3829: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3830: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2600U, 4096U, false);
  /* Step 3831: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3832: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702600U, 4096U, false);
  /* Step 3833: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3834: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712600U, 4096U, false);
  /* Step 3835: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3836: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722600U, 4096U, false);
  /* Step 3837: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3838: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732600U, 4096U, false);
  /* Step 3839: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3840: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742600U, 4096U, false);
  /* Step 3841: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3842: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752600U, 4096U, false);
  /* Step 3843: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3844: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762600U, 4096U, false);
  /* Step 3845: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3846: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772600U, 4096U, false);
  /* Step 3847: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3848: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782600U, 4096U, false);
  /* Step 3849: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3850: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792600U, 4096U, false);
  /* Step 3851: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3852: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2600U, 4096U, false);
  /* Step 3853: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3854: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2600U, 4096U, false);
  /* Step 3855: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3856: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2600U, 4096U, false);
  /* Step 3857: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3858: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2600U, 4096U, false);
  /* Step 3859: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3860: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2600U, 4096U, false);
  /* Step 3861: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3862: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2600U, 4096U, false);
  /* Step 3863: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3864: [down_proj] DRAIN */
  nmp_op_drain(0x0082AE00U, 2048U, true);
  /* Step 3865: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802600U, 128U);
  /* Step 3866: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402680U, 4096U, true);
  /* Step 3867: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3868: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412680U, 4096U, false);
  /* Step 3869: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 3870: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422680U, 4096U, false);
  /* Step 3871: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 3872: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432680U, 4096U, false);
  /* Step 3873: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 3874: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442680U, 4096U, false);
  /* Step 3875: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 3876: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452680U, 4096U, false);
  /* Step 3877: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 3878: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462680U, 4096U, false);
  /* Step 3879: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 3880: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472680U, 4096U, false);
  /* Step 3881: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 3882: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482680U, 4096U, false);
  /* Step 3883: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 3884: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492680U, 4096U, false);
  /* Step 3885: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 3886: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2680U, 4096U, false);
  /* Step 3887: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 3888: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2680U, 4096U, false);
  /* Step 3889: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 3890: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2680U, 4096U, false);
  /* Step 3891: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 3892: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2680U, 4096U, false);
  /* Step 3893: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 3894: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2680U, 4096U, false);
  /* Step 3895: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 3896: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2680U, 4096U, false);
  /* Step 3897: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 3898: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502680U, 4096U, false);
  /* Step 3899: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 3900: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512680U, 4096U, false);
  /* Step 3901: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 3902: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522680U, 4096U, false);
  /* Step 3903: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 3904: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532680U, 4096U, false);
  /* Step 3905: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 3906: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542680U, 4096U, false);
  /* Step 3907: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 3908: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552680U, 4096U, false);
  /* Step 3909: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 3910: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562680U, 4096U, false);
  /* Step 3911: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 3912: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572680U, 4096U, false);
  /* Step 3913: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 3914: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582680U, 4096U, false);
  /* Step 3915: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 3916: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592680U, 4096U, false);
  /* Step 3917: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 3918: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2680U, 4096U, false);
  /* Step 3919: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 3920: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2680U, 4096U, false);
  /* Step 3921: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 3922: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2680U, 4096U, false);
  /* Step 3923: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 3924: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2680U, 4096U, false);
  /* Step 3925: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 3926: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2680U, 4096U, false);
  /* Step 3927: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 3928: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2680U, 4096U, false);
  /* Step 3929: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 3930: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602680U, 4096U, false);
  /* Step 3931: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 3932: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612680U, 4096U, false);
  /* Step 3933: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 3934: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622680U, 4096U, false);
  /* Step 3935: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 3936: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632680U, 4096U, false);
  /* Step 3937: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 3938: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642680U, 4096U, false);
  /* Step 3939: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 3940: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652680U, 4096U, false);
  /* Step 3941: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 3942: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662680U, 4096U, false);
  /* Step 3943: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 3944: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672680U, 4096U, false);
  /* Step 3945: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 3946: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682680U, 4096U, false);
  /* Step 3947: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 3948: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692680U, 4096U, false);
  /* Step 3949: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 3950: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2680U, 4096U, false);
  /* Step 3951: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 3952: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2680U, 4096U, false);
  /* Step 3953: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 3954: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2680U, 4096U, false);
  /* Step 3955: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 3956: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2680U, 4096U, false);
  /* Step 3957: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 3958: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2680U, 4096U, false);
  /* Step 3959: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 3960: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2680U, 4096U, false);
  /* Step 3961: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 3962: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702680U, 4096U, false);
  /* Step 3963: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 3964: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712680U, 4096U, false);
  /* Step 3965: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 3966: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722680U, 4096U, false);
  /* Step 3967: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 3968: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732680U, 4096U, false);
  /* Step 3969: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 3970: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742680U, 4096U, false);
  /* Step 3971: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 3972: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752680U, 4096U, false);
  /* Step 3973: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 3974: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762680U, 4096U, false);
  /* Step 3975: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 3976: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772680U, 4096U, false);
  /* Step 3977: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 3978: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782680U, 4096U, false);
  /* Step 3979: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 3980: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792680U, 4096U, false);
  /* Step 3981: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 3982: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2680U, 4096U, false);
  /* Step 3983: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 3984: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2680U, 4096U, false);
  /* Step 3985: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 3986: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2680U, 4096U, false);
  /* Step 3987: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 3988: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2680U, 4096U, false);
  /* Step 3989: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 3990: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2680U, 4096U, false);
  /* Step 3991: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 3992: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2680U, 4096U, false);
  /* Step 3993: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 3994: [down_proj] DRAIN */
  nmp_op_drain(0x0082AE80U, 2048U, true);
  /* Step 3995: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802680U, 128U);
  /* Step 3996: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402700U, 4096U, true);
  /* Step 3997: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 3998: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412700U, 4096U, false);
  /* Step 3999: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 4000: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422700U, 4096U, false);
  /* Step 4001: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 4002: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432700U, 4096U, false);
  /* Step 4003: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 4004: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442700U, 4096U, false);
  /* Step 4005: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 4006: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452700U, 4096U, false);
  /* Step 4007: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 4008: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462700U, 4096U, false);
  /* Step 4009: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 4010: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472700U, 4096U, false);
  /* Step 4011: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 4012: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482700U, 4096U, false);
  /* Step 4013: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 4014: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492700U, 4096U, false);
  /* Step 4015: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 4016: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2700U, 4096U, false);
  /* Step 4017: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 4018: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2700U, 4096U, false);
  /* Step 4019: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 4020: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2700U, 4096U, false);
  /* Step 4021: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 4022: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2700U, 4096U, false);
  /* Step 4023: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 4024: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2700U, 4096U, false);
  /* Step 4025: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 4026: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2700U, 4096U, false);
  /* Step 4027: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 4028: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502700U, 4096U, false);
  /* Step 4029: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 4030: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512700U, 4096U, false);
  /* Step 4031: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 4032: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522700U, 4096U, false);
  /* Step 4033: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 4034: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532700U, 4096U, false);
  /* Step 4035: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 4036: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542700U, 4096U, false);
  /* Step 4037: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 4038: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552700U, 4096U, false);
  /* Step 4039: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 4040: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562700U, 4096U, false);
  /* Step 4041: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 4042: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572700U, 4096U, false);
  /* Step 4043: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 4044: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582700U, 4096U, false);
  /* Step 4045: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 4046: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592700U, 4096U, false);
  /* Step 4047: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 4048: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2700U, 4096U, false);
  /* Step 4049: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 4050: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2700U, 4096U, false);
  /* Step 4051: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 4052: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2700U, 4096U, false);
  /* Step 4053: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 4054: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2700U, 4096U, false);
  /* Step 4055: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 4056: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2700U, 4096U, false);
  /* Step 4057: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 4058: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2700U, 4096U, false);
  /* Step 4059: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 4060: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602700U, 4096U, false);
  /* Step 4061: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 4062: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612700U, 4096U, false);
  /* Step 4063: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 4064: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622700U, 4096U, false);
  /* Step 4065: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 4066: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632700U, 4096U, false);
  /* Step 4067: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 4068: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642700U, 4096U, false);
  /* Step 4069: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 4070: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652700U, 4096U, false);
  /* Step 4071: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 4072: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662700U, 4096U, false);
  /* Step 4073: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 4074: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672700U, 4096U, false);
  /* Step 4075: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 4076: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682700U, 4096U, false);
  /* Step 4077: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 4078: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692700U, 4096U, false);
  /* Step 4079: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 4080: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2700U, 4096U, false);
  /* Step 4081: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 4082: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2700U, 4096U, false);
  /* Step 4083: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 4084: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2700U, 4096U, false);
  /* Step 4085: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 4086: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2700U, 4096U, false);
  /* Step 4087: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 4088: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2700U, 4096U, false);
  /* Step 4089: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 4090: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2700U, 4096U, false);
  /* Step 4091: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 4092: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702700U, 4096U, false);
  /* Step 4093: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 4094: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712700U, 4096U, false);
  /* Step 4095: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 4096: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722700U, 4096U, false);
  /* Step 4097: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 4098: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732700U, 4096U, false);
  /* Step 4099: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 4100: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742700U, 4096U, false);
  /* Step 4101: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 4102: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752700U, 4096U, false);
  /* Step 4103: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 4104: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762700U, 4096U, false);
  /* Step 4105: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 4106: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772700U, 4096U, false);
  /* Step 4107: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 4108: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782700U, 4096U, false);
  /* Step 4109: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 4110: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792700U, 4096U, false);
  /* Step 4111: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 4112: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2700U, 4096U, false);
  /* Step 4113: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 4114: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2700U, 4096U, false);
  /* Step 4115: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 4116: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2700U, 4096U, false);
  /* Step 4117: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 4118: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2700U, 4096U, false);
  /* Step 4119: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 4120: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2700U, 4096U, false);
  /* Step 4121: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 4122: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2700U, 4096U, false);
  /* Step 4123: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 4124: [down_proj] DRAIN */
  nmp_op_drain(0x0082AF00U, 2048U, true);
  /* Step 4125: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802700U, 128U);
  /* Step 4126: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00402780U, 4096U, true);
  /* Step 4127: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A800U, 2048U);
  /* Step 4128: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00412780U, 4096U, false);
  /* Step 4129: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A880U, 2048U);
  /* Step 4130: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00422780U, 4096U, false);
  /* Step 4131: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A900U, 2048U);
  /* Step 4132: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00432780U, 4096U, false);
  /* Step 4133: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080A980U, 2048U);
  /* Step 4134: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00442780U, 4096U, false);
  /* Step 4135: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA00U, 2048U);
  /* Step 4136: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00452780U, 4096U, false);
  /* Step 4137: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AA80U, 2048U);
  /* Step 4138: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00462780U, 4096U, false);
  /* Step 4139: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB00U, 2048U);
  /* Step 4140: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00472780U, 4096U, false);
  /* Step 4141: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AB80U, 2048U);
  /* Step 4142: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00482780U, 4096U, false);
  /* Step 4143: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC00U, 2048U);
  /* Step 4144: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00492780U, 4096U, false);
  /* Step 4145: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AC80U, 2048U);
  /* Step 4146: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004A2780U, 4096U, false);
  /* Step 4147: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD00U, 2048U);
  /* Step 4148: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004B2780U, 4096U, false);
  /* Step 4149: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AD80U, 2048U);
  /* Step 4150: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004C2780U, 4096U, false);
  /* Step 4151: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE00U, 2048U);
  /* Step 4152: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004D2780U, 4096U, false);
  /* Step 4153: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AE80U, 2048U);
  /* Step 4154: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004E2780U, 4096U, false);
  /* Step 4155: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF00U, 2048U);
  /* Step 4156: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x004F2780U, 4096U, false);
  /* Step 4157: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080AF80U, 2048U);
  /* Step 4158: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00502780U, 4096U, false);
  /* Step 4159: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B000U, 2048U);
  /* Step 4160: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00512780U, 4096U, false);
  /* Step 4161: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B080U, 2048U);
  /* Step 4162: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00522780U, 4096U, false);
  /* Step 4163: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B100U, 2048U);
  /* Step 4164: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00532780U, 4096U, false);
  /* Step 4165: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B180U, 2048U);
  /* Step 4166: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00542780U, 4096U, false);
  /* Step 4167: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B200U, 2048U);
  /* Step 4168: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00552780U, 4096U, false);
  /* Step 4169: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B280U, 2048U);
  /* Step 4170: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00562780U, 4096U, false);
  /* Step 4171: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B300U, 2048U);
  /* Step 4172: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00572780U, 4096U, false);
  /* Step 4173: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B380U, 2048U);
  /* Step 4174: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00582780U, 4096U, false);
  /* Step 4175: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B400U, 2048U);
  /* Step 4176: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00592780U, 4096U, false);
  /* Step 4177: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B480U, 2048U);
  /* Step 4178: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005A2780U, 4096U, false);
  /* Step 4179: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B500U, 2048U);
  /* Step 4180: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005B2780U, 4096U, false);
  /* Step 4181: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B580U, 2048U);
  /* Step 4182: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005C2780U, 4096U, false);
  /* Step 4183: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B600U, 2048U);
  /* Step 4184: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005D2780U, 4096U, false);
  /* Step 4185: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B680U, 2048U);
  /* Step 4186: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005E2780U, 4096U, false);
  /* Step 4187: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B700U, 2048U);
  /* Step 4188: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x005F2780U, 4096U, false);
  /* Step 4189: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B780U, 2048U);
  /* Step 4190: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00602780U, 4096U, false);
  /* Step 4191: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B800U, 2048U);
  /* Step 4192: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00612780U, 4096U, false);
  /* Step 4193: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B880U, 2048U);
  /* Step 4194: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00622780U, 4096U, false);
  /* Step 4195: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B900U, 2048U);
  /* Step 4196: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00632780U, 4096U, false);
  /* Step 4197: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080B980U, 2048U);
  /* Step 4198: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00642780U, 4096U, false);
  /* Step 4199: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA00U, 2048U);
  /* Step 4200: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00652780U, 4096U, false);
  /* Step 4201: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BA80U, 2048U);
  /* Step 4202: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00662780U, 4096U, false);
  /* Step 4203: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB00U, 2048U);
  /* Step 4204: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00672780U, 4096U, false);
  /* Step 4205: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BB80U, 2048U);
  /* Step 4206: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00682780U, 4096U, false);
  /* Step 4207: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC00U, 2048U);
  /* Step 4208: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00692780U, 4096U, false);
  /* Step 4209: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BC80U, 2048U);
  /* Step 4210: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006A2780U, 4096U, false);
  /* Step 4211: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD00U, 2048U);
  /* Step 4212: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006B2780U, 4096U, false);
  /* Step 4213: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BD80U, 2048U);
  /* Step 4214: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006C2780U, 4096U, false);
  /* Step 4215: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE00U, 2048U);
  /* Step 4216: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006D2780U, 4096U, false);
  /* Step 4217: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BE80U, 2048U);
  /* Step 4218: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006E2780U, 4096U, false);
  /* Step 4219: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF00U, 2048U);
  /* Step 4220: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x006F2780U, 4096U, false);
  /* Step 4221: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080BF80U, 2048U);
  /* Step 4222: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00702780U, 4096U, false);
  /* Step 4223: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C000U, 2048U);
  /* Step 4224: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00712780U, 4096U, false);
  /* Step 4225: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C080U, 2048U);
  /* Step 4226: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00722780U, 4096U, false);
  /* Step 4227: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C100U, 2048U);
  /* Step 4228: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00732780U, 4096U, false);
  /* Step 4229: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C180U, 2048U);
  /* Step 4230: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00742780U, 4096U, false);
  /* Step 4231: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C200U, 2048U);
  /* Step 4232: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00752780U, 4096U, false);
  /* Step 4233: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C280U, 2048U);
  /* Step 4234: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00762780U, 4096U, false);
  /* Step 4235: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C300U, 2048U);
  /* Step 4236: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00772780U, 4096U, false);
  /* Step 4237: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C380U, 2048U);
  /* Step 4238: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00782780U, 4096U, false);
  /* Step 4239: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C400U, 2048U);
  /* Step 4240: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x00792780U, 4096U, false);
  /* Step 4241: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C480U, 2048U);
  /* Step 4242: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007A2780U, 4096U, false);
  /* Step 4243: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C500U, 2048U);
  /* Step 4244: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007B2780U, 4096U, false);
  /* Step 4245: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C580U, 2048U);
  /* Step 4246: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007C2780U, 4096U, false);
  /* Step 4247: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C600U, 2048U);
  /* Step 4248: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007D2780U, 4096U, false);
  /* Step 4249: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C680U, 2048U);
  /* Step 4250: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007E2780U, 4096U, false);
  /* Step 4251: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C700U, 2048U);
  /* Step 4252: [down_proj] LOAD_WEIGHTS */
  nmp_op_load_weights(0x007F2780U, 4096U, false);
  /* Step 4253: [down_proj] STREAM_ACT */
  nmp_op_stream_act(0x0080C780U, 2048U);
  /* Step 4254: [down_proj] DRAIN */
  nmp_op_drain(0x0082AF80U, 2048U, true);
  /* Step 4255: [down_proj] ADD_BIAS */
  nmp_op_add_bias(0x00802780U, 128U);
}