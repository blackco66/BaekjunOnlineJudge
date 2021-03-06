#include <iostream>
bool DiscriminatePrime(int p) {
    if (p == 1) return false;
    for (int i = 2; i < 32; i++) {
        if (p % i == 0 && p != i) return false;
    }
    return true;
}
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);
        if (DiscriminatePrime(p)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}