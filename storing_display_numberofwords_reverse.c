#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char menu()
{
  char choice;
  printf("1. Store a number\n");
  printf("2. Display the number of words in the string\n");
  printf("3. Reverse the string\n");
  printf("4. Exit\n");
  printf("Enter your choice: ");
  scanf(" %c", &choice);
  return choice;
}

void store_number(char *str)
{
  printf("Enter a number: ");
  scanf("%s", str);
}

void display_number_of_words(char *str)
{
  int count = 0;
  char *token = strtok(str, " ");
  while (token != NULL)
  {
    count++;
    token = strtok(NULL, " ");
  }
  printf("Number of words: %d\n", count);
  printf("Press any key to continue...\n");
  getchar(); // wait for user input
}

void reverse_string(char *str)
{
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++)
  {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  printf("Reversed string: %s\n", str);
  printf("Press any key to continue...\n");
  getchar(); // wait for user input
}
int main()
{
  char str[100];
  char choice;
  while (1)
  {
    choice = menu();
    switch (choice)
    {
    case '1':
      store_number(str);
      break;
    case '2':
      display_number_of_words(str);
      break;
    case '3':
      reverse_string(str);
      break;
    case '4':
      exit(0);
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }
  return 0;
}
