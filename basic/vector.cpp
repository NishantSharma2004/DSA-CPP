#include <iostream>      // Input-output (cout, cin) ke liye
using namespace std;     // std:: likhne se bachne ke liye

// Apna khud ka Vector class
class Vector {
public:
    int size;        // Abhi kitne elements stored hain
    int capacity;    // Kitne elements store kar sakte hain (allocated size)
    int* arr;        // Dynamic array ka pointer (heap memory par array)

    // ✅ Default constructor: jab hum "Vector v;" likhte hain tab yeh chalega
    Vector() {
        size = 0;                // Start me koi element nahi
        capacity = 1;            // Start me 1 element ki jagah
        arr = new int[1];        // Heap me 1 size ka array allocate
    }

    // ✅ Element add karne ka function (like push_back)
    void add(int ele) {
        // Agar array full ho gaya (size == capacity) to resize karna padega
        if (size == capacity) {
            capacity *= 2;                 // Capacity ko double kar diya
            int* arr2 = new int[capacity]; // Naya bada array banaya (new capacity ke sath)

            // Purane array se saare elements nayi jagah copy kar rahe hain
            for (int i = 0; i < size; i++) {
                arr2[i] = arr[i];          // old arr[i] → new arr2[i]
            }

            delete[] arr;                  // Purana array free kar diya (memory leak se bacha)
            arr = arr2;                    // arr ab nayi memory ko point karega
        }

        // Ab nayi jagah hai, to element ko end me daal do
        arr[size] = ele;   // Current last position par element daala
        size++;            // Size +1, kyunki ek naya element aa gaya
    }

    // ✅ Vector ke elements print karne ka function
    void print() {
        for (int i = 0; i < size; i++) {   // 0 se size-1 tak loop
            cout << arr[i] << " ";         // Har element print karo
        }
        cout << endl;                      // Line change
    }

    // ✅ Index se element lene ka function (like v[idx])
    int get(int idx) {
        // Agar vector empty hai
        if (size == 0) {
            cout << "Array is Empty" << endl;
            return -1;                     // Error code, -1 return kiya
        }

        // Agar index bahar hai (negative ya size se bada)
        if (idx >= size || idx < 0) {
            cout << "Invalid Index" << endl;
            return -1;                     // Error code
        }

        return arr[idx];                   // Sahi index hai, to element return karo
    }

    // ✅ Last element remove karne ka function (like pop_back)
    void remove() {
        if (size == 0) {                   // Agar already empty hai
            cout << "Array is Empty" << endl;
            return;                        // Kuch mat karo
        }

        size--;                            // Size ek kam kar diya (last element ko ignore kar diya)
        // Note: Hum actual memory se value delete nahi karte,
        // bas size kam kar dete hain. Next print me woh element dikhega nahi.
    }

    // ✅ Size return karne ka chota function (good practice)
    int getSize() {
        return size;
    }

    // ✅ Destructor: Program ke end me memory free karne ke liye
    ~Vector() {
        delete[] arr;                      // Jo new se li thi, use delete[] se free karna zaroori
    }
};

int main() {
    Vector v;                     // Apna vector object banaya → constructor call hua

    cout << "Size: " << v.getSize() << endl;   // Abhi size 0

    v.add(10);                    // 10 add kiya
    v.print();                    // Output: 10
    cout << "Size: " << v.getSize() << endl;   // Size: 1

    v.add(15);                    // 15 add kiya → capacity full thi to resize hua
    v.print();                    // Output: 10 15
    cout << "Size: " << v.getSize() << endl;   // Size: 2

    v.add(7);                     // 7 add kiya → capacity 2 thi, resize hua (4)
    v.print();                    // Output: 10 15 7
    cout << "Size: " << v.getSize() << endl;   // Size: 3

    cout << "Element at index 1: " << v.get(1) << endl;  // 15

    v.remove();                   // Last element (7) ko logically remove kiya
    v.print();                    // Output: 10 15
    cout << "Size: " << v.getSize() << endl;   // Size: 2

    return 0;                     // main khatam → destructor call → memory free
}
