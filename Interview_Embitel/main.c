#include "stdio.h"
#include "stdlib.h"

/* Updating a register bit */
#define REG (*(volatile uint32_t *)0x12345678)

//  setting the first bit of the register
#define SET_REG(bit_pos) REG |= (1<<bit_pos)

void set_register_bit(int bit_pos)
{
    SET_REG(3);
}

/*Setting a bit, clearing a bit, checking if a bit is set*/

//setting a bit
var |= (1<<bit_pos);

//clearing a bit
var &= ~(1<<bit_pos);

//checking if a bit is set
if(((var)&(1<<bit_pos)))
{
    //bit is set 
}

/*Big Endian or Little Endian */
void check_BigEnd_LitEnd(uint32 *var)
{
    *var = 0x00000001;
    uint8_t *ptr_var = (uint8_t *)(var);

    if(*ptr_var & 1u)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian");
    }
}

/*Counting the number of bits in a variable */
int countbits(uint32_t var)
{
    for(int i=0; i<32; i++)
    {
        tmp = (tmp>>i);
        if(tmp & 0x01)
        {
            count ++;
        }
        if(tmp == 0)
        {
            return;
        }
    }
}

/* Ternary operator */

var = (x==y) ? 5 : 4;

new_var = ((new_var &= ~(1<<bit_pos)) |= (1<<bit_pos))

/*toggle bit */
void toggle_bit(volatile uint32_t *reg, int bit_pos)
{
    *reg ^= (1u<<bit_pos);
}

/* Pass by reference */
int add(int *a, int *b)
{
    return (*a+*b);
}

/* Printing Stars 
 *
***
*/







int main()
{

    return 0;
}