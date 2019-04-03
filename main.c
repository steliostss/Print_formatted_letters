 v#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double* combine(double* arr1, double* arr2, int N);
double combFunc(double v1, double v2, int i, double* arr1, double* arr2);
double* createDoubleArray(int N);
int* createIntArray(int N);
void printDoubleArray(char* label, double* arr, int N);
void fill_array(double* arr, int N);

int main() {
    printf("Hello world!\n");

    //initializing variables
    int N = 10;
    char* label;
    int* int_array = createIntArray(N);
    double* double_array = createDoubleArray(N);

    fill_array((double*)int_array,N);
    fill_array(double_array,N);

    label = "test label";

    printf("Entering printDoubleArray\n");
    //here we do a cast (transformation) from int to
    //double so the function can work properly
    printDoubleArray(label, (double*)int_array, N);
    printDoubleArray(label, double_array, N);


    printf("Entering createIntArray\n");
    printf("Entering createDoubleArray\n");
    printf("Entering combine\n");
    printf("Entering combFunc\n");

    return 0;
}


double* createDoubleArray(int N) {
    return (double *)malloc(sizeof(double) * N);
}

int* createIntArray(int N) {
    return (int *)malloc(sizeof(int) * N);
}

void fill_array(double* arr, int N) {
    for (int i=0; i<N; ++i) {
        arr[i] = i;
    }
}


void printDoubleArray(char* label, double* arr, int N) {\

    printf("%s %d \n", label, N);
    //%d is the format to print int
    //%s is the format to print string

    for (int i=0; i<N; ++i) {
        //print value of array and newline
        printf("%d\n", arr[i]);
    }

    //print the last hashtag
    printf("#\n");

}

double* combine(double* arr1, double* arr2, int N) {

}

double combFunc(double v1, double v2, int i, double *arr1, double *arr2) {

}
