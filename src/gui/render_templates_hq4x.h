/*
 *  Copyright (C) 2002-2012  The DOSBox Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/*
 * The HQ4x high quality 4x graphics filter.
 * Original author Maxim Stepin (see http://www.hiend3d.com/hq4x.html).
 */

#ifndef RENDER_TEMPLATES_HQ4X_TABLE_H
#define RENDER_TEMPLATES_HQ4X_TABLE_H

#define PIXEL4_00_0     line0[0] = C4;
#define PIXEL4_00_11    line0[0] = interp_w2(C4,C3,3U,1U);
#define PIXEL4_00_12    line0[0] = interp_w2(C4,C1,3U,1U);
#define PIXEL4_00_20    line0[0] = interp_w3(C4,C1,C3,2U,1U,1U);
#define PIXEL4_00_50    line0[0] = interp_w2(C1,C3,1U,1U);
#define PIXEL4_00_80    line0[0] = interp_w2(C4,C0,5U,3U);
#define PIXEL4_00_81    line0[0] = interp_w2(C4,C3,5U,3U);
#define PIXEL4_00_82    line0[0] = interp_w2(C4,C1,5U,3U);
#define PIXEL4_01_0     line0[1] = C4;
#define PIXEL4_01_10    line0[1] = interp_w2(C4,C0,3U,1U);
#define PIXEL4_01_12    line0[1] = interp_w2(C4,C1,3U,1U);
#define PIXEL4_01_14    line0[1] = interp_w2(C1,C4,3U,1U);
#define PIXEL4_01_21    line0[1] = interp_w3(C1,C4,C3,2U,1U,1U);
#define PIXEL4_01_31    line0[1] = interp_w2(C4,C3,7U,1U);
#define PIXEL4_01_50    line0[1] = interp_w2(C1,C4,1U,1U);
#define PIXEL4_01_60    line0[1] = interp_w3(C4,C1,C3,5U,2U,1U);
#define PIXEL4_01_61    line0[1] = interp_w3(C4,C1,C0,5U,2U,1U);
#define PIXEL4_01_82    line0[1] = interp_w2(C4,C1,5U,3U);
#define PIXEL4_01_83    line0[1] = interp_w2(C1,C3,5U,3U);
#define PIXEL4_02_0     line0[2] = C4;
#define PIXEL4_02_10    line0[2] = interp_w2(C4,C2,3U,1U);
#define PIXEL4_02_11    line0[2] = interp_w2(C4,C1,3U,1U);
#define PIXEL4_02_13    line0[2] = interp_w2(C1,C4,3U,1U);
#define PIXEL4_02_21    line0[2] = interp_w3(C1,C4,C5,2U,1U,1U);
#define PIXEL4_02_32    line0[2] = interp_w2(C4,C5,7U,1U);
#define PIXEL4_02_50    line0[2] = interp_w2(C1,C4,1U,1U);
#define PIXEL4_02_60    line0[2] = interp_w3(C4,C1,C5,5U,2U,1U);
#define PIXEL4_02_61    line0[2] = interp_w3(C4,C1,C2,5U,2U,1U);
#define PIXEL4_02_81    line0[2] = interp_w2(C4,C1,5U,3U);
#define PIXEL4_02_83    line0[2] = interp_w2(C1,C5,5U,3U);
#define PIXEL4_03_0     line0[3] = C4;
#define PIXEL4_03_11    line0[3] = interp_w2(C4,C1,3U,1U);
#define PIXEL4_03_12    line0[3] = interp_w2(C4,C5,3U,1U);
#define PIXEL4_03_20    line0[3] = interp_w3(C4,C1,C5,2U,1U,1U);
#define PIXEL4_03_50    line0[3] = interp_w2(C1,C5,1U,1U);
#define PIXEL4_03_80    line0[3] = interp_w2(C4,C2,5U,3U);
#define PIXEL4_03_81    line0[3] = interp_w2(C4,C1,5U,3U);
#define PIXEL4_03_82    line0[3] = interp_w2(C4,C5,5U,3U);
#define PIXEL4_10_0     line1[0] = C4;
#define PIXEL4_10_10    line1[0] = interp_w2(C4,C0,3U,1U);
#define PIXEL4_10_11    line1[0] = interp_w2(C4,C3,3U,1U);
#define PIXEL4_10_13    line1[0] = interp_w2(C3,C4,3U,1U);
#define PIXEL4_10_21    line1[0] = interp_w3(C3,C4,C1,2U,1U,1U);
#define PIXEL4_10_32    line1[0] = interp_w2(C4,C1,7U,1U);
#define PIXEL4_10_50    line1[0] = interp_w2(C3,C4,1U,1U);
#define PIXEL4_10_60    line1[0] = interp_w3(C4,C3,C1,5U,2U,1U);
#define PIXEL4_10_61    line1[0] = interp_w3(C4,C3,C0,5U,2U,1U);
#define PIXEL4_10_81    line1[0] = interp_w2(C4,C3,5U,3U);
#define PIXEL4_10_83    line1[0] = interp_w2(C3,C1,5U,3U);
#define PIXEL4_11_0     line1[1] = C4;
#define PIXEL4_11_30    line1[1] = interp_w2(C4,C0,7U,1U);
#define PIXEL4_11_31    line1[1] = interp_w2(C4,C3,7U,1U);
#define PIXEL4_11_32    line1[1] = interp_w2(C4,C1,7U,1U);
#define PIXEL4_11_70    line1[1] = interp_w3(C4,C3,C1,6U,1U,1U);
#define PIXEL4_12_0     line1[2] = C4;
#define PIXEL4_12_30    line1[2] = interp_w2(C4,C2,7U,1U);
#define PIXEL4_12_31    line1[2] = interp_w2(C4,C1,7U,1U);
#define PIXEL4_12_32    line1[2] = interp_w2(C4,C5,7U,1U);
#define PIXEL4_12_70    line1[2] = interp_w3(C4,C5,C1,6U,1U,1U);
#define PIXEL4_13_0     line1[3] = C4;
#define PIXEL4_13_10    line1[3] = interp_w2(C4,C2,3U,1U);
#define PIXEL4_13_12    line1[3] = interp_w2(C4,C5,3U,1U);
#define PIXEL4_13_14    line1[3] = interp_w2(C5,C4,3U,1U);
#define PIXEL4_13_21    line1[3] = interp_w3(C5,C4,C1,2U,1U,1U);
#define PIXEL4_13_31    line1[3] = interp_w2(C4,C1,7U,1U);
#define PIXEL4_13_50    line1[3] = interp_w2(C5,C4,1U,1U);
#define PIXEL4_13_60    line1[3] = interp_w3(C4,C5,C1,5U,2U,1U);
#define PIXEL4_13_61    line1[3] = interp_w3(C4,C5,C2,5U,2U,1U);
#define PIXEL4_13_82    line1[3] = interp_w2(C4,C5,5U,3U);
#define PIXEL4_13_83    line1[3] = interp_w2(C5,C1,5U,3U);
#define PIXEL4_20_0     line2[0] = C4;
#define PIXEL4_20_10    line2[0] = interp_w2(C4,C6,3U,1U);
#define PIXEL4_20_12    line2[0] = interp_w2(C4,C3,3U,1U);
#define PIXEL4_20_14    line2[0] = interp_w2(C3,C4,3U,1U);
#define PIXEL4_20_21    line2[0] = interp_w3(C3,C4,C7,2U,1U,1U);
#define PIXEL4_20_31    line2[0] = interp_w2(C4,C7,7U,1U);
#define PIXEL4_20_50    line2[0] = interp_w2(C3,C4,1U,1U);
#define PIXEL4_20_60    line2[0] = interp_w3(C4,C3,C7,5U,2U,1U);
#define PIXEL4_20_61    line2[0] = interp_w3(C4,C3,C6,5U,2U,1U);
#define PIXEL4_20_82    line2[0] = interp_w2(C4,C3,5U,3U);
#define PIXEL4_20_83    line2[0] = interp_w2(C3,C7,5U,3U);
#define PIXEL4_21_0     line2[1] = C4;
#define PIXEL4_21_30    line2[1] = interp_w2(C4,C6,7U,1U);
#define PIXEL4_21_31    line2[1] = interp_w2(C4,C7,7U,1U);
#define PIXEL4_21_32    line2[1] = interp_w2(C4,C3,7U,1U);
#define PIXEL4_21_70    line2[1] = interp_w3(C4,C3,C7,6U,1U,1U);
#define PIXEL4_22_0     line2[2] = C4;
#define PIXEL4_22_30    line2[2] = interp_w2(C4,C8,7U,1U);
#define PIXEL4_22_31    line2[2] = interp_w2(C4,C5,7U,1U);
#define PIXEL4_22_32    line2[2] = interp_w2(C4,C7,7U,1U);
#define PIXEL4_22_70    line2[2] = interp_w3(C4,C5,C7,6U,1U,1U);
#define PIXEL4_23_0     line2[3] = C4;
#define PIXEL4_23_10    line2[3] = interp_w2(C4,C8,3U,1U);
#define PIXEL4_23_11    line2[3] = interp_w2(C4,C5,3U,1U);
#define PIXEL4_23_13    line2[3] = interp_w2(C5,C4,3U,1U);
#define PIXEL4_23_21    line2[3] = interp_w3(C5,C4,C7,2U,1U,1U);
#define PIXEL4_23_32    line2[3] = interp_w2(C4,C7,7U,1U);
#define PIXEL4_23_50    line2[3] = interp_w2(C5,C4,1U,1U);
#define PIXEL4_23_60    line2[3] = interp_w3(C4,C5,C7,5U,2U,1U);
#define PIXEL4_23_61    line2[3] = interp_w3(C4,C5,C8,5U,2U,1U);
#define PIXEL4_23_81    line2[3] = interp_w2(C4,C5,5U,3U);
#define PIXEL4_23_83    line2[3] = interp_w2(C5,C7,5U,3U);
#define PIXEL4_30_0     line3[0] = C4;
#define PIXEL4_30_11    line3[0] = interp_w2(C4,C7,3U,1U);
#define PIXEL4_30_12    line3[0] = interp_w2(C4,C3,3U,1U);
#define PIXEL4_30_20    line3[0] = interp_w3(C4,C7,C3,2U,1U,1U);
#define PIXEL4_30_50    line3[0] = interp_w2(C7,C3,1U,1U);
#define PIXEL4_30_80    line3[0] = interp_w2(C4,C6,5U,3U);
#define PIXEL4_30_81    line3[0] = interp_w2(C4,C7,5U,3U);
#define PIXEL4_30_82    line3[0] = interp_w2(C4,C3,5U,3U);
#define PIXEL4_31_0     line3[1] = C4;
#define PIXEL4_31_10    line3[1] = interp_w2(C4,C6,3U,1U);
#define PIXEL4_31_11    line3[1] = interp_w2(C4,C7,3U,1U);
#define PIXEL4_31_13    line3[1] = interp_w2(C7,C4,3U,1U);
#define PIXEL4_31_21    line3[1] = interp_w3(C7,C4,C3,2U,1U,1U);
#define PIXEL4_31_32    line3[1] = interp_w2(C4,C3,7U,1U);
#define PIXEL4_31_50    line3[1] = interp_w2(C7,C4,1U,1U);
#define PIXEL4_31_60    line3[1] = interp_w3(C4,C7,C3,5U,2U,1U);
#define PIXEL4_31_61    line3[1] = interp_w3(C4,C7,C6,5U,2U,1U);
#define PIXEL4_31_81    line3[1] = interp_w2(C4,C7,5U,3U);
#define PIXEL4_31_83    line3[1] = interp_w2(C7,C3,5U,3U);
#define PIXEL4_32_0     line3[2] = C4;
#define PIXEL4_32_10    line3[2] = interp_w2(C4,C8,3U,1U);
#define PIXEL4_32_12    line3[2] = interp_w2(C4,C7,3U,1U);
#define PIXEL4_32_14    line3[2] = interp_w2(C7,C4,3U,1U);
#define PIXEL4_32_21    line3[2] = interp_w3(C7,C4,C5,2U,1U,1U);
#define PIXEL4_32_31    line3[2] = interp_w2(C4,C5,7U,1U);
#define PIXEL4_32_50    line3[2] = interp_w2(C7,C4,1U,1U);
#define PIXEL4_32_60    line3[2] = interp_w3(C4,C7,C5,5U,2U,1U);
#define PIXEL4_32_61    line3[2] = interp_w3(C4,C7,C8,5U,2U,1U);
#define PIXEL4_32_82    line3[2] = interp_w2(C4,C7,5U,3U);
#define PIXEL4_32_83    line3[2] = interp_w2(C7,C5,5U,3U);
#define PIXEL4_33_0     line3[3] = C4;
#define PIXEL4_33_11    line3[3] = interp_w2(C4,C5,3U,1U);
#define PIXEL4_33_12    line3[3] = interp_w2(C4,C7,3U,1U);
#define PIXEL4_33_20    line3[3] = interp_w3(C4,C7,C5,2U,1U,1U);
#define PIXEL4_33_50    line3[3] = interp_w2(C7,C5,1U,1U);
#define PIXEL4_33_80    line3[3] = interp_w2(C4,C8,5U,3U);
#define PIXEL4_33_81    line3[3] = interp_w2(C4,C5,5U,3U);
#define PIXEL4_33_82    line3[3] = interp_w2(C4,C7,5U,3U);

