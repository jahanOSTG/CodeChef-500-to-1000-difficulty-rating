#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;

        int capacity_per_bag = K * M;


        int bags = (N + capacity_per_bag - 1) / capacity_per_bag;

        cout << bags << endl;
    }

    return 0;
}
