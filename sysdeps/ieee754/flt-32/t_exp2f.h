/* Accurate tables for exp2f().
   Copyright (C) 1998-2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Geoffrey Keating <geoffk@ozemail.com.au>

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* This table has the property that, for all integers -128 <= i <= 127,
   exp(i/256.0 + __exp2f_deltatable[i-128]) == __exp2f_atable[i+128] + r
   for some -2^-35 < r < 2^-35 (abs(r) < 2^-36 if i <= 0); and that
   __exp2f_deltatable[i+128] == t * 2^-30
   for integer t so that abs(t) <= 43447 * 2^0.  */

#define W30 (9.31322575e-10)
static const float __exp2f_deltatable[256] = {
      -810*W30,       283*W30,     -1514*W30,      1304*W30,
     -1148*W30,       -98*W30,      -744*W30,      -156*W30,
      -419*W30,      -155*W30,       474*W30,       167*W30,
     -1984*W30,      -826*W30,       692*W30,       781*W30,
      -578*W30,      -411*W30,      -129*W30,     -1500*W30,
       654*W30,      -141*W30,      -816*W30,       -53*W30,
       148*W30,       493*W30,     -2214*W30,       760*W30,
       260*W30,       750*W30,     -1300*W30,      1424*W30,
     -1445*W30,      -339*W30,      -680*W30,      -349*W30,
      -922*W30,       531*W30,       193*W30,     -2892*W30,
       290*W30,     -2145*W30,      -276*W30,       485*W30,
      -695*W30,       215*W30,     -7093*W30,       412*W30,
     -4596*W30,       367*W30,       592*W30,      -615*W30,
       -97*W30,     -1066*W30,       972*W30,      -226*W30,
      -625*W30,      -374*W30,     -5647*W30,      -180*W30,
     20349*W30,      -447*W30,       111*W30,     -4164*W30,
       -87*W30,       -21*W30,      -251*W30,        66*W30,
      -517*W30,      2093*W30,      -263*W30,       182*W30,
      -601*W30,       475*W30,      -483*W30,     -1251*W30,
      -373*W30,      1471*W30,       -92*W30,      -215*W30,
       -97*W30,      -190*W30,         0*W30,      -290*W30,
     -2647*W30,      1940*W30,      -582*W30,        28*W30,
       833*W30,      1493*W30,        34*W30,       321*W30,
      3327*W30,       -35*W30,       177*W30,      -135*W30,
      -796*W30,      -428*W30,       129*W30,      9332*W30,
       -12*W30,       -69*W30,     -1743*W30,      6508*W30,
       -60*W30,       359*W30,     43447*W30,        15*W30,
       -23*W30,      -305*W30,      -375*W30,      -652*W30,
       667*W30,       269*W30,     -1575*W30,       185*W30,
      -329*W30,       200*W30,      6002*W30,       163*W30,
      -647*W30,        19*W30,      -603*W30,      -755*W30,
       742*W30,      -438*W30,      3587*W30,      2560*W30,
         0*W30,      -520*W30,      -241*W30,      -299*W30,
     -1270*W30,      -991*W30,     -1138*W30,       255*W30,
     -1192*W30,      1722*W30,      1023*W30,      3700*W30,
     -1388*W30,     -1551*W30,     -2549*W30,        27*W30,
       282*W30,       673*W30,       113*W30,      1561*W30,
        72*W30,       873*W30,        87*W30,      -395*W30,
      -433*W30,       629*W30,      3440*W30,      -284*W30,
      -592*W30,      -103*W30,       -46*W30,     -3844*W30,
      1712*W30,       303*W30,      1555*W30,      -631*W30,
     -1400*W30,      -961*W30,      -854*W30,      -276*W30,
       407*W30,       833*W30,      -345*W30,     -1501*W30,
       121*W30,     -1581*W30,       400*W30,       150*W30,
      1224*W30,      -139*W30,      -563*W30,       879*W30,
       933*W30,      2939*W30,       788*W30,       211*W30,
       530*W30,      -192*W30,       706*W30,    -13347*W30,
      1065*W30,         3*W30,       111*W30,      -208*W30,
      -360*W30,      -532*W30,      -291*W30,       483*W30,
       987*W30,       -33*W30,     -1373*W30,      -166*W30,
     -1174*W30,     -3955*W30,      1601*W30,      -280*W30,
      1405*W30,       600*W30,     -1659*W30,       -23*W30,
       390*W30,       449*W30,       570*W30,    -13143*W30,
        -9*W30,     -1646*W30,      1201*W30,       294*W30,
      2181*W30,     -1173*W30,      1388*W30,     -4504*W30,
       190*W30,     -2304*W30,       211*W30,       239*W30,
        48*W30,      -817*W30,      1018*W30,      1828*W30,
      -663*W30,      1408*W30,       408*W30,       -36*W30,
      1295*W30,      -230*W30,      1341*W30,         9*W30,
        40*W30,       705*W30,       186*W30,       376*W30,
       557*W30,      5866*W30,       363*W30,     -1558*W30,
       718*W30,       669*W30,      1369*W30,     -2972*W30,
      -468*W30,      -121*W30,      -219*W30,       667*W30,
     29954*W30,       366*W30,        48*W30,      -203*W30
};

