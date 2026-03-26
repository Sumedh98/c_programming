// Write a C function to set the 5th bit and clear the 12th bit of a 32-bit hardware register at a specific memory address (e.g., 0x40008000), without modifying any other bits.
#include "stdio.h"
#include <stdint.h>
#include <inttypes.h>

void main()
{
    long reg=0xFFFF;
    long * ptr_reg = &reg;

    *ptr_reg = *ptr_reg | (1<<5);

    *ptr_reg = *ptr_reg & (~(1<<12));

    printf("%ld", *ptr_reg);
}

