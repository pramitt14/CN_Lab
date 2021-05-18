#include <stdio.h>

void main(){
    unsigned int test = 1;
    char *c = (char *)&test;
    if (*c == 1){
        printf("The system uses Little Endian");
    }
    else{
        printf("The system uses Big Endian");
    }

    unsigned int x = 0xA1B2C3D4;
    unsigned int bytes[4];

    bytes[0] = (x & 0x000000FF) << 24;
    bytes[1] = (x & 0x0000FF00) << 8;
    bytes[2] = (x & 0x00FF0000) >> 8;
    bytes[3] = (x & 0xFF000000) >> 24;

    unsigned int r = bytes[0] | bytes[1] | bytes[2] | bytes[3];

    printf("\n\nNumber in Little Endian: %x", x);
    printf("\nNumber in Big Endian: %x", r);
}