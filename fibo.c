#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"
int main(int argc, char** argv) {
int fibo (int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 1;
	}
	else
		return fibo (n-1) + fibo (n+1);
}
}
