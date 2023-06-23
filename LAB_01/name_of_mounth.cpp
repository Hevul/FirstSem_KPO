#include "stdafx.h"

string name_of_mounth(int mounth) {
    string mounth_names[12] = { "€нвар€", "феврал€", "марта", "апрел€", "ма€", "июн€", "июл€",
        "августа", "сент€бр€", "окт€бр€", "но€бр€", "декабр€" };
    return mounth_names[mounth];
}