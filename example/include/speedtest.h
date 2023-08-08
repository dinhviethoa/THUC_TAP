#ifndef SPEEDTEST_H_
#define SPEEDTEST_H_

typedef struct {
    float download;
    float upload;
}SPTEST;

extern void speedtest();

#endif