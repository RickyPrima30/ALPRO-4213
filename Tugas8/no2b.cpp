#include <iostream>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                // Tukar elemen jika elemen sebelumnya lebih kecil
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 8, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Sebelum pengurutan: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    bubbleSort(arr, n);

    std::cout << "\nSetelah pengurutan: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}