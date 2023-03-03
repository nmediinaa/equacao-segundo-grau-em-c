#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a, b, c, delta, x1,x2;
	
	printf("Digite o valor a: \n");
	scanf("%d",&a);
	
	printf("Digite o valor b: \n");
	scanf("%d",&b);
	
	printf("Digite o valor c: \n");
	scanf("%d",&c);
	
	delta = b*b-4*a*c;
	
	
	x1 = (-b+sqrt(delta))/2*a;
	
	
	x2 = (-b-sqrt(delta))/2*a;
	
	if(delta < 0){
		
		printf("Equação não possui raizes reais");
		return 1;
	}
	
	printf("Valor de x1: %d\n",x1);
	
	printf("Valor de x2: %d\n",x2);
	
	printf("Valor de Delta: %d\n",delta);
	
	return 0;
}
