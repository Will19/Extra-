#include <stdio.h>

compara2(int a, int b){
	if(a>b || a==b)
		printf("%d", a);
	else
		printf("%d", b);
}

int main(){
	int i, j;
	scanf("%d %d", &i, &j);
	compara2(i, j);
	return 0;
}
