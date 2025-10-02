#include "abs_max.h"
#include "abs_min.h"

int diff(int *lst, int n){
    int ma = abs_max(lst,n);
    int mi = abs_min(lst,n);
    return ma-mi;
}
