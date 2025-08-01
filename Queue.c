#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = -1, rear = -1, size;

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Function to add element to the queue
void enqueue(int item) {
    if (rear == size - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queue[rear] = item;
    printf("Enqueued: %d\n", item);
    display();
}

// Function to remove element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    int item = queue[front];
    front++;
    printf("Dequeued: %d\n", item);
    display();
}

// Main function
int main() {
    printf("Enter queue size: ");
    scanf("%d", &size);

    queue = (int *)malloc(size * sizeof(int));

    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Test underflow

    free(queue);
    return 0;
}
