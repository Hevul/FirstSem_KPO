#include "Call.h"

void main() {
	int a = 1;
	int b = 3;
	int c = 6;
	int d = 7;
	int f;
	f = Call::Func_decl(a, b, c);
	std::cout << f << std::endl;
	f = Call::Func_stdcall(d, b, c);
	std::cout << f << std::endl;
	f = Call::Func_fastcall(1, 3, 6, 7);
	std::cout << f << std::endl;
}