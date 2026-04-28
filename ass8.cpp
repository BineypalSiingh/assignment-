#include<iostream>
using namespace std;


// template <typename s>

// void swapi(s &a, s &b)
// {
//     s temp = a;
//     a = b;
//     b = temp;

//     cout << a << " " << b << endl;
//     return;
// }
// int main()
// {
//     int x = 10;
//     int y = 9;
//     swapi(x, y);

//     char n = 'c';
//     char m = 'd';
//     swapi(n, m);
// }


//q2

// #include <iostream>
// using namespace std;

// template <typename T>
// T findMin(T arr[], int size) {
//     if (size <= 0) {
//         throw invalid_argument("Array size must be greater than 0");
//     }

//     T min = arr[0];  

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     return min;
// }

// int main() {
//     int arr1[5] ;
//     cout<<"enter element of arr1" ;
//     for(int i =0;i<5;i++){
//         cin>>arr1[i];
//         cout<<arr1[i]<<endl;
//     } 
//     float arr2[4];
//     cout<<"enter element of arr2" ;
//     for(int i =0;i<4;i++){
//         cin>>arr2[i];
//         cout<<arr2[i];
//     } 

//     cout << "Minimum in int array: " << findMin(arr1, 5) << endl;
//     cout << "Minimum in float array: " << findMin(arr2, 4) << endl;

//     return 0;
// }

//q3



// template <typename T>
// void bubbleSort(T arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
        
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
                
//                 T temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {5, 2, 9, 1, 6};
//     int n = 5;

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//q4


// template <typename T>
// int linearSearch(T arr[], int size, T key) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             return i; 
//         }
//     }
//     return -1;  
// }


// int main() {
//     int arr[] = {5, 2, 9, 1, 6};
//     int n = 5;
//     int key = 9;

//     int result = linearSearch(arr, n, key);

//     if (result != -1)
//         cout << "Element found at index: " << result;
//     else
//         cout << "Element not found";

//     return 0;
// }


//q5

#include <iostream>
using namespace std;

// i) Single parameter
template <typename T>
void process(T a) {
    cout << "Single parameter: " << a << endl;
}

// ii) Two parameters of same type
template <typename T>
void process(T a, T b) {
    cout << "Two parameters (same type): " << a << ", " << b << endl;
}

// iii) Two parameters of different types
template <typename T, typename U>
void process(T a, U b) {
    cout << "Two parameters (different types): " << a << ", " << b << endl;
}


int main() {
    process(10);              
    process(5, 15);         
    process(10, 3.14);        
    process('A', 100);       
    return 0;
}