#include <iostream>
using namespace std;

bool compare(int a, int b) {
    return a == b;
}

bool compare(float a, float b) {
    return a == b;
}

int main() {

    int x = 10, y = 20;
    float p = 15.5f, q = 15.5f;

    cout << "Integer comparison: " << compare(x, y) << endl;
    cout << "Float comparison: " << compare(p, q) << endl;

    return 0;
}

