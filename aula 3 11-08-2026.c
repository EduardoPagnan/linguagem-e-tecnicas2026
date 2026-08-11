#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define pi 3.141592


int main(int argc, char *argv[]) {
	
	float r, area, r2;
	
	printf ("insira o valor do raio \n");
	scanf ( "%f", &r );


	r2 = pow(r,2);
	r2 = r*r;
	
	area = pi*r2;

	area = pi *(r*r);
	area = M_PI * pow (r,2);
	
	printf(" A area do circulo de raio R %f = %f \n" , r, area);
	
	
	
	float B, b, h, at;
	printf ("insira o valor da base menor \n");
	scanf ("%f" , &b);
	
	printf ( "insira o valor da altura \n");
	scanf ("%f" , &h);
	
	printf ( "insira o valor da base B \n");
	scanf ("%f", &B ); 
	
	at= (B+b)*h/2;
		
	printf(" A area do trapezio %fbase maior, %f base maior, %f altura =  area total%f" , B,b,h, at );	
		
	return 0;
}
