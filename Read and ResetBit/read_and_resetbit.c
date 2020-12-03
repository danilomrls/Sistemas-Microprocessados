#include <stdio.h>

unsigned char ReadBit (unsigned char x, int bit);
unsigned char ResetBit (unsigned char x, int bit);

void main(void){

    unsigned char x, y, z;

    x = 0xab; //1010_1011
    y = ReadBit(x,0);
    z = ResetBit(x,0);

    printf("Read result: %x \n", y);
    printf("Reset result: %x ", z);
}
unsigned char ReadBit(unsigned char x, int bit){

    unsigned char mask;
    mask = (0x01<<bit);
    x = x & mask;

    return x;
}

unsigned char ResetBit(unsigned char x, int bit){

    unsigned char mask;
    mask = ~(0x01<<bit);
    x = x & mask;
    
    return x;
}