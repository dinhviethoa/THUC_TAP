#include "task_6.h"

q_msg_t gw_task_app6_mailbox;

void* gw_task_app6_entry(void) {
	wait_all_tasks_started();

	AK_PRINT("[STARTED] gw_task_app6_entry\n");
	ak_msg_t* msg;

	timer_set(GW_TASK_APP_6, 0, 10000, TIMER_PERIODIC);
	
	while (1) {
		msg = ak_msg_rev(GW_TASK_APP_6);
		ping_tiktok();
		ak_msg_free(msg);
	}

	return (void*)0;
}
