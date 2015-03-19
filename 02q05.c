#include <stdio.h>

void insercao(int i, int j, int k, int l){
	if(l<i)
		printf("%d %d %d %d", l, i, j, k);
	else
		if(l<j)
			printf("%d %d %d %d", i, l, j, k);
		else
			if(l<k)
				printf("%d %d %d %d", i, j, l, k);
			else
				printf("%d %d %d %d", i, j, k, l);
}

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	insercao(a, b, c, d);
	return 0;
}
