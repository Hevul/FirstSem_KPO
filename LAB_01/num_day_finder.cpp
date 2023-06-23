#include "stdafx.h"
using namespace std;

int num_day_finder(int& day, int& mounth, int days_in_mounth[]) {
    int num_of_day = 0;
    for (int i = 1; i <= mounth; i++) {
        if (i == mounth) {
            num_of_day += day;
            break;
        }
        num_of_day += days_in_mounth[i - 1];
    }
    return num_of_day;
}