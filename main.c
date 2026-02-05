#include <stdio.h>

int main()
{
  int choice;

  while (1)
  {
    printf("\n=== TaskFlow Menu ===\n");
    printf("1. Add Task\n");
    printf("2. View Tasks\n");
    printf("3. Exit\n");
    printf("Choose: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      printf("Add Task selected\n");
      char task[100];
      printf("Enter task: ");
      scanf(" %[^\n]", &task); // [^\n] means read characters until you hit a newline
      printf("Task added: %s\n", task);
    }
    else if (choice == 2)
    {
      printf("View Tasks selected\n");
    }
    else if (choice == 3)
    {
      printf("Goodbye!\n");
      break;
    }
    else
    {
      printf("Invalid choice\n");
    }
  }

  return 0;
}