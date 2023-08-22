#include "bitmask.h"

void bitmask_set(BITMASK* mask, unsigned int index)
{
	*(mask) |= 1 << index;
}
void bitmask_clear(BITMASK* mask, unsigned int index)
{
    *(mask) &= ~(1 << index);
}
void bitmask_flip(BITMASK* mask, unsigned int index)
{
    *(mask) ^= 1 << index;
}
int bitmask_get(BITMASK* mask, unsigned int index)
{
    return *(mask) & (1 << index);
}