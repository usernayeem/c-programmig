#include "sum.h"
#define PI 3.14
#define add(x,y) x + y
#define WIN 0

int main(){
	float a;
	#if WIN
		a = 10 + 20 + PI + add(3, 4);
		a = a + 10;

	#else 
		a = 20 + 30;
	#endif
	return 0;
}