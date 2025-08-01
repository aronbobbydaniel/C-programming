#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = -1, rear = -1;
int maxSize;

int isFull() {
    return rear == maxSize - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
    printf("Enqueued %d\n", value);
    displayQueue();
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int val = queue[front++];
    printf("Dequeued %d\n", val);
    displayQueue();
    return val;
}

int main() {
    printf("Enter size of the queue: ");
    scanf("%d", &maxSize);

    queue = (int *)malloc(maxSize * sizeof(int));
    if (queue == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int choice, value;

    while (1) {
        printf("\n= Queue Menu =\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Exit\n");
        printf("===\n");
        printf("Choose an operation (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                free(queue);
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

