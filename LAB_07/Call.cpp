#include "Call.h"

namespace Call{
	int _cdecl Func_decl(int a, int b, int c) {
		return a + b + c;
	}
	int _stdcall Func_stdcall(int& a, int b, int c) {
		return a + b + c;
	}
	int _fastcall Func_fastcall(int a, int b, int c, int d) {
		return a + b + c + d;
	}
}