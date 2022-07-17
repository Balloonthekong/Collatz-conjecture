#include <cstdio>
#include <windows.h>

using namespace std;

int main()
{
	unsigned long long num = 0;
	printf("Enter a Number: ");
	scanf_s("%lld", &num);

	printf("\n\n");
	for (;;) {
		if (num % 2 == 0)
		{
			num /= 2;
			printf("%lld\n", num);
		}
		else if (num % 2 == 1)
		{
			num = num * 3 + 1;
			printf("%lld\n", num);
		}
		Sleep(10);
	}
}