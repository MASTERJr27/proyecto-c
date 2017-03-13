#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main(){
	
	int x,x1,x2;
	float ca,ha,co,r,hp;
	float rh,rh2;
	float co1,ca1,rh1;
	reinicio:
	

	printf("por favor ingrese lo que dese hacer \n");
	printf("(1) calcular tercer lado \n");
	printf("(2)  despejar la variable desconocida \n");
	printf("(3) Saca raiz cuadrada a ambos lados de la ecuacion \n");
	printf("(4) salir \n");
	scanf("%i",&x);
	if (x == 4){
		exit(0);
	}
	
	printf("pero primero debe asignar el valor de las variables\n");
	printf("utilice el siguiente el siguiente figura para guiarse\n");
	printf("\n");
	printf("                                                     \n");
	printf("                             /|                      \n");
	printf("                            / |                      \n");
	printf("                           /  | c                    \n");
	printf("                   a      /   | a                    \n");
	printf("                  s      /    | t                    \n");
	printf("                 u      /     | e                    \n");
	printf("                n      /      | t                    \n");
	printf("               e      /       | o    =(A)            \n");
	printf("              t      /        |   a                  \n");
	printf("             t      /         |   d                  \n");
	printf("            o      /          |   y                  \n");
	printf("           p  (c) /           |   a                  \n");
	printf("          i  //  /            |   c                  \n");
	printf("         h      /             |   e                  \n");
	printf("               /              |   n                  \n");
	printf("              /               |   t                  \n");
	printf("             /                |   e                  \n");
	printf("            /                 |                      \n");
	printf("           /                  |                      \n");
	printf("          /                   |                      \n");
	printf("         /                    |                      \n");
	printf("        /                     |                      \n");
	printf("       /                      |                      \n");
	printf("      /_______________________|                      \n");
	printf("        cateto                                       \n");
	printf("             opuesto    = (B)                        \n");
	
	switch(x){
		case 1:
			
			printf("pro favor selecciones que lado desea calcular\n");
			printf("(1)calcular hipotenusa\n");
			printf("(2)calcular cateto adyacente\n");
			printf("(3)calcular cateto opuesto\n");
			scanf("%i",&x1);
			if(x1 == 1){
				printf("\n");
				printf("ingrese el numero de cateto opuesto\n");
				scanf("%f",&co);
				printf("ingrese el numero de cateto adyacente\n");
				scanf("%f",&ca);
				printf("\n");
				
			
				 ca1 = pow(co,2);
				 co1 = pow(ca,2);
				rh =  ca1 + co1;
				rh1 = sqrt(rh);
				
				printf("\n");
				printf("el resultado es: %f\n",rh1);
				printf("pero primero debe asignar el valor de las variables\n");
	printf("utilice el siguiente el siguiente figura para guiarse\n");
	printf("\n");
	printf("                                                     \n");
	printf("                             /|                      \n");
	printf("                            / |                      \n");
	printf("                           /  | c                    \n");
	printf("                          /   | a                    \n");
	printf("                         /    | t                    \n");
	printf("            a           /     | e                    \n");
	printf("           s           /      | t                    \n");
	printf("          u           /       | o   = %f\n",ca);
	printf("         e           /        |   a                  \n");
	printf("        t           /         |   d                  \n");
	printf("       o           /          |   y                  \n");
	printf("      p  %f",rh1);printf(" /           |   a                  \n");
	printf("     i  //       /            |   c                  \n");
	printf("    h           /             |   e                  \n");
	printf("               /              |   n                  \n");
	printf("              /               |   t                  \n");
	printf("             /                |   e                  \n");
	printf("            /                 |                      \n");
	printf("           /                  |                      \n");
	printf("          /                   |                      \n");
	printf("         /                    |                      \n");
	printf("        /                     |                      \n");
	printf("       /                      |                      \n");
	printf("      /_______________________|                      \n");
	printf("        cateto                                       \n");
	printf("             opuesto  = %f\n",co);
				
				printf("\n");
				printf("Quiere volver a ejecutar el programa?\n ");
				printf("(1)si\n");
				printf("(2)no\n");
				scanf("%i",&x);
				if (x == 1){
					system("cls");
					goto reinicio;
					
				}
				if (x == 2){
					exit(0);
				}
				 
				
			}
				if(x1 == 2){
				printf("\n");
				printf("ingrese el numero de cateto opuesto\n");
				scanf("%f",&co);
				printf("ingrese el numero de la hipotenusa\n");
				scanf("%f",&hp);
				printf("\n");
				
			
				 ca1 = pow(co,2);
				 co1 = pow(hp,2);
				rh =  ca1 - co1;
				rh1 = sqrt(rh);
				
				
				
				
				printf("el resultado es: %f",rh1);
				
			}
		
			
			break;
	
	
	}
	
	
	
	
	
	
	
	
}
