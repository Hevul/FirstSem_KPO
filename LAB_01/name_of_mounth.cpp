#include "stdafx.h"

string name_of_mounth(int mounth) {
    string mounth_names[12] = { "������", "�������", "�����", "������", "���", "����", "����",
        "�������", "��������", "�������", "������", "�������" };
    return mounth_names[mounth];
}