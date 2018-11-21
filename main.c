#include <stdio.h>
#include <math.h>
#include <conio.h>
#define numberOfRows 5
#define numberOfColumns 5
int matrix[numberOfRows][numberOfColumns];
inputOfMatrix(){

    /*  1, 16, 21, 11, 6,
      2, 17, 22, 12, 7,
      3, 18, 23, 13, 8,
      4, 19, 24, 14, 9,
      5, 20, 25, 15, 10;*/

    for (int rows = 0; rows < 5; rows++) {
        for (int columns = 0; columns < 5; columns++) {
            scanf("%d", &matrix[rows][columns]);

        }
    }
}

matrixInsertionSort() {
    for (int rows = 0; rows < 5; rows++) {
        for (int columns = 1; columns < 5; columns++) {
            int g = matrix[rows][columns];
            for (int k = columns - 1; k >=0 ; k--) {
                if (matrix[rows][k] > g) {
                    matrix[rows][k + 1] = matrix[rows][k];
                    if (k == 0) {
                        matrix[rows][k] = g;
                    }
                }

                else {
                    matrix[rows][k+1] = g;
                    break;
                }

            }
        }
    }

}

outputOfMatrix(){
    for (int rows = 0; rows < 5; rows++) {
        for (int columns = 0; columns < 5; columns++) {
            printf(" %d \t", matrix[rows][columns]);
        }
        printf("\n");
    }
    _getch();
}

averageMeanOfColumnsUnderDiagonal() {
    int numberOfElementsInColumn = 0;
    double sumOfElementsInColumn = 0;
    float averageMeanOfElementsInColumn = 0, productOfAverageMeans = 1;
    for (int rows = 0; rows < 4; rows++) {
        sumOfElementsInColumn = 0, numberOfElementsInColumn = 0;
        for (int columns = 0; columns < 5; columns++) {
            if (rows < columns) {
                sumOfElementsInColumn += matrix[columns][rows];
                numberOfElementsInColumn++;
                averageMeanOfElementsInColumn = sumOfElementsInColumn / numberOfElementsInColumn;

            }

        }
        printf("%lf \n", averageMeanOfElementsInColumn);
        productOfAverageMeans *= averageMeanOfElementsInColumn;
    }
    printf("product =  %lf", productOfAverageMeans);
    _getch();
}

main() {
    inputOfMatrix(matrix);
    matrixInsertionSort(matrix);
    outputOfMatrix(matrix);
    printf("\n");
    averageMeanOfColumnsUnderDiagonal();

    _getch();
}