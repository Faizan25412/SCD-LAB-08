// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
#include <string>
using namespace std;

struct Laptop {
    string brand;
    int ram;
    int price;
};

int main() {
    Laptop l;
    cout << "Enter brand: ";
    cin >> l.brand;
    cout << "Enter RAM (in GB): ";
    cin >> l.ram;
    cout << "Enter price: ";
    cin >> l.price;
    cout << "Brand: " << l.brand << endl;
    cout << "RAM: " << l.ram << " GB" << endl;
    cout << "Price: " << l.price << endl;
    return 0;
}
