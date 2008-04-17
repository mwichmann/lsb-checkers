/*
 * Test of atk-1.0/atk/atk-enum-types.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "atk-1.0/atk/atk-enum-types.h"



#ifdef TET_TEST
void atk_1_0_atk_atk_enum_types_h()
{
#else
int atk_1_0_atk_atk_enum_types_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in atk-1.0/atk/atk-enum-types.h\n");
#endif

printf("Checking data structures in atk-1.0/atk/atk-enum-types.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_HYPERLINK_STATE_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_ROLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_LAYER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_RELATION_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_STATE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_TEXT_ATTRIBUTE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_TEXT_BOUNDARY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_TEXT_CLIP_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_KEY_EVENT_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATK_TYPE_COORD_TYPE */
#endif

extern GType atk_state_type_get_type_db(void);
CheckInterfacedef(atk_state_type_get_type,atk_state_type_get_type_db);
extern GType atk_role_get_type_db(void);
CheckInterfacedef(atk_role_get_type,atk_role_get_type_db);
extern GType atk_text_boundary_get_type_db(void);
CheckInterfacedef(atk_text_boundary_get_type,atk_text_boundary_get_type_db);
extern GType atk_relation_type_get_type_db(void);
CheckInterfacedef(atk_relation_type_get_type,atk_relation_type_get_type_db);
extern GType atk_layer_get_type_db(void);
CheckInterfacedef(atk_layer_get_type,atk_layer_get_type_db);
extern GType atk_hyperlink_state_flags_get_type_db(void);
CheckInterfacedef(atk_hyperlink_state_flags_get_type,atk_hyperlink_state_flags_get_type_db);
extern GType atk_text_clip_type_get_type_db(void);
CheckInterfacedef(atk_text_clip_type_get_type,atk_text_clip_type_get_type_db);
extern GType atk_key_event_type_get_type_db(void);
CheckInterfacedef(atk_key_event_type_get_type,atk_key_event_type_get_type_db);
extern GType atk_coord_type_get_type_db(void);
CheckInterfacedef(atk_coord_type_get_type,atk_coord_type_get_type_db);
extern GType atk_text_attribute_get_type_db(void);
CheckInterfacedef(atk_text_attribute_get_type,atk_text_attribute_get_type_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in atk-1.0/atk/atk-enum-types.h\n\n",pcnt,cnt);
return cnt;
#endif

}
