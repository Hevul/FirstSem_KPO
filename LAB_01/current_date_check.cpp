#include "stdafx.h"

bool current_date_check(string str_date, int day, int mounth, int days_in_mounth[]) {
    int date_len = str_date.length();
    for (int j = 0; j < date_len; j++) {
        if (str_date[j] < '0' || str_date[j] > '9') {
            cout << "������ �����, �� ����� ������/������� ������ ����. ���������� ��� ���." << endl;
            exit(1);
        }
    }
    return (day <= days_in_mounth[mounth - 1] && day >= 1) && (mounth <= 12 && mounth >= 1);
}