#endif

#if SBPP == 32
#define RGBtoYUV(c) _RGBtoYUV[((c & 0xf80000) >> 8) | ((c & 0x00fc00) >> 5) | ((c & 0x0000f8) >> 3)]
#else
#define RGBtoYUV(c) _RGBtoYUV[c]
#endif

inline void conc2d(Hq4x,SBPP)(PTYPE * line0, PTYPE * line1, PTYPE * line2, PTYPE * line3, const PTYPE * fc)
{
	if (_RGBtoYUV == 0) conc2d(InitLUTs,SBPP)();

	Bit32u pattern = 0;
	Bit32u flag = 0;
	const Bit32u YUV4 = RGBtoYUV(C4);

	if (C4 != C0 && diffYUV(YUV4, RGBtoYUV(C0))) pattern |= 0x0001;
	if (C4 != C1 && diffYUV(YUV4, RGBtoYUV(C1))) pattern |= 0x0002;
	if (C4 != C2 && diffYUV(YUV4, RGBtoYUV(C2))) pattern |= 0x0004;
	if (C4 != C3 && diffYUV(YUV4, RGBtoYUV(C3))) pattern |= 0x0008;
	if (C4 != C5 && diffYUV(YUV4, RGBtoYUV(C5))) pattern |= 0x0010;
	if (C4 != C6 && diffYUV(YUV4, RGBtoYUV(C6))) pattern |= 0x0020;
	if (C4 != C7 && diffYUV(YUV4, RGBtoYUV(C7))) pattern |= 0x0040;
	if (C4 != C8 && diffYUV(YUV4, RGBtoYUV(C8))) pattern |= 0x0080;

            switch (pattern)
            {
                case 0:
                case 1:
                case 4:
                case 32:
                case 128:
                case 5:
                case 132:
                case 160:
                case 33:
                case 129:
                case 36:
                case 133:
                case 164:
                case 161:
                case 37:
                case 165:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 2:
                case 34:
                case 130:
                case 162:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 16:
                case 17:
                case 48:
                case 49:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 64:
                case 65:
                case 68:
                case 69:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 8:
                case 12:
                case 136:
                case 140:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 3:
                case 35:
                case 131:
                case 163:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 6:
                case 38:
                case 134:
                case 166:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 20:
                case 21:
                case 52:
                case 53:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 144:
                case 145:
                case 176:
                case 177:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 192:
                case 193:
                case 196:
                case 197:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 96:
                case 97:
                case 100:
                case 101:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 40:
                case 44:
                case 168:
                case 172:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 9:
                case 13:
                case 137:
                case 141:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 18:
                case 50:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_12_0
                            PIXEL4_13_50
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 80:
                case 81:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_61
                        PIXEL4_21_30
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 72:
                case 76:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_70
                        PIXEL4_13_60
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_21_0
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 10:
                case 138:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                            PIXEL4_11_0
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 66:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 24:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 7:
                case 39:
                case 135:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 148:
                case 149:
                case 180:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 224:
                case 228:
                case 225:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 41:
                case 169:
                case 45:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 22:
                case 54:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 208:
                case 209:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 104:
                case 108:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_70
                        PIXEL4_13_60
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 11:
                case 139:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 19:
                case 51:
                    {
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_00_81
                            PIXEL4_01_31
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_00_12
                            PIXEL4_01_14
                            PIXEL4_02_83
                            PIXEL4_03_50
                            PIXEL4_12_70
                            PIXEL4_13_21
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 146:
                case 178:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                            PIXEL4_23_32
                            PIXEL4_33_82
                        }
                        else
                        {
                            PIXEL4_02_21
                            PIXEL4_03_50
                            PIXEL4_12_70
                            PIXEL4_13_83
                            PIXEL4_23_13
                            PIXEL4_33_11
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        break;
                    }
                case 84:
                case 85:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_03_81
                            PIXEL4_13_31
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_03_12
                            PIXEL4_13_14
                            PIXEL4_22_70
                            PIXEL4_23_83
                            PIXEL4_32_21
                            PIXEL4_33_50
                        }
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 112:
                case 113:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_82
                        PIXEL4_21_32
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_30_82
                            PIXEL4_31_32
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_70
                            PIXEL4_23_21
                            PIXEL4_30_11
                            PIXEL4_31_13
                            PIXEL4_32_83
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 200:
                case 204:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_70
                        PIXEL4_13_60
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                            PIXEL4_32_31
                            PIXEL4_33_81
                        }
                        else
                        {
                            PIXEL4_20_21
                            PIXEL4_21_70
                            PIXEL4_30_50
                            PIXEL4_31_83
                            PIXEL4_32_14
                            PIXEL4_33_12
                        }
                        PIXEL4_22_31
                        PIXEL4_23_81
                        break;
                    }
                case 73:
                case 77:
                    {
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_00_82
                            PIXEL4_10_32
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_00_11
                            PIXEL4_10_13
                            PIXEL4_20_83
                            PIXEL4_21_70
                            PIXEL4_30_50
                            PIXEL4_31_21
                        }
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 42:
                case 170:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                            PIXEL4_20_31
                            PIXEL4_30_81
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_21
                            PIXEL4_10_83
                            PIXEL4_11_70
                            PIXEL4_20_14
                            PIXEL4_30_12
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 14:
                case 142:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_02_32
                            PIXEL4_03_82
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_83
                            PIXEL4_02_13
                            PIXEL4_03_11
                            PIXEL4_10_21
                            PIXEL4_11_70
                        }
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 67:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 70:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 28:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 152:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 194:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 98:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 56:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 25:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 26:
                case 31:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 82:
                case 214:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 88:
                case 248:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 74:
                case 107:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_61
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 27:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 86:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 216:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 106:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_61
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 30:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 210:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 120:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 75:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 29:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 198:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 184:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 99:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 57:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 71:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 156:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 226:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 60:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 195:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 102:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 153:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 58:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 83:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_20_61
                        PIXEL4_21_30
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 92:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 202:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_12_30
                        PIXEL4_13_61
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 78:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_12_32
                        PIXEL4_13_82
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 154:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 114:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_20_82
                        PIXEL4_21_32
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        PIXEL4_30_82
                        PIXEL4_31_32
                        break;
                    }
                case 89:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 90:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 55:
                case 23:
                    {
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_00_81
                            PIXEL4_01_31
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_12_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_00_12
                            PIXEL4_01_14
                            PIXEL4_02_83
                            PIXEL4_03_50
                            PIXEL4_12_70
                            PIXEL4_13_21
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 182:
                case 150:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_12_0
                            PIXEL4_13_0
                            PIXEL4_23_32
                            PIXEL4_33_82
                        }
                        else
                        {
                            PIXEL4_02_21
                            PIXEL4_03_50
                            PIXEL4_12_70
                            PIXEL4_13_83
                            PIXEL4_23_13
                            PIXEL4_33_11
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        break;
                    }
                case 213:
                case 212:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_03_81
                            PIXEL4_13_31
                            PIXEL4_22_0
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_03_12
                            PIXEL4_13_14
                            PIXEL4_22_70
                            PIXEL4_23_83
                            PIXEL4_32_21
                            PIXEL4_33_50
                        }
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 241:
                case 240:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_82
                        PIXEL4_21_32
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_0
                            PIXEL4_23_0
                            PIXEL4_30_82
                            PIXEL4_31_32
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_22_70
                            PIXEL4_23_21
                            PIXEL4_30_11
                            PIXEL4_31_13
                            PIXEL4_32_83
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 236:
                case 232:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_70
                        PIXEL4_13_60
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_21_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                            PIXEL4_32_31
                            PIXEL4_33_81
                        }
                        else
                        {
                            PIXEL4_20_21
                            PIXEL4_21_70
                            PIXEL4_30_50
                            PIXEL4_31_83
                            PIXEL4_32_14
                            PIXEL4_33_12
                        }
                        PIXEL4_22_31
                        PIXEL4_23_81
                        break;
                    }
                case 109:
                case 105:
                    {
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_00_82
                            PIXEL4_10_32
                            PIXEL4_20_0
                            PIXEL4_21_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_00_11
                            PIXEL4_10_13
                            PIXEL4_20_83
                            PIXEL4_21_70
                            PIXEL4_30_50
                            PIXEL4_31_21
                        }
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 171:
                case 43:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                            PIXEL4_11_0
                            PIXEL4_20_31
                            PIXEL4_30_81
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_21
                            PIXEL4_10_83
                            PIXEL4_11_70
                            PIXEL4_20_14
                            PIXEL4_30_12
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 143:
                case 15:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_02_32
                            PIXEL4_03_82
                            PIXEL4_10_0
                            PIXEL4_11_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_83
                            PIXEL4_02_13
                            PIXEL4_03_11
                            PIXEL4_10_21
                            PIXEL4_11_70
                        }
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 124:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 203:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 62:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 211:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 118:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 217:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 110:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 155:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 188:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 185:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 61:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 157:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 103:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 227:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 230:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 199:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 220:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 158:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_12_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 234:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_12_30
                        PIXEL4_13_61
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 242:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_82
                        PIXEL4_31_32
                        break;
                    }
                case 59:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_11_0
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 121:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 87:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_0
                        PIXEL4_20_61
                        PIXEL4_21_30
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 79:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_11_0
                        PIXEL4_12_32
                        PIXEL4_13_82
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 122:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 94:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_12_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 218:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 91:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_11_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 229:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 167:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 173:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 181:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 186:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 115:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_20_82
                        PIXEL4_21_32
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        PIXEL4_30_82
                        PIXEL4_31_32
                        break;
                    }
                case 93:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 206:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_12_32
                        PIXEL4_13_82
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 205:
                case 201:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_10
                            PIXEL4_21_30
                            PIXEL4_30_80
                            PIXEL4_31_10
                        }
                        else
                        {
                            PIXEL4_20_12
                            PIXEL4_21_0
                            PIXEL4_30_20
                            PIXEL4_31_11
                        }
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 174:
                case 46:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_80
                            PIXEL4_01_10
                            PIXEL4_10_10
                            PIXEL4_11_30
                        }
                        else
                        {
                            PIXEL4_00_20
                            PIXEL4_01_12
                            PIXEL4_10_11
                            PIXEL4_11_0
                        }
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 179:
                case 147:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_10
                            PIXEL4_03_80
                            PIXEL4_12_30
                            PIXEL4_13_10
                        }
                        else
                        {
                            PIXEL4_02_11
                            PIXEL4_03_20
                            PIXEL4_12_0
                            PIXEL4_13_12
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 117:
                case 116:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_82
                        PIXEL4_21_32
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_30
                            PIXEL4_23_10
                            PIXEL4_32_10
                            PIXEL4_33_80
                        }
                        else
                        {
                            PIXEL4_22_0
                            PIXEL4_23_11
                            PIXEL4_32_12
                            PIXEL4_33_20
                        }
                        PIXEL4_30_82
                        PIXEL4_31_32
                        break;
                    }
                case 189:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 231:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 126:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 219:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 125:
                    {
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_00_82
                            PIXEL4_10_32
                            PIXEL4_20_0
                            PIXEL4_21_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_00_11
                            PIXEL4_10_13
                            PIXEL4_20_83
                            PIXEL4_21_70
                            PIXEL4_30_50
                            PIXEL4_31_21
                        }
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 221:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_03_81
                            PIXEL4_13_31
                            PIXEL4_22_0
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_03_12
                            PIXEL4_13_14
                            PIXEL4_22_70
                            PIXEL4_23_83
                            PIXEL4_32_21
                            PIXEL4_33_50
                        }
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 207:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_02_32
                            PIXEL4_03_82
                            PIXEL4_10_0
                            PIXEL4_11_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_83
                            PIXEL4_02_13
                            PIXEL4_03_11
                            PIXEL4_10_21
                            PIXEL4_11_70
                        }
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_31
                        PIXEL4_23_81
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 238:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_32
                        PIXEL4_13_82
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_21_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                            PIXEL4_32_31
                            PIXEL4_33_81
                        }
                        else
                        {
                            PIXEL4_20_21
                            PIXEL4_21_70
                            PIXEL4_30_50
                            PIXEL4_31_83
                            PIXEL4_32_14
                            PIXEL4_33_12
                        }
                        PIXEL4_22_31
                        PIXEL4_23_81
                        break;
                    }
                case 190:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_12_0
                            PIXEL4_13_0
                            PIXEL4_23_32
                            PIXEL4_33_82
                        }
                        else
                        {
                            PIXEL4_02_21
                            PIXEL4_03_50
                            PIXEL4_12_70
                            PIXEL4_13_83
                            PIXEL4_23_13
                            PIXEL4_33_11
                        }
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        break;
                    }
                case 187:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                            PIXEL4_11_0
                            PIXEL4_20_31
                            PIXEL4_30_81
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_21
                            PIXEL4_10_83
                            PIXEL4_11_70
                            PIXEL4_20_14
                            PIXEL4_30_12
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 243:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_82
                        PIXEL4_21_32
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_22_0
                            PIXEL4_23_0
                            PIXEL4_30_82
                            PIXEL4_31_32
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_22_70
                            PIXEL4_23_21
                            PIXEL4_30_11
                            PIXEL4_31_13
                            PIXEL4_32_83
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 119:
                    {
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_00_81
                            PIXEL4_01_31
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_12_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_00_12
                            PIXEL4_01_14
                            PIXEL4_02_83
                            PIXEL4_03_50
                            PIXEL4_12_70
                            PIXEL4_13_21
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 237:
                case 233:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_60
                        PIXEL4_03_20
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_70
                        PIXEL4_13_60
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_31
                        PIXEL4_23_81
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 175:
                case 47:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_70
                        PIXEL4_23_60
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_60
                        PIXEL4_33_20
                        break;
                    }
                case 183:
                case 151:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_60
                        PIXEL4_21_70
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_20
                        PIXEL4_31_60
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 245:
                case 244:
                    {
                        PIXEL4_00_20
                        PIXEL4_01_60
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_60
                        PIXEL4_11_70
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_0
                        PIXEL4_23_0
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 250:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_30
                        PIXEL4_13_10
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        break;
                    }
                case 123:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_10
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 95:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_80
                        PIXEL4_31_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 222:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 252:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_61
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_31
                        PIXEL4_13_31
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_0
                        PIXEL4_23_0
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 249:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_61
                        PIXEL4_03_80
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        break;
                    }
                case 235:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_61
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_31
                        PIXEL4_23_81
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 111:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_32
                        PIXEL4_13_82
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_61
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 63:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_61
                        PIXEL4_33_80
                        break;
                    }
                case 159:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_80
                        PIXEL4_31_61
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 215:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_61
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 246:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_61
                        PIXEL4_11_30
                        PIXEL4_12_0
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_0
                        PIXEL4_23_0
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 254:
                    {
                        PIXEL4_00_80
                        PIXEL4_01_10
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_10
                        PIXEL4_11_30
                        PIXEL4_12_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_0
                        PIXEL4_23_0
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 253:
                    {
                        PIXEL4_00_82
                        PIXEL4_01_82
                        PIXEL4_02_81
                        PIXEL4_03_81
                        PIXEL4_10_32
                        PIXEL4_11_32
                        PIXEL4_12_31
                        PIXEL4_13_31
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_0
                        PIXEL4_23_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 251:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_10
                        PIXEL4_03_80
                        PIXEL4_11_0
                        PIXEL4_12_30
                        PIXEL4_13_10
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        break;
                    }
                case 239:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        PIXEL4_02_32
                        PIXEL4_03_82
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_32
                        PIXEL4_13_82
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_31
                        PIXEL4_23_81
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        PIXEL4_32_31
                        PIXEL4_33_81
                        break;
                    }
                case 127:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_02_0
                            PIXEL4_03_0
                            PIXEL4_13_0
                        }
                        else
                        {
                            PIXEL4_02_50
                            PIXEL4_03_50
                            PIXEL4_13_50
                        }
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_20_0
                            PIXEL4_30_0
                            PIXEL4_31_0
                        }
                        else
                        {
                            PIXEL4_20_50
                            PIXEL4_30_50
                            PIXEL4_31_50
                        }
                        PIXEL4_21_0
                        PIXEL4_22_30
                        PIXEL4_23_10
                        PIXEL4_32_10
                        PIXEL4_33_80
                        break;
                    }
                case 191:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_31
                        PIXEL4_21_31
                        PIXEL4_22_32
                        PIXEL4_23_32
                        PIXEL4_30_81
                        PIXEL4_31_81
                        PIXEL4_32_82
                        PIXEL4_33_82
                        break;
                    }
                case 223:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                            PIXEL4_01_0
                            PIXEL4_10_0
                        }
                        else
                        {
                            PIXEL4_00_50
                            PIXEL4_01_50
                            PIXEL4_10_50
                        }
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_10
                        PIXEL4_21_30
                        PIXEL4_22_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_23_0
                            PIXEL4_32_0
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_23_50
                            PIXEL4_32_50
                            PIXEL4_33_50
                        }
                        PIXEL4_30_80
                        PIXEL4_31_10
                        break;
                    }
                case 247:
                    {
                        PIXEL4_00_81
                        PIXEL4_01_31
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_10_81
                        PIXEL4_11_31
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_82
                        PIXEL4_21_32
                        PIXEL4_22_0
                        PIXEL4_23_0
                        PIXEL4_30_82
                        PIXEL4_31_32
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
                case 255:
                    {
                        if (diffYUV(RGBtoYUV(C3), RGBtoYUV(C1)))
                        {
                            PIXEL4_00_0
                        }
                        else
                        {
                            PIXEL4_00_20
                        }
                        PIXEL4_01_0
                        PIXEL4_02_0
                        if (diffYUV(RGBtoYUV(C1), RGBtoYUV(C5)))
                        {
                            PIXEL4_03_0
                        }
                        else
                        {
                            PIXEL4_03_20
                        }
                        PIXEL4_10_0
                        PIXEL4_11_0
                        PIXEL4_12_0
                        PIXEL4_13_0
                        PIXEL4_20_0
                        PIXEL4_21_0
                        PIXEL4_22_0
                        PIXEL4_23_0
                        if (diffYUV(RGBtoYUV(C7), RGBtoYUV(C3)))
                        {
                            PIXEL4_30_0
                        }
                        else
                        {
                            PIXEL4_30_20
                        }
                        PIXEL4_31_0
                        PIXEL4_32_0
                        if (diffYUV(RGBtoYUV(C5), RGBtoYUV(C7)))
                        {
                            PIXEL4_33_0
                        }
                        else
                        {
                            PIXEL4_33_20
                        }
                        break;
                    }
            }
}

#undef RGBtoYUV
