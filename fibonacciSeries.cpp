#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int num3;
    int n;
    cin >> n;
    if (n == 1) {
      cout << num1 << " ";
    }
    else if (n == 2) {
      cout << num1 << " ";
      cout << num2 << " ";
    }
    else if (n > 2) {
      cout << num1 << " ";
      cout << num2 << " ";
      for (int i = 0; i < n-2; i++) {
        num3 = num1 + num2;
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }

    }
    
    
}
