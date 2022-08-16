#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED


struct Date {
	int day;
	int week;
	int year;
};

struct Point{
	float x;
	float y;
};



int producto(int n1, int n2);
struct Date to_date(int days);

float point_distance(struct Point p1, struct Point p2 );

void print_mat(int m[], int n);

void sum_mat(int mat1[], int mat2[], int mat3[], int n);

void sub_mat(int mat1[], int mat2[], int mat3[], int n);
void matmul(int mat1[], int mat2[], int mat3[], int n);




void random_fill(int mat[], int n);


#endif
