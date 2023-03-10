#pragma warning(disable:4996)
#include<stdio.h>

void main() {
	
	int N = 0, temp = 0, answer = 0; 

	for (int N = 11; N < 100; N++) {

		temp = (N % 10) * 10 + N / 10; // 자릿수 변환
		answer = N + temp;

		if (answer == 99) {				
			if (temp == 9) // 90 + 09 방지 코드 
				break;
			printf("%d + %d = %d \n", N, temp, answer);
			continue;
		}
	}
	
}