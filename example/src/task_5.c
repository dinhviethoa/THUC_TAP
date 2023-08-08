#include "task_5.h"

q_msg_t gw_task_app5_mailbox;

void* gw_task_app5_entry(void) {
	wait_all_tasks_started();

	AK_PRINT("[STARTED] gw_task_app5_entry\n");
	ak_msg_t* msg;

	timer_set(GW_TASK_APP_5, 0, 10000, TIMER_PERIODIC);
	
	while (1) {
		msg = ak_msg_rev(GW_TASK_APP_5);
		ping_youtube();
		ak_msg_free(msg);
	}

	return (void*)0;
}
