#include <stdio.h>

float v[5] = {2, 3, 1, 8, 4};

int mdc(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return mdc(b, b % a);
	}
}

int quant(int a, int b) {
  if (a == 0) {
    return 0;
  } else {
      return quant(a / 10, b) + (a % 10 == b);
  }
}

float somaVet(float v[], int l){
	if (l == 0){
		return 0;
	}
	else{
		return v[l - 1] + somaVet(v, l - 1);
	}
}

void inverteVet(float v[], int n, int m){
	int aux;
	if(n < m){
		aux = v[n];
		v[n] = v[m];
		v[m] = aux;
		return inverteVet(v, n + 1, m - 1);
	}
}
float menorVet(float v[], int l, int i){
	if(l == 0){
		return v[i];
	}
	else{
		if(v[l - 1] < v[i]){
			return menorVet(v, l - 1, l - 1);
		}
		else{
			return menorVet(v, l - 1, i);
		}
	}
}

int main(){
	
	printf("MDC: %d\n", mdc(8, 12));
	printf("SomaVet: %g\n", somaVet(v, 5));
	inverteVet(v, 0, 4);
	for(int i = 0; i < 5; i++){
		printf("%g  ", v[i]);
	}
	printf("\n");
	printf("%g\n", menorVet(v, 5, 0));
	
return 0;
}
