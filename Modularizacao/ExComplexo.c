#include <stdio.h>
#include <math.h>

typedef struct{
	float real;
	float imag;
}Complexo;

int scanComp(Complexo *c){
	return scanf("(%f %fi)", &c->real, &c->imag);
}

void printfComp(Complexo c){
	printf("(%.2f %+.2fi)", c.real, c.imag);
}

Complexo somaComp(Complexo a, Complexo b){
	Complexo r;
	r.real = a.real + b.real;
	r.imag = a.imag + b.imag;
	return r;
}

Complexo subComp(Complexo a, Complexo b){
	Complexo r;
	r.real = (a.real - b.real);
	r.imag = (a.imag - b.imag);
	return r;
}

Complexo multComp(Complexo a, Complexo b){
	Complexo r;
	r.real = (a.real * b.real) - (a.imag * b.imag);
	r.imag = (a.real * b.imag) + (a.imag * b.real);
	return r;
}

Complexo divComp(Complexo a, Complexo b){
	Complexo r;
	r.real = ((a.real * b.real) + (a.imag * b.imag)) / ((b.real * b.real) + (b.imag * b.imag));
	r.imag = ((b.real * a.imag) - (b.imag * a.real)) / ((b.real * b.real) + (b.imag * b.imag));
	return r;
}

int main(){
	Complexo a, b;
	char op;
	
	while(scanComp(&a) != EOF){
		getchar();
		scanf("%c", &op);
		getchar();
		scanComp(&b);
		getchar();
		printf("\n");
		
		switch(op){
			case '+':
				printfComp(somaComp(a, b));
			break;
			
			case '-':
				printfComp(subComp(a, b));
			break;
			
			case '*':
				printfComp(multComp(a, b));
			break;
			
			case '/':
				printfComp(divComp(a, b));
			break;
		}
		printf("\n");
	}
	
	return 0;
}
