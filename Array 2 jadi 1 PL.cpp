#include <iostream>
using namespace std;

int main() {
    int n1, n2;

   
    cout << "masukkan jumlah elemen array pertama: ";
    cin >> n1;
    int arr1[n1];
    cout << "masukkan elemen array pertama:\n";
    for (int i = 0; i < n1; i++) {
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }

    
    cout << "\nmasukkan jumlah elemen array kedua: ";
    cin >> n2;
    int arr2[n2];
    cout << "masukkan elemen array kedua:\n";
    for (int i = 0; i < n2; i++) {
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }

    
    int gabung[n1 + n2];
    for (int i = 0; i < n1; i++) {
        gabung[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        gabung[n1 + i] = arr2[i];
    }

  
    cout << "\narray hasil penggabungan: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << gabung[i] << " ";
    }
    cout << endl;

    return 0;
}

