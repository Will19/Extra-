#include <stdio.h>

float ajsal(float f){
  f*=0.90;
  f+=50;
  return f;
}

int main(){
	float s;
	scanf("%f", &s);
	printf("%f\n", ajsal(s));
	return 0;
}
