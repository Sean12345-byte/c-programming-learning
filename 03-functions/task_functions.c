#include <stdio.h>

int count_tasks(const int states[], int size, int target_state)
{
    // TODO: Count matching task states.
    int count = 0;

    for(int i=0;i<size;i++)
    {
        if(states[i]==target_state)
        {
            count++;
        }
    }
    return count;
}

void reset_counters(int *ready, int *suspended, int *running)
{
    // TODO: Set all three counters to zero.
    *ready = 0;
    *suspended = 0;
    *running = 0;
}

int main(void)
{
    int task_states[] = {1, 0, 1, 2, 1, 0, 1, 0};
    int size = sizeof(task_states) / sizeof(task_states[0]);

    int ready = count_tasks(task_states, size, 1);
    int suspended = count_tasks(task_states, size, 0);
    int running = count_tasks(task_states, size, 2);

    printf("Before reset:\n");
    printf("READY: %d\n", ready);
    printf("SUSPENDED: %d\n", suspended);
    printf("RUNNING: %d\n", running);

    reset_counters(&ready, &suspended, &running);

    printf("After reset:\n");
    printf("READY: %d\n", ready);
    printf("SUSPENDED: %d\n", suspended);
    printf("RUNNING: %d\n", running);

    return 0;
}