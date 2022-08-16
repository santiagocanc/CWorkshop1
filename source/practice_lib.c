#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "utils.h"


void p1(){
	int n1,n2;
	printf("Please input the first number\n");
	scanf("%d", &n1);
	printf("Please input the second number\n");
	scanf("%d", &n2);
	printf("The product between %d and %d is %d\n", n1, n2, n1*n2);



}
void p3(){
	float n1,n2, n3, n4;
	printf("Please type point 1 x-cords\n");
	scanf("%f", &n1);
	printf("Please type point 1 y-cords\n");
	scanf("%f", &n2);
	printf("Please type point 2 x-cords\n");
	scanf("%f", &n3);
	printf("Please type point 2 y-cords\n");
	scanf("%f", &n4);
	
	struct Point p1;
	struct Point p2;
	
	p1.x = n1;
	p1.y = n2;
	p2.x = n3;
	p2.y = n4;
	
	printf("Distance between points is %f\n", point_distance(p1,p2));

}

void p2(){

	int n;
	printf("Type the amount of days to convert\n");
	scanf("%d", &n);
	struct Date d;
	d = to_date(n);
	printf("Equal-> %i years(s), %i weeks(s) y %i days(s)\n", d.year, d.week, d.day);
	


}




void p4(){

	printf("First 10 natural numbers:\n");
	for(int i=1; i<=10; i++){
		printf("%i ",i);
	}
	printf("\n");
}

void p5(){

	int n;
	printf("Type the size of the base\n");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	
	}
}




void p6(){
	
	int n=0;
	printf("Input the size of the NxN matrix\n");
	scanf("%d", &n);
	
	

	while(n<1 || n>=8){
	
		printf("Size must be higher than 0 and lower than 8\n");
		scanf("%d", &n);
	
	
	}
	
	int mat[n*n];
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			mat[j+i*n]=1;
		}
	
	}
	print_mat(mat,n);


}

void p7(){


	int n=0;
	printf("Input the size of the NxN matrix\n");
	scanf("%d", &n);
	
	

	while(n<1 || n>=8){
	
		printf("Size must be higher than 0 and lower than 8\n");
		scanf("%d", &n);
	
	
	}
	
	int mat[n*n];
	srand(time(0));
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			mat[j+i*n]=rand()%10;
		}
	
	}
	print_mat(mat,n);


}

void p8(){

	
	int n=0;
	printf("Input the size of the NxN matrix\n");
	scanf("%d", &n);
	
	

	while(n<1 || n>=8){
	
		printf("Size must be higher than 0 and lower than 8\n");
		scanf("%d", &n);
	
	
	}
	
	int mat1[n*n];
	int mat2[n*n];
	int mat3[n*n];
	
	random_fill(mat1,n);
	random_fill(mat2,n);
	
	printf("Matrix 1\n");
	print_mat(mat1,n);
	printf("Matrix 2\n");
	print_mat(mat2,n);
	printf("Addition\n");
	sum_mat(mat1,mat2,mat3,n);
	print_mat(mat3,n);


}

void p9(){


	int n=0;
	printf("Input the size of the NxN matrix\n");
	scanf("%d", &n);
	
	

	while(n<1 || n>=8){
	
		printf("Size must be higher than 0 and lower than 8\n");
		scanf("%d", &n);
	
	
	}
	
	int mat1[n*n];
	int mat2[n*n];
	int mat3[n*n];
	
	random_fill(mat1,n);
	random_fill(mat2,n);
	
	printf("Matrix 1\n");
	print_mat(mat1,n);
	printf("Matrix 2\n");
	print_mat(mat2,n);
	printf("Substraction ->\n");
	sub_mat(mat1,mat2,mat3,n);
	print_mat(mat3,n);
	

	
}

void p10(){
	
	int n=0;
	printf("Input the size of the NxN matrix\n");
	scanf("%d", &n);
	
	

	while(n<1 || n>=8){
	
		printf("Size must be higher than 0 and lower than 8\n");
		scanf("%d", &n);
	
	
	}
	
	int mat1[n*n];
	int mat2[n*n];
	int mat3[n*n];
	
	random_fill(mat1,n);
	random_fill(mat2,n);
	
	printf("Matrix 1\n");
	print_mat(mat1,n);
	printf("Matrix 2\n");
	print_mat(mat2,n);
	printf("matmul ->\n");
	matmul(mat1,mat2,mat3,n);
	print_mat(mat3,n);
	
}








