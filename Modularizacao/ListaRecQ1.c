#include <stdio.h>


int soma(int a, int b) {
  if (b == 0) {
    return a;
  } else
    return 1 + soma(a, b - 1);
}

int sub(int a, int b) {
  if (b == 0) {
    return a;
  } else
    return -1 + sub(a, b - 1);
}

int mult(int a, int b){
	if(b == 0){
		return b;
	}
	else{
		return a + mult(a, b - 1);
	}
}

int div(int a, int b){
	
	if(b == 1){
		return a;
	}
	else if (a < b){
		return 0;
	}
	else{
		return 1 + div(a - b, b);
	}
}

int power(int a, int b){

	if (b == 0){
		return 1;
	}
	else if(b == 1){
		return a;
	}
	else{
		return a * power(a, b-1);
	}
}

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Multiplicação: %d\n", mult(a, b));
	printf("Divisão: %d\n", div(a, b));
	printf("Potencia : %d\n", power(a,b));

}
