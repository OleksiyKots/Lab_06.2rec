#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX, int i)
{
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        create(arr, SIZE, MIN, MAX, ++i);
    }
}

void Print(int* arr, const int SIZE, int i)
{
    cout << setw(4) << arr[i];
    if (i < SIZE - 1)
        Print(arr, SIZE, i + 1);
    else
        cout << endl;
}
int findMin(int* arr, int SIZE, int i, int min) {
    if (i < SIZE) {
        if (min > arr[i]) {
            min = arr[i];
        }
        return findMin(arr, SIZE, i + 1, min);
    }
    else {
        return min;
    }
}

int findMax(int* arr, int SIZE, int i, int max) {
    if (i < SIZE) {
        if (max < arr[i]) {
            max = arr[i];
        }
        return findMax(arr, SIZE, i + 1, max);
    }
    else {
        return max;
    }
}


int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX, 0);


    Print(arr, SIZE, 0);
    cout << "\n\n";
    cout << "Мінімальне значення = " << findMin(arr, SIZE, 0, arr[0]) << endl;
    cout << "Максимальне значення = " << findMax(arr, SIZE, 0, arr[0]) << endl;
    cout << endl;
    cout << "Сума мінімального та максимального числа: " << findMin(arr, SIZE, 0, arr[0]) + findMax(arr, SIZE, 0, arr[0]) << endl;

    delete[] arr;

    return 0;
}
