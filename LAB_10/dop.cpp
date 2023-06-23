#include <iostream>
#include <stdarg.h>
#include <string>
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");

	auto is_plus{ [](auto a) -> bool {return a > 0; } };

	cout << "Функция того, является ли число положительным: " << endl;
	cout << is_plus(1.1) << endl;
	cout << is_plus(-1.1) << endl;
	cout << is_plus('а') << endl << endl;

	auto str_concat{ [](int n, string str, ...) {
		va_list str_ptr;
		va_start(str_ptr, str);
		for (int i = 1; i < n; i++) {
			str += va_arg(str_ptr, string);
		}
		va_end(str_ptr);
		return str;
	} };
	string s1 = "aaa", s2 = "bbbb", s3 = "ccdd", s4 = "1234", s5 = "4321";
	cout << "Конкатенация строк:" << endl;
	cout << str_concat(3, s1, s2, s3) << endl;
	cout << str_concat(5, s1, s4, s3, s2, s5) << endl << endl;
}