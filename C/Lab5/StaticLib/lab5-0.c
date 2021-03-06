/* lab5-0.c */
/* Written by Alex Shved for Eltex Programing School, 10 oct 2019.
 * */
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>

extern double_t adding(const double_t, const double_t);
extern uint8_t adding_uint8_t(const uint8_t, const uint8_t);

int main(int argc, char ** argv)
{
	uint8_t sum1;
	sum1 = adding_uint8_t(5, 7);
	printf("%d\n", (int)sum1);
	
	double_t sum2;
	sum2 = adding(15, 14);
	printf("%Lg\n", sum2);
	
	return 0;
}
/*
void * dl_handler;
dl_handler = dlopen("path/to/lib.so", flag);
if(!dl_handler) { frintf(stderr, "lib failed: %s\n", dlerror()); exit(1); }
//получениe адреса требуемой функции из библиотеки:
dlsym(dl_handler, "multiplication");
dlclose(dl_handler);

gcc -o lab5-0 lab5-0.c -ldl
*/
