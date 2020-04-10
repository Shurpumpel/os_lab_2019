#include "revert_string.h"

void RevertString(char *str)
{
	// your code here
    int N=strlen(str);
    char* a=malloc(sizeof(char)*N+1);
    int i;
    for (i=0;i<4;i++){
        a[i]=str[4-i-1];
    }
    for(i=0;i<4;i++){
        str[i]=a[i];
    }

    int k=0;
    for(i=N-5;i<N;i++){
        a[k]=str[N-k-1];
        k++;
    }
    k=0;
    for(i=N-5;i<N;i++){
        str[i]=a[k];
        k++;
    }
}

