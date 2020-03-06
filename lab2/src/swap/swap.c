#include "swap.h"

void Swap(char *left, char *right)
{
	// ваш код здесь
    char a = *left;
    *left=*right;
    *right=a;
}
