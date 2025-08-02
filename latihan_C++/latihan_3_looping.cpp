#include <iostream>
using namespace std;

// int main() {
//     for (int i = 1; i <= 10; i++) {
//         cout << "angka ke-" << i << " ";
//     }
// }

int main() {
    int n = 100, total = 0;

    for (int i = 1; i <= n; i++) {
        total += i;
    }
    cout << total;
}