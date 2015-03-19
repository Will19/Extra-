#include <stdio.h>

float media(float a, float b, float c){
	return (((a*2)+(b*3)+(c*5))/10);
}

void classe(float f){
	if(f<5)
		printf("E\n");
	else
		if(f<6)
			printf("D\n");
		else
			if(f<7)
				printf("C\n");
			else
				if(f<8)
					printf("B\n");
				else
					printf("A\n");
}
int main(){
	float n1, n2, n3, m;
	scanf("%f %f %f", &n1, &n2, &n3);
	m=media(n1, n2, n3);
	printf("%f\n", m);
	classe(m);	
	return 0;
}
