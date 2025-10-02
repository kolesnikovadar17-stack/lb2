#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

int lst[100];

int main(){
    int start;
    char c;
    scanf("%d", &start);
    scanf("%c", &c);
    int n=0;
    for (n=0; 1; n++){
        scanf("%d", &lst[n]);
        scanf("%c", &c);
        if(c=='\n'){
            break;
        }
    }
    n++;
    switch (start){
        case 0:
            printf("%d", abs_max(lst,n));
            break;
        case 1:
            printf("%d", abs_min(lst,n));
            break;
        case 2:
            printf("%d", diff(lst,n));
            break;
        case 3:
            printf("%d", sum(lst,n));
            break;
        default:
            printf("Данные некорректны");
            break;
    }
    return 0;
}
