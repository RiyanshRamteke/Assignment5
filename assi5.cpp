#include <iostream>
using namespace std;

// Swap using pointers
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swap using references
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // ===== Part A: Pointer and Reference =====
    cout << "--- Part A: Pointer and Reference ---" << endl;

    int x = 10;
    int *ptr = &x;   // pointer stores the address of x
    int &ref = x;    // reference is another name for x

    cout << "x = " << x << endl;
    cout << "Value using pointer = " << *ptr << endl;
    cout << "Value using reference = " << ref << endl;

    *ptr = 20;       // change x using pointer
    cout << "x after changing with pointer = " << x << endl;

    ref = 30;        // change x using reference
    cout << "x after changing with reference = " << x << endl;

    int a = 5, b = 9;
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    swapByPointer(&a, &b);
    cout << "After swapByPointer: a = " << a << ", b = " << b << endl;

    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << endl;

    // ===== Part B: new and delete =====
    cout << "\n--- Part B: new and delete ---" << endl;

    // One variable
    int *num = new int(25);     // allocate memory
    cout << "Dynamic number = " << *num << endl;
    delete num;                 // free memory
    num = nullptr;

    // Array
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int *arr = new int[n];      // allocate array of size n

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    cout << "Numbers are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << "\nSum = " << sum << endl;

    delete[] arr;               // free array memory
    arr = nullptr;

    cout << "Memory freed" << endl;
    return 0;
}