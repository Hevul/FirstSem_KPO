#include "stdafx.h"

void celebration_definder(int some_celebration, int days_in_mounth[]) {

    // ����������� ���� �� ��������� ����������� ������
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
    cout << "���� ��������� ����������� ������: " << cl_day << " " << name_of_mounth(cl_mounth - 1) << endl;


    switch (REAL_CELEBRATION) {
    case New_year:
        cout << "�� ����� ���� ������ ����." << endl;
        break;
    case Victory_day:
        cout << "�� ����� ���� ��� ������." << endl;
        break;
    case Womens_day:
        cout << "�� ����� ���� �������� ���." << endl;
        break;
    case Labor_day:
        cout << "�� ����� ���� ��������." << endl;
        break;
    case Nativity:
        cout << "�� ����� ���� ������������� ���������." << endl;
        break;
    case Knowledge_day:
        cout << "�� ����� ���� ��� ������." << endl;
        break;
    case Programmers_day:
        cout << "�� ����� ���� ��� ������������." << endl;
        break;
    default:
        cout << "� ���������, ������ ��������� ��� � �������." << endl;
        break;
    }
}