#include <iostream>
using namespace std;

int main() {
  char ch;
  int vow = 0;
  int cons = 0;
  string sentence;
  cout << "Enter the sentence: ";
  cin >> sentence;
  for (int i = 0; i < sentence.length(); i++) {
    ch = sentence[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
      vow++;
    } else {
      cons++;
    }
  }
  cout << "vowels: " << vow;
  cout << endl;
  cout << "consonants: " << cons;
}
