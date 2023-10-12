#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int factorial(n) {
	int result = 1; int i;
	for (i=1;i<=n;i++){
		result *= i;
	}
	return result;
}

int combination(int n, int r){
	int div1;
	 int div2;
	div1 = factorial(n);
	div2 = factorial(n-r) * factorial(r);
		// 최종값 출력 
	// 분모 분자 나누기 연산 
	return div1 / div2;
}



int main(int argc, char *argv[]) {
	int n;
    int r;
    
    
	printf("n :");scanf("%d",&n);
	printf("r :");scanf("%d",&r);
	
	
	
	int result = combination(n,r);

	
	printf("result is %i\n",result); 

	system("PAUSE");
	return 0;
}
