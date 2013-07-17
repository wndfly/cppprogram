#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.141592;

int main() {
    cout << PI << endl;
    cout << setprecision(0) << PI << endl;
    cout << setprecision(1) << PI << endl;
    cout << setprecision(2) << PI << endl;
    cout << setprecision(3) << PI << endl;
    cout << setprecision(7) << PI << endl;

    int b = 100;

    cout << "Dec: " << dec << b << endl;
    cout << "Hex: " << hex << b << endl;
    cout << "Oct: " << oct << b << endl;

    cout << b << endl;
    cout << 100 << endl;

    cout << "Input b = ";
    cin >> b;

    cout << b << endl;
    cout << dec << setiosflags(ios_base::showpos) << b << endl;

    cout << "Input b = ";
    cin >> b;

    cout << b << endl;
    cout << resetiosflags(ios_base::showpos);
    cout << b << endl;

    return 0;
}
