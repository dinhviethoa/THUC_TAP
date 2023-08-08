#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ping.h>
#include <stdlib.h>

char *hour_current()
{
    time_t current;
    time(&current);
    return ctime(&current);
}

void ping_googleA()
{
    FILE *FileOpen;
    FILE *fp;
    PING *pg = (PING *)calloc(1, sizeof(PING));
    char line_ping[130];
    char line[200];
    fp = fopen("example/log/records.log", "a");
    FileOpen = popen("ping -c 10 google-public-dns-a.google.com", "r");
    sscanf(hour_current(), "%*s %*s %*d %s %*d", pg->hour);
    while (fgets(line_ping, sizeof line_ping, FileOpen))
    {
        if (strstr(line_ping, "packets transmitted") != NULL)
            sscanf(line_ping, "%d %*s %*s %d %*s %s %*s %*s %*s %s", &(pg->send), &(pg->rec), pg->lost_packet, pg->time_tran);
        else
        {
            if (strstr(line_ping, "rtt") != NULL)
            {
                sscanf(line_ping, "%*s %*s %*s %s %*s", pg->rtt);
            }
        }
    }
    sprintf(line, "[ping googleA]  [%s] [%d] [%d] [%s] [%s] [%s]\n", pg->hour, pg->send, pg->rec, pg->lost_packet, pg->time_tran, pg->rtt);
    fprintf(fp, "%s", line);
    free(pg);
    fclose(fp);
    pclose(FileOpen);
}
void ping_googleB()
{
    FILE *FileOpen;
    FILE *fp;
    PING *pg = (PING *)calloc(1, sizeof(PING));
    char line_ping[130];
    char line[200];
    fp = fopen("example/log/records.log", "a");
    FileOpen = popen("ping -c 10 google-public-dns-b.google.com", "r");
    sscanf(hour_current(), "%*s %*s %*d %s %*d", pg->hour);
    while (fgets(line_ping, sizeof line_ping, FileOpen))
    {
        if (strstr(line_ping, "packets transmitted") != NULL)
        {
            sscanf(line_ping, "%d %*s %*s %d %*s %s %*s %*s %*s %s", &(pg->send), &(pg->rec), pg->lost_packet, pg->time_tran);
        }
        else
        {
            if (strstr(line_ping, "rtt") != NULL)
            {
                sscanf(line_ping, "%*s %*s %*s %s %*s", pg->rtt);
            }
        }
    }
    sprintf(line, "[ping googleB]  [%s] [%d] [%d] [%s] [%s] [%s]\n", pg->hour, pg->send, pg->rec, pg->lost_packet, pg->time_tran, pg->rtt);
    fprintf(fp, "%s", line);
    free(pg);
    fclose(fp);
    pclose(FileOpen);
}
void ping_1111()
{
    FILE *FileOpen;
    FILE *fp;
    PING *pg = (PING *)calloc(1, sizeof(PING));
    char line_ping[130];
    char line[200];
    fp = fopen("example/log/records.log", "a");
    FileOpen = popen("ping -c 10 1.1.1.1", "r");
    sscanf(hour_current(), "%*s %*s %*d %s %*d", pg->hour);
    while (fgets(line_ping, sizeof line_ping, FileOpen))
    {
        if (strstr(line_ping, "packets transmitted") != NULL)
        {
            sscanf(line_ping, "%d %*s %*s %d %*s %s %*s %*s %*s %s", &(pg->send), &(pg->rec), pg->lost_packet, pg->time_tran);
        }
        else
        {
            if (strstr(line_ping, "rtt") != NULL)
            {
                sscanf(line_ping, "%*s %*s %*s %s %*s", pg->rtt);
            }
        }
    }
    sprintf(line, "[ping 1.1.1.1]  [%s] [%d] [%d] [%s] [%s] [%s]\n", pg->hour, pg->send, pg->rec, pg->lost_packet, pg->time_tran, pg->rtt);
    fprintf(fp, "%s", line);
    free(pg);
    fclose(fp);
    pclose(FileOpen);
}
void ping_facebook()
{
    FILE *FileOpen;
    FILE *fp;
    PING *pg = (PING *)calloc(1, sizeof(PING));
    char line_ping[130];
    char line[200];
    fp = fopen("example/log/records.log", "a");
    FileOpen = popen("ping -c 10 facebook.com", "r");
    sscanf(hour_current(), "%*s %*s %*d %s %*d", pg->hour);
    while (fgets(line_ping, sizeof line_ping, FileOpen))
    {
        if (strstr(line_ping, "packets transmitted") != NULL)
        {
            sscanf(line_ping, "%d %*s %*s %d %*s %s %*s %*s %*s %s", &(pg->send), &(pg->rec), pg->lost_packet, pg->time_tran);
        }
        else
        {
            if (strstr(line_ping, "rtt") != NULL)
            {
                sscanf(line_ping, "%*s %*s %*s %s %*s", pg->rtt);
            }
        }
    }
    sprintf(line, "[ping facebook] [%s] [%d] [%d] [%s] [%s] [%s]\n", pg->hour, pg->send, pg->rec, pg->lost_packet, pg->time_tran, pg->rtt);
    fprintf(fp, "%s", line);
    free(pg);
    fclose(fp);
    pclose(FileOpen);
}
void ping_youtube()
{
    FILE *FileOpen;
    FILE *fp;
    PING *pg = (PING *)calloc(1, sizeof(PING));
    char line_ping[130];
    char line[200];
    fp = fopen("example/log/records.log", "a");
    FileOpen = popen("ping -c 10 youtube.com", "r");
    sscanf(hour_current(), "%*s %*s %*d %s %*d", pg->hour);
    while (fgets(line_ping, sizeof line_ping, FileOpen))
    {
        if (strstr(line_ping, "packets transmitted") != NULL)
        {
            sscanf(line_ping, "%d %*s %*s %d %*s %s %*s %*s %*s %s", &(pg->send), &(pg->rec), pg->lost_packet, pg->time_tran);
        }
        else
        {
            if (strstr(line_ping, "rtt") != NULL)
            {
                sscanf(line_ping, "%*s %*s %*s %s %*s", pg->rtt);
            }
        }
    }
    sprintf(line, "[ping youtube]  [%s] [%d] [%d] [%s] [%s] [%s]\n", pg->hour, pg->send, pg->rec, pg->lost_packet, pg->time_tran, pg->rtt);
    fprintf(fp, "%s", line);
    free(pg);
    fclose(fp);
    pclose(FileOpen);
}
void ping_tiktok()
{
    FILE *FileOpen;
    FILE *fp;
    PING *pg = (PING *)calloc(1, sizeof(PING));
    char line_ping[130];
    char line[200];
    fp = fopen("example/log/records.log", "a");
    FileOpen = popen("ping -c 10 tiktok.com", "r");
    sscanf(hour_current(), "%*s %*s %*d %s %*d", pg->hour);
    while (fgets(line_ping, sizeof line_ping, FileOpen))
    {
        if (strstr(line_ping, "packets transmitted") != NULL)
        {
            sscanf(line_ping, "%d %*s %*s %d %*s %s %*s %*s %*s %s", &(pg->send), &(pg->rec), pg->lost_packet, pg->time_tran);
        }
        else
        {
            if (strstr(line_ping, "rtt") != NULL)
            {
                sscanf(line_ping, "%*s %*s %*s %s %*s", pg->rtt);
            }
        }
    }
    sprintf(line, "[ping tiktok]   [%s] [%d] [%d] [%s] [%s] [%s]\n", pg->hour, pg->send, pg->rec, pg->lost_packet, pg->time_tran, pg->rtt);
    fprintf(fp, "%s", line);
    free(pg);
    fclose(fp);
    pclose(FileOpen);
}