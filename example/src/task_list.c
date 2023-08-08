#include "task_list.h"

ak_task_t task_list_init[] = {
	/* SYSTEM TASKS */
	{	DEFAULT_AK_FIRST_TASK,	TASK_PRI_LEVEL_1,	timer_entry     ,	&timer_mailbox		,	"timer service"			},

	/* APP TASKS */
	{	GW_TASK_APP_1,	TASK_PRI_LEVEL_1,	gw_task_app1_entry	,	&gw_task_app1_mailbox,	"handle commands"			},
	{	GW_TASK_APP_2,	TASK_PRI_LEVEL_1,	gw_task_app2_entry	,	&gw_task_app2_mailbox,	"handle commands"			},
	{   GW_TASK_APP_3,	TASK_PRI_LEVEL_1,	gw_task_app3_entry	,	&gw_task_app3_mailbox,	"handle commands"			},
	{   GW_TASK_APP_4,	TASK_PRI_LEVEL_1,	gw_task_app4_entry	,	&gw_task_app4_mailbox,	"handle commands"			},
	{   GW_TASK_APP_5,	TASK_PRI_LEVEL_1,	gw_task_app5_entry	,	&gw_task_app5_mailbox,	"handle commands"			},
	{   GW_TASK_APP_6,	TASK_PRI_LEVEL_1,	gw_task_app6_entry	,	&gw_task_app6_mailbox,	"handle commands"			},
	{   GW_TASK_APP_7,	TASK_PRI_LEVEL_1,	gw_task_app7_entry	,	&gw_task_app7_mailbox,	"handle commands"			}
};
