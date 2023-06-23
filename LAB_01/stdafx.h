#pragma once

#include <stdlib.h>
#include <iostream>

using namespace std;

enum celebrations { New_year = 1, Victory_day = 129, Womens_day = 67, Labor_day = 121, 
	Nativity = 7, Knowledge_day = 244, Programmers_day = 256 };

int num_day_finder(int& day, int& mounth, int days_in_mounth[]);
bool isLeap(int year);
string name_of_mounth(int mounth);
bool current_date_check(string str_date, int day, int mounth, int days_in_mounth[]);
void celebration_definder(int some_celebration, int days_in_mounth[]);