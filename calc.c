#include <stdio.h>
#include <math.h>
float soma(float x, char A, float y);
float divisao(float x, char A, float y);
float expoente(float x, char A, float y);
float subtracao(float x, char A, float y);
float produto(float x, char A, float y);


int main () {
	float a, b;
	char B;
	scanf("%f%c%f",&a,&B,&b);
	if(B!='+' && B!='-' && B!='/' && B!='^' && B!='*'){
		
		printf("O operador inserido não é válido\n");
		system("pause");
		return 0;
	}
	if(B=='+')
		printf("%.3f\n",soma(a,B,b));
	else 
		if(B=='-')
			printf("%.3f\n",subtracao(a,B,b));
		else 
			if(B=='^')
				printf("%.3f\n",expoente(a,B,b));
			else 
				if(B=='/')
					printf("%.3f\n",divisao(a,B,b));
				else 
					if(B=='*')
						printf("%.3f\n",produto(a,B,b));
	return 0;
}


float soma(float x, char A, float y) {
	float z=x+y;
	return z;
}



float subtracao(float x, char A, float y) {
	float z=x-y;
	return z;
}


float expoente(float x, char A, float y) {
	float z=pow(x,y);
	return z;	
		
}


float divisao(float x, char A, float y) {
	float z=x/y;
	return z;
}


float produto(float x, char A, float y) {
	float z=x*y;
	return z;
}	

	
