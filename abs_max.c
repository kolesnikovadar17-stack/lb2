#include <stdlib.h>
#include <math.h>

int abs_max(int *lst, int n){
    int max = -1e9;
    int maxs = 0;
    int i=0;
    for (i;i<n;i++){
        if(abs(lst[i])>max){
            max = abs(lst[i]);
            maxs = lst[i];
        }
    }
    return maxs;
}

