#include "Varparm.h"

void main() {
	setlocale(LC_ALL, "ru");

	int a = 0;
	double b = 0;
	
	cout << "������� ivarparm" << endl;
	a = Varparm::ivarparm(1, 4);
	cout << "���� �������� 4: " << a << endl;
	a = Varparm::ivarparm(2, 4, 5);
	cout << "��� ��������� 4 � 5: " << a << endl;
	a = Varparm::ivarparm(3, 4, 5, 2);
	cout << "��� ��������� 4, 5, 2: " << a << endl;
	a = Varparm::ivarparm(7, 4, 5, 2, 1, 3, 5, 2);
	cout << "���� ���������� 4, 5, 2, 1, 3, 5, 2: " << a << endl << endl;

	cout << "������� svarparm" << endl;
	a = Varparm::svarparm(1, 4);
	cout << "���� �������� 4: " << a << endl;
	a = Varparm::svarparm(2, 4, 5);
	cout << "��� ��������� 4 � 5: " << a << endl;
	a = Varparm::svarparm(3, 4, 5, 2);
	cout << "��� ��������� 4, 5, 2: " << a << endl;
	a = Varparm::svarparm(7, 4, 5, 2, 8, 3, 5, 7);
	cout << "���� ���������� 4, 5, 2, 8, 3, 5, 7: " << a << endl << endl;

	cout << "������� fvarparm" << endl;
	b = Varparm::fvarparm(1.23, FLT_MAX);
	cout << "���� �������� 1.23: " << b << endl;
	b = Varparm::fvarparm(2.45, 4.111, FLT_MAX);
	cout << "��� ��������� 2.45 � 4.111: " << b << endl;
	b = Varparm::fvarparm(3.37f, 4.14f, 5.252f, FLT_MAX);
	cout << "��� ��������� 3.37, 4.14, 5.252: " << b << endl;
	b = Varparm::fvarparm(4.88, 5.112, 2.1, 8.87, 3.34, 5.09, 7.112, FLT_MAX);
	cout << "���� ���������� 4.88, 5.112, 2.1, 8.87, 3.34, 5.09, 7.112: " << b << endl << endl;

	cout << "������� dvarparm" << endl;
	b = Varparm::dvarparm(1.2345, DBL_MAX);
	cout << "���� �������� 1.2345: " << b << endl;
	b = Varparm::dvarparm(2.4511, 4.1112, DBL_MAX);
	cout << "��� ��������� 2.4511 � 4.1112: " << b << endl;
	b = Varparm::dvarparm(3.3117, 4.194, 5.10252, DBL_MAX);
	cout << "��� ��������� 3.3117, 4.194, 5.10252: " << b << endl;
	b = Varparm::dvarparm(40.88, -5.112, 2.01, 8.817, 3.2234, 5.009, -7.112, DBL_MAX);
	cout << "���� ���������� 40.88, -5.112, 2.01, 8.817, 3.2234, 5.009, -7.112: " << b << endl << endl;
}