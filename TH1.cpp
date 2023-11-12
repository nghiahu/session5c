#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c;
	double delta, x1, x2;
	printf("Nhap vao a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = b*b - 4*a*c;
	if(a == 0){
		printf("Phuong trinh loi");
	}
	else if(delta<0){
		printf("Phuong trinh vo nghiem");
    }
    else if(delta==0){
		x1=x2=-b/(2*a);
		printf("Phuong trinh co nghiem kep la: %lf ",x1);
    }
    else{
    	x1=(-b+sqrt(delta))/(2*a);
    	x2=(-b-sqrt(delta))/(2*a);
    	printf("Phuong trinh co nghiem la: %lf va %lf",x1, x2);
	}
}
