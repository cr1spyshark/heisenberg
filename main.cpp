#include <iostream>

int main() {
    int num;
    std::cin >> num;
    int array[num];

    for (int i = 0; i < num; i++) {
        std::cin >> array[i];
    }

    for (int i = 1; i < num; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            array[j] = key;
            j--;
        }
    }

    for (int i = 0; i < num; ++i) {
        std::cout << array[i] << " ";
    }

    //changes
}