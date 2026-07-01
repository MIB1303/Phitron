#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    deque<int> b;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 1) {
            b.push_front(a[i]);
        } else {
            b.push_back(a[i]);
        }
    }

    while (!b.empty()) {
        cout << b.back() << " ";
        b.pop_back();
    }
    cout << endl;
    return 0;
}
