#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void reverse(char *x, int begin, int end)
{
   char c;

   if (begin >= end)
      return;
   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;
   reverse(x, ++begin, --end);
}

int palin(char *s, int begin, int end){
  if(begin >= end)
	return 1;
  if(s[begin] != s[end])
    return 0;
  else{
    return 1 && palin(s, begin + 1, end - 1);
  }
}

int bin2dec(char bin[], int d){
  int len = strlen(bin);
  int bits = (bin[len - d]);
  if(d == 0)
    return 0;
  else
    return (pow(2, d - 1) * (bits - 48)) + bin2dec(bin, d - 1);
}

void dec2bin(int a){
  if(a == 0){
    return;
  }
  dec2bin(a / 2);
  printf("%d", (a % 2));
}

int main(void){
	char s[] = "abcdefg";
	reverse(s, 0, 5);
	printf("%s\n", s);
	printf("%d\n", palin("satas", 0, 4));
	printf("%d\n", bin2dec("1001", 4));
	dec2bin(9);
	return 0;
}
