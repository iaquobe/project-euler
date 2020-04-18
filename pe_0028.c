#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	int size = 5;

	if(argc >= 2)
		size = atoi(argv[1]);

	int rings = size / 2 + 1;
	int num = 1;
	int sum = 1;

	printf("%d rings\n", rings);

	for(int i = 1; i < rings; i++){
		int inc = i * 2;
		for(int j = 0; j < 4; j++){
			num += inc;
			sum += num;	
		}
	}

	printf("sum: %d\n", sum);

	return 0;
}
