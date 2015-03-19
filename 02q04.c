#include <stdio.h>

compara3(int a, int b, int c){
	if(a>b)
		if(b>c)
			printf("%d %d %d\n", c, b, a);
		else
			if(a>c)
				printf("%d %d %d\n", b, c, a);
			else
				printf("%d %d %d\n", b, a, c);
	else
		if(a>c)
			printf("%d %d %d\n", c, a, b);
		else
			if(b>c)
				printf("%d %d %d\n", a, c, b);
			else
				printf("%d %d %d\n", a, b, c);
}

int main(){
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	compara3(i, j, k);
	return 0;
}
