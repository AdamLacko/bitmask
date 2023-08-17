typedef int BITMASK;

void bitmask_set(BITMASK* mask, unsigned int index);
void bitmask_clear(BITMASK* mask, unsigned int index);
void bitmask_flip(BITMASK* mask, unsigned int index);
int bitmask_get(BITMASK* mask, unsigned int index);