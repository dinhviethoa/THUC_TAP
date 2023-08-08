#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <speedtest.h>

void speedtest(){
    SPTEST *speed = (SPTEST *)calloc(1,sizeof(SPTEST));
    FILE *fp;
    FILE *FileOpen;
    char line_speed[100];
    fp = fopen("example/log/records.log","a");
    FileOpen = popen("speedtest --simple", "r");
    while(fgets(line_speed, sizeof line_speed, FileOpen)){
        if(strstr(line_speed, "Download:") != NULL){
            sscanf(line_speed,"%*s %f %*s", &(speed->download));
        }else if(strstr(line_speed, "Upload:")){
            sscanf(line_speed,"%*s %f %*s", &(speed->upload));
        }
    }
    fprintf(fp,"[speedtest] [Download: %f] [Upload: %f]\n",speed->download,speed->upload);
    free(speed);
    fclose(fp);
    pclose(FileOpen);
}