#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b){
	int result = a + b;
	return result;
}

int square(int n) {
	return n*n;
}

int get_max(int x, int y){
	if (x >= y) return x;
	else return y;
}



int main(int argc, char *argv[]) {
	int a;int b;
	int n;
	
	a=3;
	b=7;
	printf("sumTwo result is %d\n",sumTwo(a,b));
	
	n = 4;
	printf("square result is %d\n",square(n));
	
	printf("get max result : %d\n",get_max(a,b));


	system("PAUSE");
	return 0;
}
