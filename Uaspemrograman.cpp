#include <iostream>

using namespace std;

string products[5][2] = {
    {
        "Es Teh",
        "5000"
    }, {
        "Es Goodday Freeze",
        "6000"
    }, {
        "Es Teller",
        "8000"
    }, {
        "Es Jeruk",
        "4000"
    }, {
        "Es Susu Soda",
        "7000"
    }
};

int productCount() {
    return sizeof(products)/sizeof(products[0]);
}

int main() {
    cout<<"------------------------"<<endl;
    cout<<"|        sarkop        |"<<endl;
    cout<<"------------------------"<<endl;
    for (int i = 0; i < productCount(); i++) {
        cout << i+1 << ". ";
        cout << products[i][0] << " ";
        cout << "Harga: Rp. " << products[i][1] << endl;
    }
    cout << "--------------------------------------" << endl;
    
    int choose;
    int amount;
    cout << "Pilih nomor untuk memilih menu: ";
    cin >> choose;
    cout << "Jumlah yang dibeli : ";
    cin >> amount;
    
    cout << endl << "Beli " << amount << " " << products[choose-1][0];
    cout << " Total belanja = Rp." << stoi(products[choose-1][1]) * amount << endl;
    
    return 0;
}
