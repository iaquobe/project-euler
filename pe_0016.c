#include<stdio.h>
#include<stdlib.h>



int main(int argc, char **argv){

	int num = 15;
	if(argc >= 2)
		num = atoi(argv[1]);
		
	short *digits = malloc(sizeof(short) * num);
	digits[num - 1] = 1;

	for(int i = 0; i < num; i++){
		for(int j = 1; j < num; j++){
			if(digits[j] >= 5)
				digits[j-1]++;
			digits[j] = (digits[j] * 2) % 10;
		}
	}

	int sum = 0;
	for(int i = 0; i < num; i++){
		sum += digits[i];
	}

	printf("sum of digits for 2**%d is: %d\n", num, sum);

	return 0;

}
