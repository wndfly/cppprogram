#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

using namespace std;

int main() {
    double a[] = {1.1, 4.4, 3.3, 2.2};

    sort(a, a + 4);
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    sort(a, a + 4, greater<double>());
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    double *x = find(a, a + 4, 4.4);

    if (x == a + 4) {
        cout << "this haven't' a value 4.4";
    } else {
        cout << "this have a value " << *x;
    }

    cout << endl;

    x = find(a, a + 4, 8);

    if (x == a + 4) {
        cout << "this haven't a value 8";
    } else {
        cout << "this have a value " << *x;
    }

    cout << endl;

    return 0;
}
