#include "sum_between.h"
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_between(int len_a ,int a[]) {
    int index_last_funct = index_last_zero(len_a, a[]);
    int index_first_funct = index_first_zero(len_a, a[]);
    if ((index_last_funct != -1) || (index_first_funct != -1))
        return -1;
    else {
        int sum_array = 0;
        for (; index_first_funct < index_last_funct; index_first_funct++)
            sum_array += abs(a[index_first_funct]);
        return sum_array;
    }
}
