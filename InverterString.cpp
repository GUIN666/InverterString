#include <iostream>

using namespace std;

void inverter_string(string &str) {
  int i, j;
  char temp;

  for (i = 0, j = str.size() - 1; i < j; i++, j--) { // Laço de repetição que inverterá a string
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main() {
  string str = "Exemplo"; // Armazenar string

  inverter_string(str);
  cout << str << endl;

  return 0;
}