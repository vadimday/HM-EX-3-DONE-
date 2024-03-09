#include <iostream>


using namespace std;


int main() {

    int arr1[5] = { 1, 2, 3, 4, 5 };

    int arr2[5] = { 0 };


    int* ptr1 = arr1;

    int* ptr2 = arr2;


    for (int i = 0; i < 5; i++) {

        *(ptr2 + i) = *(ptr1 + i);

    }


    cout << "Array 1: ";

    for (int i = 0; i < 5; i++) {

        cout << arr1[i] << " ";

    }


    cout << "\nArray 2: ";

    for (int i = 0; i < 5; i++) {

        cout << arr2[i] << " ";

    }


    return 0;

}

#include <iostream>


using namespace std;


int main() {

    int arr[5] = { 1, 2, 3, 4, 5 };


    int* ptr = arr;

    int* ptr_end = arr + 4;


    while (ptr < ptr_end) {

        int temp = *ptr;

        *ptr = *ptr_end;

        *ptr_end = temp;

        ptr++;

        ptr_end--;

    }


    cout << "Reversed array: ";

    for (int i = 0; i < 5; i++) {

        cout << arr[i] << " ";

    }


    return 0;

}

#include <iostream>


using namespace std;


int main() {

    int arr1[5] = { 1, 2, 3, 4, 5 };

    int arr2[5] = { 0 };


    int* ptr1 = arr1;

    int* ptr2 = arr2 + 4;


    for (int i = 0; i < 5; i++) {

        *ptr2 = *ptr1;

        ptr1++;

        ptr2--;

    }


    cout << "Array 1: ";

    for (int i = 0; i < 5; i++) {

        cout << arr1[i] << " ";

    }


    cout << "\nArray 2: ";

    for (int i = 0; i < 5; i++) {

        cout << arr2[i] << " ";

    }


    return 0;

}