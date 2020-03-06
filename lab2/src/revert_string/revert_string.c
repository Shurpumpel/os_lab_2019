#include "revert_string.h"

void RevertString(char *str)
{
	// your code here
    int N=strlen(str);
    char* a=malloc(sizeof(char)*N+1);
    int i;
    for (i=0;i<N;i++){
        a[i]=str[N-i-1];
    }
    for(i=0;i<N;i++){
        str[i]=a[i];
    }

}

