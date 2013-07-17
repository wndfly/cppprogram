#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

using namespace std;

int main() {
    double a[] = {1.1, 4.4, 3.3, 2.2};
    double b[4];

    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    reverse_copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    copy(a, a + 4, b);
    copy(b, b + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    sort(a, a + 4);
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    reverse_copy(a, a + 4, b);
    copy(b, b + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    return 0;
}
