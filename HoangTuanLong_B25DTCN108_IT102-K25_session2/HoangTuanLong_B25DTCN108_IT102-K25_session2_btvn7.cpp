#include <stdio.h>

int main () {

	int number  = 12345;
	int n, tong = 0;
	
	n = number;
	
	
	while (n>0){
		tong= tong + (n%10);
		n=n/10;
	}

	printf("Tong cua cac chu so la %d",tong);
	
	return 0;
}
