#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
  char str1[MAX], str2[MAX], result[MAX];
  int len1, len2, i, j, k;

  // Lê as duas strings
  printf("Digite a primeira string: ");
  fgets(str1, MAX, stdin);
  printf("Digite a segunda string: ");
  fgets(str2, MAX, stdin);

  // Remove o caractere de nova linha ('\n') do final das strings
  len1 = strlen(str1) - 1;
  if (str1[len1] == '\n') {
    str1[len1] = '\0';
  }
  len2 = strlen(str2) - 1;
  if (str2[len2] == '\n') {
    str2[len2] = '\0';
  }

  // Verifica se a segunda string é uma substring da primeira
  for (i = 0; i <= len1 - len2; i++) {
    for (j = 0, k = i; j < len2; j++, k++) {
      if (str1[k] != str2[j]) {
        break;
      }
    }
    if (j == len2) {
      // A segunda string é uma substring da primeira
      // Concatena as duas strings em uma terceira string
      strcpy(result, str1);
      strcat(result, str2);
      printf("As strings concatenadas são: %s\n", result);
      return 0;
    }
  }

  // A segunda string não é uma substring da primeira
  printf("A segunda string não é uma substring da primeira.\n");
  printf("A primeira string é: %s\n", str1);

  return 0;
}
