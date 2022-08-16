#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



struct Date {
	int day;
	int week;
	int year;
};

struct Point{
	float x;
	float y;
};

int producto(int n1, int n2){
	return (n1*n2);
};

struct Date to_date(int days){
	struct Date d;
	int years = days/365;
	int r = days%365;
	int weeks = r/7;
	d.year = years; d.week = weeks; d.day = r%7;
	return d;
};

float point_distance(struct Point p1, struct Point p2 ){
	float d = pow(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y,2), 0.5);
	return d;
	
};

void print_mat(int m[], int n){

	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			printf("%d ", m[j+i*n]);
		}
		printf("\n");
	}
	
}

void sum_mat(int mat1[], int mat2[], int mat3[], int n){
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			mat3[j+i*n]=mat1[j+i*n]+mat2[j+i*n];

		}
	
	}

}


void sub_mat(int mat1[], int mat2[], int mat3[], int n){
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			mat3[j+i*n]=mat1[j+i*n]-mat2[j+i*n];

		}
	
	}

}

void matmul(int mat1[], int mat2[], int mat3[], int n){
	int c = 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			c=0;
			for (int k =0; k<n; k++){
				c+=mat1[k+i*n]*mat2[j+k*n];

			}
			mat3[j+i*n]=c;
		}
	
	}

}




void random_fill(int mat[], int n){
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			mat[j+i*n]=rand()%10;
	}

}
}








