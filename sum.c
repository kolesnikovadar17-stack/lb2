#include <stdlib.h>
#include <math.h>

int sum(int *lst, int n){
    int m1 = 0;
    int mp = 0;
    int i = 0;
    for (i; i<=n; i++){
        if(abs(lst[i])>m1){
            mp = i;
            m1 = abs(lst[i]);
        }
    }
    int summ = 0;
    for(mp; mp<=n; mp++){
        summ+=lst[mp];
    }
    return summ;
}
