#include <iostream>
using namespace std;

int main() {
    const int rows = 2;
    const int cols = 3;

    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Transpose will be of size cols x rows
    int transpose[cols][rows];

    // Creating the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transpose
    cout << "Transpose of the matrix is:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