static const float __exp2f_atable[256] /* __attribute__((mode(SF))) */ = {
 0.707106411447, /* 0x0.b504ecfff */
 0.709024071690, /* 0x0.b58299fff */
 0.710945606239, /* 0x0.b60088000 */
 0.712874472142, /* 0x0.b67ef1000 */
 0.714806139464, /* 0x0.b6fd88fff */
 0.716744661340, /* 0x0.b77c94000 */
 0.718687653549, /* 0x0.b7fbea000 */
 0.720636486992, /* 0x0.b87ba1fff */
 0.722590208040, /* 0x0.b8fbabfff */
 0.724549472323, /* 0x0.b97c12fff */
 0.726514220228, /* 0x0.b9fcd5fff */
 0.728483855735, /* 0x0.ba7deb000 */
 0.730457961549, /* 0x0.baff4afff */
 0.732438981522, /* 0x0.bb811efff */
 0.734425544748, /* 0x0.bc0350000 */
 0.736416816713, /* 0x0.bc85d0000 */
 0.738412797450, /* 0x0.bd089efff */
 0.740414917465, /* 0x0.bd8bd4fff */
 0.742422521111, /* 0x0.be0f66fff */
 0.744434773914, /* 0x0.be9346fff */
 0.746454179287, /* 0x0.bf179f000 */
 0.748477637755, /* 0x0.bf9c3afff */
 0.750506639473, /* 0x0.c02133fff */
 0.752541840064, /* 0x0.c0a694fff */
 0.754582285889, /* 0x0.c12c4e000 */
 0.756628334525, /* 0x0.c1b265000 */
 0.758678436269, /* 0x0.c238bffff */
 0.760736882681, /* 0x0.c2bfa6fff */
 0.762799203401, /* 0x0.c346cf000 */
 0.764867603790, /* 0x0.c3ce5d000 */
 0.766940355298, /* 0x0.c45633fff */
 0.769021093841, /* 0x0.c4de90fff */
 0.771104693409, /* 0x0.c5671dfff */
 0.773195922364, /* 0x0.c5f02afff */
 0.775292098512, /* 0x0.c6798afff */
 0.777394294745, /* 0x0.c70350000 */
 0.779501736166, /* 0x0.c78d6d000 */
 0.781615912910, /* 0x0.c817fafff */
 0.783734917628, /* 0x0.c8a2d9fff */
 0.785858273516, /* 0x0.c92e02000 */
 0.787990570071, /* 0x0.c9b9c0000 */
 0.790125787245, /* 0x0.ca45aefff */
 0.792268991467, /* 0x0.cad223fff */
 0.794417440881, /* 0x0.cb5ef0fff */
 0.796570718287, /* 0x0.cbec0efff */
 0.798730909811, /* 0x0.cc79a0fff */
 0.800892710672, /* 0x0.cd074dfff */
 0.803068041795, /* 0x0.cd95ddfff */
 0.805242776881, /* 0x0.ce2464000 */
 0.807428598393, /* 0x0.ceb3a3fff */
 0.809617877002, /* 0x0.cf431dfff */
 0.811812341211, /* 0x0.cfd2eefff */
 0.814013659956, /* 0x0.d06333000 */
 0.816220164311, /* 0x0.d0f3ce000 */
 0.818434238424, /* 0x0.d184e7fff */
 0.820652604094, /* 0x0.d21649fff */
 0.822877407074, /* 0x0.d2a818000 */
 0.825108587751, /* 0x0.d33a51000 */
 0.827342867839, /* 0x0.d3ccbdfff */
 0.829588949684, /* 0x0.d45ff1000 */
 0.831849217401, /* 0x0.d4f411fff */
 0.834093391880, /* 0x0.d58724fff */
 0.836355149750, /* 0x0.d61b5f000 */
 0.838620424257, /* 0x0.d6afd3fff */
 0.840896368027, /* 0x0.d744fc000 */
 0.843176305293, /* 0x0.d7da66fff */
 0.845462262643, /* 0x0.d87037000 */
 0.847754716864, /* 0x0.d90673fff */
 0.850052893157, /* 0x0.d99d10fff */
 0.852359056469, /* 0x0.da3433fff */
 0.854668736446, /* 0x0.dacb91fff */
 0.856986224651, /* 0x0.db6373000 */
 0.859309315673, /* 0x0.dbfbb1fff */
 0.861639738080, /* 0x0.dc946bfff */
 0.863975346095, /* 0x0.dd2d7d000 */
 0.866317391394, /* 0x0.ddc6f9fff */
 0.868666708472, /* 0x0.de60f1000 */
 0.871022939695, /* 0x0.defb5c000 */
 0.873383641229, /* 0x0.df9611fff */
 0.875751554968, /* 0x0.e03141000 */
 0.878126025200, /* 0x0.e0ccde000 */
 0.880506813521, /* 0x0.e168e4fff */
 0.882894217966, /* 0x0.e2055afff */
 0.885287821299, /* 0x0.e2a239000 */
 0.887686729423, /* 0x0.e33f6ffff */
 0.890096127973, /* 0x0.e3dd56fff */
 0.892507970338, /* 0x0.e47b67000 */
 0.894928157336, /* 0x0.e51a03000 */
 0.897355020043, /* 0x0.e5b90efff */
 0.899788379682, /* 0x0.e65888000 */
 0.902227103705, /* 0x0.e6f85afff */
 0.904673457151, /* 0x0.e798ae000 */
 0.907128036008, /* 0x0.e8398afff */
 0.909585535528, /* 0x0.e8da99000 */
 0.912051796915, /* 0x0.e97c3a000 */
 0.914524436003, /* 0x0.ea1e46000 */
 0.917003571999, /* 0x0.eac0bf000 */
 0.919490039339, /* 0x0.eb63b2fff */
 0.921983361257, /* 0x0.ec071a000 */
 0.924488604054, /* 0x0.ecab48fff */
 0.926989555360, /* 0x0.ed4f30000 */
 0.929502844812, /* 0x0.edf3e6000 */
 0.932021975503, /* 0x0.ee98fdfff */
 0.934553921208, /* 0x0.ef3eecfff */
 0.937083780759, /* 0x0.efe4b8fff */
 0.939624726786, /* 0x0.f08b3f000 */
 0.942198514924, /* 0x0.f133ebfff */
 0.944726586343, /* 0x0.f1d99a000 */
 0.947287976728, /* 0x0.f28176fff */
 0.949856162070, /* 0x0.f329c5fff */
 0.952431440345, /* 0x0.f3d28bfff */
 0.955013573175, /* 0x0.f47bc5000 */
 0.957603693021, /* 0x0.f52584000 */
 0.960199773321, /* 0x0.f5cfa7000 */
 0.962801992906, /* 0x0.f67a31000 */
 0.965413510788, /* 0x0.f72556fff */
 0.968030691152, /* 0x0.f7d0dc000 */
 0.970655620084, /* 0x0.f87ce2fff */
 0.973290979849, /* 0x0.f92998fff */
 0.975926160805, /* 0x0.f9d64bfff */
 0.978571653370, /* 0x0.fa83ac000 */
 0.981225252139, /* 0x0.fb3193fff */
 0.983885228626, /* 0x0.fbdfe6fff */
 0.986552715296, /* 0x0.fc8eb7fff */
 0.989228487027, /* 0x0.fd3e14000 */
 0.991909801964, /* 0x0.fdedcd000 */
 0.994601726545, /* 0x0.fe9e38000 */
 0.997297704209, /* 0x0.ff4ee6fff */
 1.000000000000, /* 0x1.000000000 */
 1.002710938457, /* 0x1.00b1aa000 */
 1.005429744692, /* 0x1.0163d7ffe */
 1.008155703526, /* 0x1.02167dffe */
 1.010888457284, /* 0x1.02c995fff */
 1.013629436498, /* 0x1.037d38000 */
 1.016377568250, /* 0x1.043152000 */
 1.019134163841, /* 0x1.04e5f9ffe */
 1.021896362316, /* 0x1.059b00000 */
 1.024668931945, /* 0x1.0650b3ffe */
 1.027446627635, /* 0x1.0706be001 */
 1.030234098408, /* 0x1.07bd6bffe */
 1.033023953416, /* 0x1.087441ffe */
 1.035824656494, /* 0x1.092bce000 */
 1.038632392900, /* 0x1.09e3d0001 */
 1.041450142840, /* 0x1.0a9c79ffe */
 1.044273972530, /* 0x1.0b558a001 */
 1.047105550795, /* 0x1.0c0f1c001 */
 1.049944162390, /* 0x1.0cc924001 */
 1.052791833895, /* 0x1.0d83c4001 */
 1.055645227426, /* 0x1.0e3ec3fff */
 1.058507919326, /* 0x1.0efa60001 */
 1.061377286898, /* 0x1.0fb66bfff */
 1.064254641510, /* 0x1.1072fdffe */
 1.067140102389, /* 0x1.113018000 */
 1.070034146304, /* 0x1.11edc1fff */
 1.072937250162, /* 0x1.12ac04001 */
 1.075843691823, /* 0x1.136a7dfff */
 1.078760385496, /* 0x1.1429a3ffe */
 1.081685543070, /* 0x1.14e958000 */
 1.084618330005, /* 0x1.15a98c000 */
 1.087556362176, /* 0x1.166a18001 */
 1.090508937863, /* 0x1.172b98001 */
 1.093464612954, /* 0x1.17ed4bfff */
 1.096430182434, /* 0x1.18afa5ffe */
 1.099401354802, /* 0x1.19725e000 */
 1.102381587017, /* 0x1.1a35adfff */
 1.105370759965, /* 0x1.1af994000 */
 1.108367800686, /* 0x1.1bbdfdffe */
 1.111373305331, /* 0x1.1c82f6000 */
 1.114387035385, /* 0x1.1d4878001 */
 1.117408752440, /* 0x1.1e0e7ffff */
 1.120437502874, /* 0x1.1ed4fe000 */
 1.123474478729, /* 0x1.1f9c06000 */
 1.126521706601, /* 0x1.2063ba001 */
 1.129574775716, /* 0x1.212bd0001 */
 1.132638812065, /* 0x1.21f49e000 */
 1.135709524130, /* 0x1.22bddbffe */
 1.138789534565, /* 0x1.2387b5fff */
 1.141876101508, /* 0x1.2451fe000 */
 1.144971728301, /* 0x1.251cddffe */
 1.148077130296, /* 0x1.25e861ffe */
 1.151189923305, /* 0x1.26b462001 */
 1.154312610610, /* 0x1.278107ffe */
 1.157440662410, /* 0x1.284e08001 */
 1.160578370109, /* 0x1.291baa001 */
 1.163725256932, /* 0x1.29e9e6000 */
 1.166879892324, /* 0x1.2ab8a3ffe */
 1.170044302935, /* 0x1.2b8805fff */
 1.173205971694, /* 0x1.2c5739ffe */
 1.176397800428, /* 0x1.2d2867ffe */
 1.179586529747, /* 0x1.2df962001 */
 1.182784795737, /* 0x1.2ecafbffe */
 1.185991406414, /* 0x1.2f9d21ffe */
 1.189206838636, /* 0x1.306fdc001 */
 1.192430973067, /* 0x1.314328000 */
 1.195664167430, /* 0x1.32170c001 */
 1.198906540890, /* 0x1.32eb8a001 */
 1.202157497408, /* 0x1.33c098000 */
 1.205416083326, /* 0x1.349625fff */
 1.208683252332, /* 0x1.356c43fff */
 1.211961269402, /* 0x1.364318001 */
 1.215246438983, /* 0x1.371a64000 */
 1.218539118740, /* 0x1.37f22dffe */
 1.221847295770, /* 0x1.38cafc000 */
 1.225158572187, /* 0x1.39a3fdfff */
 1.228481650325, /* 0x1.3a7dc5ffe */
 1.231811761846, /* 0x1.3b5803fff */
 1.235149741144, /* 0x1.3c32c5ffe */
 1.238499879811, /* 0x1.3d0e53ffe */
 1.241858124726, /* 0x1.3dea69fff */
 1.245225191102, /* 0x1.3ec713fff */
 1.248601436624, /* 0x1.3fa458000 */
 1.251975655584, /* 0x1.40817a001 */
 1.255380749731, /* 0x1.4160a2001 */
 1.258783102010, /* 0x1.423f9bffe */
 1.262198328973, /* 0x1.431f6e000 */
 1.265619754780, /* 0x1.43ffa7fff */
 1.269052743928, /* 0x1.44e0a4001 */
 1.272490739830, /* 0x1.45c1f4000 */
 1.275942921659, /* 0x1.46a432001 */
 1.279397487615, /* 0x1.478697ffe */
 1.282870173427, /* 0x1.486a2dffe */
 1.286346316319, /* 0x1.494dfdffe */
 1.289836049094, /* 0x1.4a32b2001 */
 1.293333172770, /* 0x1.4b17e1ffe */
 1.296839594835, /* 0x1.4bfdadfff */
 1.300354957560, /* 0x1.4ce40fffe */
 1.303882122055, /* 0x1.4dcb38001 */
 1.307417988757, /* 0x1.4eb2f1ffe */
 1.310960650439, /* 0x1.4f9b1dfff */
 1.314516782746, /* 0x1.50842bfff */
 1.318079948424, /* 0x1.516daffff */
 1.321653246888, /* 0x1.5257de000 */
 1.325237751030, /* 0x1.5342c8001 */
 1.328829526907, /* 0x1.542e2c000 */
 1.332433700535, /* 0x1.551a5fffe */
 1.336045145966, /* 0x1.56070dffe */
 1.339667558645, /* 0x1.56f473ffe */
 1.343300342533, /* 0x1.57e287ffe */
 1.346941947961, /* 0x1.58d130001 */
 1.350594043714, /* 0x1.59c087ffe */
 1.354256033883, /* 0x1.5ab085fff */
 1.357932448365, /* 0x1.5ba175ffe */
 1.361609339707, /* 0x1.5c926dfff */
 1.365299344044, /* 0x1.5d8441ffe */
 1.369003057507, /* 0x1.5e76fc001 */
 1.372714757920, /* 0x1.5f6a3c000 */
 1.376437187179, /* 0x1.605e2fffe */
 1.380165219333, /* 0x1.615282001 */
 1.383909463864, /* 0x1.6247e3ffe */
 1.387661933907, /* 0x1.633dd0000 */
 1.391424179060, /* 0x1.64345fffe */
 1.395197510706, /* 0x1.652ba9fff */
 1.399006724329, /* 0x1.66254dffe */
 1.402773022651, /* 0x1.671c22000 */
 1.406576037403, /* 0x1.68155dfff */
 1.410389423392, /* 0x1.690f48001 */
};