#include <stdio.h>
#include <stdlib.h>

double *combine(double *arr1, double *arr2, int N);
double combFunc(double v1, double v2, int i, double *arr1, double *arr2);
double *createDoubleArray(int N);
int *createIntArray(int N);
void printDoubleArray(char *label, double *arr, int N);
void fill_array(double *arr, int N, int k);
double *Max(double *arr1, double *arr2, int N);


int main() {

    //initializing variables
    int N = 10;
    char *label;
    int *int_array = createIntArray(N);
    double *double_array = createDoubleArray(N);

    fill_array((double*)int_array, N, 15);
    fill_array(double_array, N, 15);
    double* second_array = createDoubleArray(N);

    for(int i=0; i<N; ++i) {
        second_array[i] = 2*double_array[i];
    }


    label = "test label\n";

    printf("Entering printDoubleArray\n");
    //here we do a cast (transformation) from int to
    //double so the function can work properly
    printDoubleArray(label, (double*)int_array, N);
    printDoubleArray(label, double_array, N);

    double* final_array = combine(double_array,second_array,N);

    printDoubleArray(label, final_array, N);

    return 0;
}

double *createDoubleArray(int N) {
    printf("Entering createDoubleArray\n");
    return (double*)malloc(sizeof(double) * N);
}

int* createIntArray(int N) {
    printf("Entering createIntArray\n");
    return (int *)malloc(sizeof(int) * N);
}

void fill_array(double* arr, int N, int k) {
    for (int i=0; i<N; ++i) {
        arr[i] = i + k;
    }
}

void printDoubleArray(char* label, double* arr, int N) {\

    printf("%s%d \n", label, N);
    //%d is the format to print int
    //%s is the format to print string

    for (int i=0; i<N; ++i) {
        //print value of array and newline
        printf("%f\n", arr[i]);
    }

    //print the last hashtag
    printf("#\n");

}

//
double* combine(double* arr1, double* arr2, int N) {

    printf("Entering combine\n");
    double* final_array = Max(arr1, arr2, N);

    return final_array;

}

//MAX COMBFUNC
double combFunc(double v1, double v2, int i, double *arr1, double *arr2) {
    printf("Entering combFunc\n");
    double value;
    if (v1 >= v2) {
        value = v1;
    }
    else {
        value = v2;
    }
    return value;
}

double* Max(double *arr1, double *arr2, int N){

    double *final_array = createDoubleArray(N);
    for (int i = 0; i < N; ++i) {
        final_array[i] = combFunc(arr1[i], arr2[i], i, arr1, arr2);
    }

    return final_array;
}

