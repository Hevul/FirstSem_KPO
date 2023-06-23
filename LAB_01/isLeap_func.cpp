#include "stdafx.h"
using namespace std;

bool isLeap(int year) {
    return year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0));
}