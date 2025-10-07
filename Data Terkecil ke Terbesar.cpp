#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "masukkan jumlah elemen: ";
    cin >> n;

    int data[n];
    cout << "masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "data[" << i << "] = ";
        cin >> data[i];
    }

   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

   
    cout << "\ndata setelah diurutkan (dari terkecil ke terbesar): ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}

