
/*QUESTION 4
SET 1
ALGORITHM COMPLEXITY - THETA(N root N)

 PROBLEM: GIVEN INTEGER N ,CHECK WHETHER EACH OF THE NUMBERS FROM N-N/2 TO N+N/2 ARE PRIME
*/
#include <stdio.h>
#include<math.h>
int main()
{
	int n, i, flag = 1;
	printf("Enter positive number greater than 20: \n");
	scanf("%d", &n);
	for(int a=n-n/2;a<=n+n/2;a++)
    {
	for (i = 2; i <= sqrt(a); i++)
        {
		if (a % i == 0) {
			flag = 0;
			break;
		}

	if (flag == 1) {
		printf("%d is a prime number\n", a);
	}
	else {
		printf("%d is not a prime number\n", a);
	}
        }
    }
	return 0;
}

