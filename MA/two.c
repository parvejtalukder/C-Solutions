#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 2  

typedef struct {
    char task[100];  
    int completed;   
} Todo;

int main() {
    Todo *todoList;  
    int size = INITIAL_SIZE;  
    int count = 0;  
    int choice;
    
    todoList = (Todo*)malloc(size * sizeof(Todo));
    if (todoList == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    while (1) {
        printf("\n--- To-Do List ---\n");
        printf("1. Add a Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Delete a Task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {  
                if (count >= size) {
                    
                    size *= 2;
                    todoList = (Todo*)realloc(todoList, size * sizeof(Todo));
                    if (todoList == NULL) {
                        printf("Memory reallocation failed!\n");
                        return 1;
                    }
                    printf("Memory expanded to accommodate more tasks.\n");
                }

                printf("Enter the task: ");
                getchar();  
                fgets(todoList[count].task, 100, stdin);
                todoList[count].task[strcspn(todoList[count].task, "\n")] = 0;  
                todoList[count].completed = 0;  
                count++;

                printf("Task added successfully.\n");
                break;
            }
            case 2: {  
                if (count == 0) {
                    printf("No tasks to display.\n");
                } else {
                    printf("\n--- To-Do List ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. %s [%s]\n", i + 1, todoList[i].task, todoList[i].completed ? "Completed" : "Not Completed");
                    }
                }
                break;
            }
            case 3: {  
                int taskNumber;
                printf("Enter task number to mark as completed: ");
                scanf("%d", &taskNumber);

                if (taskNumber > 0 && taskNumber <= count) {
                    todoList[taskNumber - 1].completed = 1;
                    printf("Task marked as completed.\n");
                } else {
                    printf("Invalid task number.\n");
                }
                break;
            }
            case 4: {  
                int taskNumber;
                printf("Enter task number to delete: ");
                scanf("%d", &taskNumber);

                if (taskNumber > 0 && taskNumber <= count) {
                    for (int i = taskNumber - 1; i < count - 1; i++) {
                        todoList[i] = todoList[i + 1];
                    }
                    count--;  

                    
                    if (count <= size / 4) {
                        size /= 2;
                        todoList = (Todo*)realloc(todoList, size * sizeof(Todo));
                        if (todoList == NULL) {
                            printf("Memory reallocation failed!\n");
                            return 1;
                        }
                        printf("Memory shrunk to save space.\n");
                    }

                    printf("Task deleted successfully.\n");
                } else {
                    printf("Invalid task number.\n");
                }
                break;
            }
            case 5: {  
                printf("Exiting the program.\n");
                free(todoList);  
                return 0;
            }
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
