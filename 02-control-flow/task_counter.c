#include <stdio.h>

int main(void)
{
    int task_states[] = {1, 0, 1, 2, 1, 0, 1, 0};
    int ready_count = 0;
    int suspended_count = 0;
    int running_count = 0;
    size_t task_count = sizeof(task_states) / sizeof(task_states[0]);

    // TODO: Use a for loop to count READY tasks.
    for (size_t i = 0; i < task_count; i++) {
        if (task_states[i] == 1) {
            ready_count++;
        }
        else if (task_states[i] == 0) {
            suspended_count++;
        }
        else if (task_states[i] == 2) {
            running_count++;
        }
    }

    printf("READY tasks: %d\n", ready_count);
    printf("SUSPENDED tasks: %d\n", suspended_count);
    printf("RUNNING tasks: %d\n", running_count);

    return 0;
}