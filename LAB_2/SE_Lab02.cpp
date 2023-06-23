#include <iostream>
using namespace std;


void Hello() {
	cout << "Hello, Vlad!" << endl;
}
void Bye() {
	cout << "Bye, Vlad!" << endl;
}


void main() {


	bool is_true = true;			// переменная занимает 1 байт и имеет значение 01
	bool is_false = false;			// переменная занимает 1 байт и имеет значение 00


	char eng_symb = 'u';			// имеет значение 75(HEX), кодировка ASCII
	char russ_symb = 'у';			// имеет значение f3(HEX), кодировка Windows - 1251


	wchar_t eng_wsymb = L'R';       // имеет значение 52 00, кодировка Unicode Utf - 16
	wchar_t russ_wsymb = L'Р';		// имеет значение 20 04, кодировка Unicode Utf - 16


	short X_s = 18;					// 0001 0010(BIN) = 12(HEX)  |  12 00
	short X_s_negative = -18;		// 1001 0010(пк) = 1110 1101(ок) = 1110 1110(дк) = ee(HEX)  |  ee ff
	short max_short = 0x7FFF;		// 32767 (2^15)
	short min_short = 0x8000;		// -32678 (-(2^15))


	unsigned short max_unshort = 0xffff;		// 65535  (2^16)
	unsigned short min_unshort = 0x0000;		// 0


	int Y_i = 19;					// 0001 0011(BIN) = 13(HEX)  |  13 00 00 00 
	int Y_i_negative = -19;			// 1001 0011(пк) = 1110 1100(ок) = 1110 1101(дк) = ed(HEX)  |  ed ff ff ff
	int max_int = 0x7FFFFFFF;		// 2147483647  (2^31)
	int min_int = 0x80000000;		// -2147483648 (-(2^31))


	unsigned int max_unint = 0xffffffff;		// 4294967295 (2^32)
	unsigned int min_unint = 0x00000000;		// 0 


	long Z_l = 20;					// 0001 0100(BIN) = 14(HEX)  |  14 00 00 00 
	long Z_l_negative = -20;		// 1001 0100(пк) = 1110 1011(ок) = 1110 1100(дк) = ec(HEX)  |  ec ff ff ff 
	long max_long = 0x7FFFFFFF;		// 2147483647
	long min_long = 0x80000000;		// -2147483648


	unsigned long max_unlong = 0xffffffff;		// 4294967295 (2^32)
	unsigned long min_unlong = 0x00000000;		// 0 


	float S_f = 10.0f;				/* 10(DEC) = 1010(BIN) = 1.010(+3)
									   e = 127 + 3 = 130(DEC) = 10000010
									   0 100|0001|0 010|0000|0000|0000|0000|0000
									   4	 1	  2	    0    0    0    0    0
									   41 20 00 00 | 00 00 20 41				 */

	float S_f_negative = -10.0f;	/* 10(DEC) = 1010(BIN) = 1.010(+3)
									   e = 127 + 3 = 130(DEC) = 10000010
									   1 100|0001|0 010|0000|0000|0000|0000|0000
									   c	 1	  2	    0    0    0    0    0
									   c1 20 00 00 | 00 00 20 c1				 */


	float f_inf = S_f / 0;						// inf
	float f_inf_negative = S_f_negative / 0;	// -inf
	float f_ind = sqrt(-2.f);					// -ind

	double S_d = 10.0;

	char* p_char = &eng_symb;		// 00 ef fc 43
	p_char += 3;
	wchar_t* p_wchar = &eng_wsymb;	// 00 ef fc 28
	p_wchar += 3;
	short* p_short = &X_s;			// 00 ef fc 10 
	p_short += 3;
	int* p_int = &Y_i;				// 00 ef fb c8
	p_int += 3;
	float* p_float = &S_f;			// 00 ef fb 38
	p_float += 3;
	double* p_double = &S_d;		// 00 ef fa f8
	p_double += 3;


	void (*func) ();
	func = Hello;
	func();
	func = Bye;
	func();
}