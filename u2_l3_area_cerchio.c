#include <stdio.h>
#define PI 3.1415
main()
{
	int raggio;
	float area;
    double area2;
	printf("inserisci il raggio \n");
	scanf("%d",&raggio);
	printf("Il raggio e': %d\n", raggio);
	fflush(stdin);
	area = PI * raggio * raggio;
	area2 = PI * raggio * raggio;
	printf("L'area del cerchio e': %f\n", area);
	printf("L'area del cerchio e': %f", area2);
	return(0);
}


