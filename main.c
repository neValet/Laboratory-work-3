#include <stdio.h>
#include <math.h>
#include <conio.h>
#define x 5
#define y 5
int array[x][y];
reading(){
	
	/*  1, 16, 21, 11, 6,
	  2, 17, 22, 12, 7,
	  3, 18, 23, 13, 8,
	  4, 19, 24, 14, 9,
	  5, 20, 25, 15, 10;*/

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &array[i][j]);
			
		}
	}
}

sorting() {
	for (int i = 0; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			int g = array[i][j];
			for (int k = j - 1; k >=0 ; k--) {
				if (array[i][k] > g) {
					array[i][k + 1] = array[i][k];
					if (k == 0) {
						array[i][k] = g;
					}
				}

				else {
					array[i][k+1] = g;
					break;
				}

			}
		}
	}

}

printarray(){
for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf(" %d \t", array[i][j]);
		}
		printf("\n");
	}
	_getch();
}

 underdiagonal() {
	 int count = 0;
	 double sum = 0;
	 float ave = 0, mult = 1;
	 for (int i = 0; i < 4; i++) {
		 sum = 0, count = 0;
		 for (int j = 0; j < 5; j++) {
			 if (i < j) {
				 sum += array[j][i];
				 count++;
				 ave = sum / count;
				 //mult *=ave;
				
			 }

		 }
		 printf("%lf \n", ave);
		 mult *= ave;
	 }
	 printf("muliply =  %lf", mult);
	 _getch();
 }

main() {
	reading(array);
	sorting(array);
	printarray(array);
	printf("\n");
	underdiagonal(); 

	_getch();
}