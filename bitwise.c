#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

void calculate_the_maximum(int n, int k) {
	//Write your code here.
	// n: size of the set
	// k: greatest number that is less than k
	int AND_MAX = 0, OR_MAX = 0, XOR_MAX = 0, a = 1, b = 2;
	while (a <= n)
	{
		while (b <= n)
		{
			if ((a & b) > AND_MAX && (a & b) < k)
				AND_MAX = a & b;
			if ((a | b) > OR_MAX && (a | b) < k)
				OR_MAX = a | b;
			if ((a ^ b) > XOR_MAX && (a ^ b) < k)
				XOR_MAX = a ^ b;
			++b;
		}
		++a;
		b = a + 1;
	}
	printf("%d\n%d\n%d\n", AND_MAX, OR_MAX, XOR_MAX);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);
	return 0;
}
