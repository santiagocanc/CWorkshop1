
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "utils.h"
#include "taller_lib.h"

void help(){
	printf("1) product between 2 numbers\n");
	printf("2) days to date converter\n");
	printf("3) 2 point distance\n");
	printf("4) first 10 natural numbers \n");
	printf("5) triangle pattern\n");
	printf("6) ones nxn matrix\n");
	printf("7) random nxn matrix\n");
	printf("8) random nxn matrix addition\n");
	printf("9) random nxn matrix substraction\n");
	printf("10) random nxn matrix matmul\n");


}



typedef void (*f)();

f func[12] = {&help, p1,   &p2,   &p3, &p4, &p5,
              &p6,   &p7, &p8, &p9,  &p10, };

int main(int argc, char *argv[]) {
	if (argc != 2) {
		func[0]();
		fprintf(stderr, "Please write (1) argument\n");
		return 0;
	  }
	
	srand(time(0));
	int opt = (int)atof(argv[1]);
	if(opt>10){
		func[0]();
		return 0;
	}
	func[opt]();
	return 0;
}
