#include <stdio.h>
#include <math.h>


	int main (void) {
	
	double x1, x2, y1, y2, total;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	
	double total1 = x2 - x1;
	double total2 = y2 - y1;
	double resultado1 = total1 * total1;
	double resultado2 = total2 * total2;
	total = sqrt(resultado1 + resultado2);
	printf("%.4f\n", total);


return 0;

}
