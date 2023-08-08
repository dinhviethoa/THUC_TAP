#ifndef _PING_H_
#define _PING_H_

typedef struct ping_struc{
    int send;
    int rec;
    char lost_packet[5];
    char time_tran[10];
    char hour[10]; 
    char rtt[30];
}PING;

extern char *hour_current();
extern void ping_googleA();
extern void ping_googleB();
extern void ping_1111();
extern void ping_facebook();
extern void ping_youtube();
extern void ping_tiktok();

#endif