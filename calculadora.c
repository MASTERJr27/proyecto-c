#include <stdio.h>


int main()
{
	int n4 ;
	int s,s2,rs,s4;
	int r,r2,rr,r4;
	int m,m2,rm,m4;
	float d,d2,d4;
	float rd,rd2;
	
	
	
	printf("por favor ingrese lo que desea hacer :\n");
	printf("(1) suma\n");
	printf("(2)resta\n");
	printf("(3) multiplicacion\n");
	printf("(4) divicion\n");
	scanf("%i",&n4);
	
	
switch(n4){
	case 1:
		printf("por favor ingrese el primer numero \n");
	scanf("%i",&s);
	printf("por favor ingrese el segundo numero \n");
	scanf("%i",&s2);
	
	
	rs = s2 + s;
	
	printf("el tota; es %i\n",rs);
	break;
	
		case 2:
		printf("por favor ingrese el primer numero \n");
	scanf("%i",&r);
	printf("por favor ingrese el segundo numero \n");
	scanf("%i",&r2);
	
	
	rr = r - r2;
	
	printf("el totla es %i\n",rr);
	break;
		case 3:
		printf("por favor ingrese el primer numero \n");
	scanf("%i",&m);
	printf("por favor ingrese el segundo numero \n");
	scanf("%i",&m2);
	
	
	rm = m2 + m;
	
	printf("el totla es %i\n",rm);
	break;
	
		case 4:
		printf("por favor ingrese el primer numero \n");
	scanf("%f",&d);
	printf("por favor ingrese el segundo numero \n");
	scanf("%f",&d2);
	
	
	rd = d / d2;
	
	
	printf("el totla es %f\n",rd);
	
	break;
	

	
	
}
	
	



}
