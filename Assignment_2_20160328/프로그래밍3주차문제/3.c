//#include <stdio.h>
//#include <conio.h>
//void main() {
//	int a = 5, b = 7, re1, re2;
//	re1 = a + 4 >= 12 || a * 3 == 10;
//	re2 = b - 5 < 3 && a * 5 <= b + 20;
//	printf("re1 = %d  re2 = %d\n", re1, re2);
//	getch();
//	return 0;
//}

#include <stdio.h>
#include <conio.h>
void main() {
	int a = 8, b = 5, re1, re2;
	re1 = a-- + a-- + ++b + ++b;
	re2 = ++a - ++b + b++;
	printf("re1 = %d  re2 = %d\n", re1, re2);
	getch();
	return 0;
}