//
// Created by 김민지 on 2022/10/28.
//
#include "iostream"
using namespace std;

void hanoi(int n, int from, int to, int via) {

    if (n == 1) {
        cout << from << " " << to << "\n";
        return;
    }

    hanoi(n-1, from, via, to);
    cout << from << " " << to << "\n";
    hanoi(n-1, via, to, from);
}

int main() {
    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";
    hanoi(n, 1, 3, 2);
}