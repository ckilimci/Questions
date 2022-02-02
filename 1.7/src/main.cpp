#include <iostream>

using namespace std;

#define N 5

void printArray(int array[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateMatrix(int array[N][N]) {
    int buffer;
    for (int i=0; i<N/2; i++) {
        for (int j=i; j<N-1-i; j++) {
            buffer = array[i][j];
            array[i][j] = array[N-1-j][i];
            array[N-1-j][i] = array[N-1-i][N-1-j];
            array[N-1-i][N-1-j] = array[j][N-1-i];
            array[j][N-1-i] = buffer;
        }
    }
}

int main(int argc, char const *argv[])
{
    cout<< "Question 1.7:" << endl;
    cout<< "Rotate NxN matrix in place." << endl;

    int array[N][N] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6};
    cout << "Original matrix:" << endl;
    printArray(array);
    cout << "----" << endl;
    rotateMatrix(array);
    cout << "After rotated:" << endl;
    printArray(array);
    return 0;
}
