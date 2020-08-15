#ifndef _SI_H_
#define _SI_H

/**** Script variable ranges ****/

#define SI_VAR_INT_LOW -270000000

#define SI_VAR_FIXED -250000000

#define SI_VAR_FLAG_ARRAY -220000000
//#define SI_VAR_FLAG_ARRAY(n) (-210000000 + n)

#define SI_VAR_ARRAY -200000000
//#define SI_VAR_ARRAY(n) (-190000000 + n)

#define SI_VAR_GLOBAL_BYTE -180000000
//#define SI_VAR_GLOBAL_BYTE(n) (-170000000 + n) /* Maximum 0x200 */

#define SI_VAR_AREA_BYTE -160000000
//#define SI_VAR_AREA_BYTE(n) (-150000000 + n) /* Maximum 0x10 */

#define SI_VAR_GLOBAL_FLAG -140000000
//#define SI_VAR_GLOBAL_FLAG(n) (-130000000 + n) /* Maximum 0x800 */

#define SI_VAR_AREA_FLAG -120000000

#define SI_VAR_MAP_FLAG -100000000

#define SI_VAR_SCRIPT_FLAG -80000000

#define SI_VAR_MAP_VAR -80000000

#define SI_VAR_SCRIPT_VAR -40000000
#define SI_VAR_SCRIPT_VAR_0 0xFE363C80

#define SI_VAR_INT -20000000

#endif
