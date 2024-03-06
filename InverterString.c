#include <stdio.h>
#include <string.h>

void inverter_string(char *str) {
  int i, j;
  char temp;

  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) { // Laço de repetição que inverterá a string
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main() {
  char str[] = "Exemplo";// Armazenar string

  inverter_string(str);
  printf("%s\n", str);

  return 0;
}