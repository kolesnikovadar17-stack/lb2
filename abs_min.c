#include <stdlib.h>
#include <math.h>

int abs_min(int *lst, int n){
    int min = 1e9;
    int mins = 0;
    int i=0;
    for (i;i<n;i++){
        if(abs(lst[i])<min){
            min = abs(lst[i]);
            mins = lst[i];
        }
    }
    return mins;
}
