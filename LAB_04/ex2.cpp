#include <iostream>
using namespace std;

typedef unsigned int account_number;
typedef string owner;
typedef string operation_type;
typedef int sum;
typedef string date;

struct account_transaction_history {
	account_number acc_num;
	owner own;
	operation_type op_type;
	sum s;
	date d;
};

bool operator>(account_transaction_history a1, account_transaction_history a2) {
	return a1.s > a2.s;
}
bool operator<(account_transaction_history a1, account_transaction_history a2) {
	return a1.s < a2.s;
}
bool operator==(account_transaction_history a1, account_transaction_history a2) {
	return a1.s == a2.s;
}
account_transaction_history operator+(account_transaction_history a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s += a2.s;
		return a1;
	}
	else {
		cout << "�������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator-(account_transaction_history a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s -= a2.s;
		return a1;
	}
	else {
		cout << "��������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator*(account_transaction_history a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s *= a2.s;
		return a1;
	}
	else {
		cout << "��������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator/(account_transaction_history a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s /= a2.s;
		return a1;
	}
	else {
		cout << "������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator+=(account_transaction_history &a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s += a2.s;
		return a1;
	}
	else {
		cout << "�������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator-=(account_transaction_history &a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s -= a2.s;
		return a1;
	}
	else {
		cout << "��������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator*=(account_transaction_history &a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s *= a2.s;
		return a1;
	}
	else {
		cout << "��������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}
account_transaction_history operator/=(account_transaction_history &a1, account_transaction_history a2) {
	if (a1.own == a2.own) {
		a1.s /= a2.s;
		return a1;
	}
	else {
		cout << "������� ����� ����� ��������� ������ ��� ������ ���������." << endl;
		exit(1);
	}
}

account_transaction_history acc[3][3];

void main() {
	setlocale(LC_ALL, "ru");

	acc[0][0] = { 487142, "����� ������", "������", 210, "17.03.2023" };
	acc[0][1] = { 487142, "����� ������", "�������", 185, "05.03.2023" };
	acc[0][2] = { 487142, "����� ������", "���������", 220, "26.02.2023" };

	acc[1][0] = { 806521, "���� ��������", "�������", 1025, "19.02.2021" };
	acc[1][1] = { 806521, "���� ��������", "�������", 980, "22.01.2021" };
	acc[1][2] = { 806521, "���� ��������", "������", 705, "26.12.2020" };

	acc[2][0] = { 544908, "Ը����� �����", "���������", 652, "9.08.2019" };
	acc[2][1] = { 544908, "Ը����� �����", "�������", 630, "6.08.2019" };
	acc[2][2] = { 544908, "Ը����� �����", "���������", 220, "5.08.2019" };

	cout << acc[0][0].s << " > " << acc[0][2].s << "  -  ";
	if (acc[0][0] > acc[0][2]) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	cout << acc[1][0].s << " < " << acc[1][2].s << "  -  ";
	if (acc[1][0] < acc[1][2]) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	cout << acc[0][2].s << " == " << acc[2][2].s << "  -  ";
	if (acc[0][2] == acc[2][2]) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	cout << endl << acc[0][0].s << " + " << acc[1][1].s << " = ";
	acc[0][0] += acc[1][1];
	cout << acc[0][0].s << endl;

	cout << acc[0][2].s << " - " << acc[0][1].s << " = ";
	acc[0][2] -= acc[0][1];
	cout << acc[0][2].s << endl;

	cout << acc[2][2].s << " * " << acc[0][1].s << " = ";
	acc[2][2] *= acc[0][1];
	cout << acc[2][2].s << endl;

	cout << acc[1][0].s << " / " << acc[0][1].s << " = ";
	acc[1][0] /= acc[0][1];
	cout << acc[1][0].s << endl;
}