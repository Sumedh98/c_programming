#include "stdio.h"
#include <stdint.h>

/* Write a C function that checks whether a given integer is a power of 2. 
Then extend it to count the number of set bits (1s) in a 32-bit integer — without using any loops.*/

int count_bits(uint32_t num)
{
    uint32_t count = 0;

    for(int i=0; i<32; i++)
    {
        if((num)&((uint32_t)1<<i))
        {
            count++;
        }
    }
    return count;
}

#define CHECK_SET_BIT(num,i) (((num)&(1<<i))!=0)
/* Reverse bits */
uint32_t reverse_bits(uint32_t num)
{
    for(int i=0; i<16; i++)
    {
        if(CHECK_SET_BIT(num,i)&&CHECK_SET_BIT(num,(31-i)))
        {
            //Do nothing
        }
        else if((!CHECK_SET_BIT(num,i))&&(!CHECK_SET_BIT(num,(31-i))))
        {

        }
        else
        {
            num ^= (1<<i);
            num ^= (1<<(31-i));
        }
    }
    return num;
}

/* Swalp nibbles */

uint8_t swalp_nibbles(uint8_t num)
{
    uint8_t tmp = 0;

    tmp |= ((num&0x0F)<<4);
    tmp |= ((num&0xF0)>>4);

    return tmp;
}

uint32_t set_bit(uint32_t num, int i)
{
    return((uint32_t)(num |= (1<<i)));
}

uint32_t clr_bit(uint32_t num, int i)
{
    
    return ((uint32_t)(num &= (~(1<<i))));
}

uint32_t toggle_bit(uint32_t num, int i)
{
    return((uint32_t)(num ^= (1<<i)));
    
}

uint32_t rotate_right(uint32_t num, int n)
{
    return ((num << (32-n)) | (num >> n));
}

/* check if 2 integers have opposite sign */
int two_int_signed(int a, int b)
{
    return((a>>31)^(b>>31))
}

int highest_set_bit(uint32_t num)
{
    int bit_pos = 31;
    for(int i=0; i<32; i++)
    {
        if(((num<<i) & (1<<31)) != 0)
        {
            return bit_pos;
        }
        bit_pos--;
    }
    return bit_pos;
}

bool check_bit_palindrome(uint32_t num)
{
    for(int i=0; i<16; i++)
    {
        if(CHECK_SET_BIT(num,i)&&CHECK_SET_BIT(num,(31-i)))
        {
            //Do nothing
        }
        else if((!CHECK_SET_BIT(num,i))&&(!CHECK_SET_BIT(num,(31-i))))
        {

        }
        else
        {
            return FALSE;//not palindrome
        }
    }
    return TRUE;//Palindrome
}

/* Write a C function that isolates a group of bits from a 32-bit number given a starting bit position and length.
Example:
num   = 0b 1101 1010
start = 1  (start from bit 1)
len   = 4  (extract 4 bits)

Output: 0b0101  (bits 1,2,3,4 extracted)*/

uint8_t create_mask(int len)
{
    uint8_t mask=0x00;
    for(int i=0; i<len; i++)
    {
        mask |= (1u<<i);
    }
    return mask;
}

uint8_t isolate_group_bits(uint8_t num, int len, int start_bit)
{
    uint8_t mask = create_mask(len);

    return ((uint8_t)((num >> start_bit) & mask));

}


int main()
{
    // uint32_t num =9;
    // if((count_bits(num))==1)
    // {
    //     printf("Number is power of 2\n");
    // }

    // uint32_t num = 0x00000001;
    // printf("%u", reverse_bits(num));

    // uint8_t num = 0xAB;

    // printf("%u", swalp_nibbles(num));

    uint32_t num = 0x00000003;
    printf("%u", rotate_right(num,2));

    return 0;
}