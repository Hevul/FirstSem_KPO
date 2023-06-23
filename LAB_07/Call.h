#include <iostream>
namespace Call {
	int _cdecl Func_decl(int, int, int);
	int _stdcall Func_stdcall(int&, int, int);
	int _fastcall Func_fastcall(int, int, int, int);
}