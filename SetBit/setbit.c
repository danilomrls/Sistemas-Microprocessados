#include <stdio.h>
#include <stdlib.h>

unsigned char SetBit(unsigned char x, int bit);

void main(void) {
    
    unsigned char x, y;
    
    x = 0xAB; //1010_1011

    y = SetBit(x,6);
    y = SetBit(y,4);

    printf("a entrada eh: %x \n", x);
    printf("o resultado eh: %x \n", y);
}

//bit vai de zero a 7

unsigned char SetBit(unsigned char x, int bit) {

    unsigned char mask;
    mask = (0x01<<bit);
    
    x = x | mask;

    return x;
}