#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setfill('*');
    cout << setw(0) << 15 << endl;
    cout << setw(1) << 15 << endl;
    cout << setw(2) << 15 << endl;
    cout << setw(3) << 15 << endl;
    cout << setw(4) << 15 << endl;

    cout << setw(16) << setfill('*') << " " << endl;

    cout << setiosflags(ios_base::right);
    cout << setw(5) << 1;
    cout << setw(5) << 2;
    cout << setw(5) << 3 << endl;
    cout << resetiosflags(ios_base::right);

    cout << setiosflags(ios_base::left);
    cout << setw(5) << 1;
    cout << setw(5) << 2;
    cout << setw(5) << 3 << endl;

    return 0;
}
