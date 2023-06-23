#include "stdafx.h"
using namespace std;

int main() {

    setlocale(LC_ALL, "ru");

    // Переменные, описывающие вводимую дату и хар-ки года
    string str_date;
    int date;
    int day = 1;
    int mounth = 1;
    int year;
    int days_in_mounth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days_in_year = 365;


    // Ввод даты
    cout << "Введите дату в формате ДДММГГГГ: " << endl;
    cin >> str_date;


    // Получение дня, месяца и года из даты
    date = atoi(str_date.c_str());
    year = date % 10000;
    date /= 10000;
    mounth = date % 100;
    date /= 100;
    day = date;


    // Проверка даты на соответсвие стандарту и високосность
    bool year_isLeap = isLeap(year);
    if (year_isLeap) {
        days_in_mounth[1] = 29;
        days_in_year = 366;
    }

    bool date_isTrue = current_date_check(str_date, day, mounth, days_in_mounth);
    if (!date_isTrue) {
        cout << "Дата введена некорректно." << endl;
        exit(1);
    }
    if (year_isLeap) {
        cout << "Год является високосным." << endl;
    }
    else {
        cout << "Год не является високосным." << endl;
    }


    // Определение и вывод порядкового номера введённой даты
    int num_of_day = num_day_finder(day, mounth, days_in_mounth);
    cout << "Порядковый номер даты, которую Вы ввели: " << num_of_day << endl;


    // Ввод даты дня рождения
    string str_birthday_date;
    cout << "Введите дату Вашего дня рождения в формате ДДММГГГГ: " << endl;
    cin >> str_birthday_date;


    // Получение дня и месяца из даты рождения
    int birthday_date = atoi(str_birthday_date.c_str());
    int bd_year = birthday_date % 10000;
    int bd_mounth = birthday_date / 10000 % 100;
    int bd_day = birthday_date / 1000000 % 100;


    // Проверка даты дня рождения на корректность
    year_isLeap = isLeap(bd_year);
    if (!year_isLeap) {
        days_in_mounth[1] = 28;
    }

    date_isTrue = current_date_check(str_birthday_date, bd_day, bd_mounth, days_in_mounth);
    if (!date_isTrue) {
        cout << "Дата введена некорректно." << endl;
        exit(1);
    }


    // Кол-во дней в феврале для текущего года
    year_isLeap = isLeap(year);
    if (year_isLeap) {
        days_in_mounth[1] = 29;
    }

    // Определение порядкового номера дня рождения в году
    int num_of_birthday = num_day_finder(bd_day, bd_mounth, days_in_mounth);


    // Определение дней до дня рождения
    int waiting_for_bd;
    int correct = 0;
    year_isLeap = isLeap(year + 1); // Следующий год
    if (year_isLeap && mounth > 1) {
        correct = 1;
    }
    if (num_of_day <= num_of_birthday) {
        waiting_for_bd = num_of_birthday - num_of_day + correct;
    }
    else {
        waiting_for_bd = days_in_year - (num_of_day - num_of_birthday) + correct;
    }
    cout << "Дней до Вашего дня рождения: " << waiting_for_bd;


    // Возвращение к изначальному значению перемнных времени
    days_in_year = 365;
    days_in_mounth[1] = 28;


    // Определение праздника по ведённому порядковому номеру
    string str_some_celebration;
    int some_celebration;

    cout << endl << "Введите порядковый номер дня этого года одного из праздников: " << endl;
    cin >> str_some_celebration;
    int some_celebration_len = str_some_celebration.length();
    for (int i = 0; i < some_celebration_len; i++) {
        if (str_some_celebration[i] < '0' || str_some_celebration[i] > '9') {
            cout << "Скорее всего, Вы ввели символ/символы вместо цифр. Попробуйте ещё раз." << endl;
            exit(1);
        }
    }
    some_celebration = atoi(str_some_celebration.c_str());

    if (some_celebration > 365 || some_celebration < 1) {
        cout << "Вы ввели неверный порядковый номер." << endl;
        exit(1);
    }
    celebration_definder(some_celebration, days_in_mounth);
}