#include <iostream>
using namespace std;

const int SIZE = 10;

int main() {
    int array1[SIZE], array2[SIZE], mergedArray[2 * SIZE];
    int n1, n2;

    do {
        cout << "Enter the number of elements for the first array (0 to 10): ";
        cin >> n1;
        if (n1 < 0 || n1 > SIZE) {
            cout << "Please enter a number between 0 and 10." << endl;
        }
    } while (n1 < 0 || n1 > SIZE);

    cout << "Enter elements for the first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> array1[i];
    }

    do {
        cout << "Enter the number of elements for the second array (0 to 10): ";
        cin >> n2;
        if (n2 < 0 || n2 > SIZE) {
            cout << "Please enter a number between 0 and 10." << endl;
        }
    } while (n2 < 0 || n2 > SIZE);

    cout << "Enter elements for the second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> array2[i];
    }

    int totalElements = n1 + n2;

    for (int i = 0; i < n1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = array2[i];
    }

    for (int i = 0; i < totalElements - 1; i++) {
        for (int j = 0; j < totalElements - i - 1; j++) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged array in Descending order:\n";
    for (int i = 0; i < totalElements; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
