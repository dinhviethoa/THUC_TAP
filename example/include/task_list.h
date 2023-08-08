
#ifndef __TASK_LIST_H__
#define __TASK_LIST_H__

#include "ak/ak.h"
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"

enum {
	/* SYSTEM TASKS */
	DEFAULT_AK_FIRST_TASK = AK_TASK_TIMER_ID,

	/* APP TASKS */
	GW_TASK_APP_1,
	GW_TASK_APP_2,
	GW_TASK_APP_3,
	GW_TASK_APP_4,
	GW_TASK_APP_5,
	GW_TASK_APP_6,
	GW_TASK_APP_7,
	/* EOT task ID */
	AK_TASK_LIST_LEN,
};

extern ak_task_t task_list_init[];

#endif


