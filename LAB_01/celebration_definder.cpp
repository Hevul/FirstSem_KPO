#include "stdafx.h"

void celebration_definder(int some_celebration, int days_in_mounth[]) {

    // Определение даты по введённому порядковому номеру
    int cl_mounth = 1;
    int cl_day = 0;
    const int REAL_CELEBRATION = some_celebration;

    if (some_celebration > 31) {
        for (int j = 0; j < 12; j++) {
            if ((some_celebration -= days_in_mounth[j]) > 0) {
                cl_mounth++;
                cl_day = some_celebration;
            }
        }
    }
    else {
        cl_day = some_celebration;
    }
    cout << "Дата введённого порядкового номера: " << cl_day << " " << name_of_mounth(cl_mounth - 1) << endl;


    switch (REAL_CELEBRATION) {
    case New_year:
        cout << "Вы ввели дату Нового Года." << endl;
        break;
    case Victory_day:
        cout << "Вы ввели дату Дня Победы." << endl;
        break;
    case Womens_day:
        cout << "Вы ввели дату Женского Дня." << endl;
        break;
    case Labor_day:
        cout << "Вы ввели дату Первомая." << endl;
        break;
    case Nativity:
        cout << "Вы ввели дату Православного Рождества." << endl;
        break;
    case Knowledge_day:
        cout << "Вы ввели дату Дня Знаний." << endl;
        break;
    case Programmers_day:
        cout << "Вы ввели дату Дня программиста." << endl;
        break;
    default:
        cout << "К сожалению, такого праздника нет в системе." << endl;
        break;
    }
}