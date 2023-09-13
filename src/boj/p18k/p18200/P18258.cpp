#include <stdio.h>
using namespace std;


class Queue {
	int front, rear;

	int size, capacityVar;
	int* arr;

public:
	Queue(int s) {
		front = rear = -1;
		size = 0;
    capacityVar = s;
		arr = new int[s];
	}

	void push(int value);
	int pop();
	int getSize();
	int getIsEmpty();
	int getFront();
	int getBack();
  int getCapacity();
  int getIsFull();


};


void Queue::push(int value) {
  if (getIsFull()) {
    capacityVar = capacityVar * 2;
    int* temp = new int[capacityVar];
    for(int i = 0, j = front; i < size; i++) {
      temp[i]  = arr[j];
      j = (j + 1) % size;
    }

    front = 0;
    rear = size - 1;
    delete[] arr;
    arr = temp;
  }

	if (getIsEmpty()) {
		front = rear = 0;
		arr[rear] = value;
    size ++;
    return;
	}
  rear = (rear + 1) % capacityVar;
  arr[rear] = value;
  size++;

}

int Queue::pop() {
	if (getIsEmpty()) {
		return -1;
	}

  int data = arr[front];
	if (front == rear) {
    
		rear = front = -1;
    size --;
    return data;
	}
    
  front = (front + 1) % capacityVar;
  size --;
	return data;
}

int Queue::getCapacity() {
  return capacityVar;
}

int Queue::getSize()
{
	return size;
}

int Queue::getIsEmpty()
{
	return front == -1 && rear == -1 ? 1 : 0;
}

int Queue::getFront()
{
	return getIsEmpty() ? -1 : arr[front];
}

int Queue::getBack()
{
	return getIsEmpty() ? -1 : arr[rear];
}

int Queue::getIsFull() {
  return (size == capacityVar) ? 1 : 0;
}






bool isPush(char command[]) {
	return command[0] == 'p' && command[1] == 'u' && command[2] == 's' && command[3] == 'h';
}
bool isEmpty(char command[]) {
	return command[0] == 'e' && command[1] == 'm' && command[2] == 'p' && command[3] == 't' && command[4] == 'y';
}
bool isFront(char command[]) {
	return command[0] == 'f' && command[1] == 'r' && command[2] == 'o' && command[3] == 'n' && command[4] == 't';
}
bool isBack(char command[]) {
	return command[0] == 'b' && command[1] == 'a' && command[2] == 'c' && command[3] == 'k';
}

bool isSize(char command[]) {
	return command[0] == 's' && command[1] == 'i' && command[2] == 'z' && command[3] == 'e';
}

bool isPop(char command[]) {
	return command[0] == 'p' && command[1] == 'o' && command[2] == 'p';
}



int main()
{
	int N;

	scanf("%d", &N);
	Queue queue(20000000);
	for (int i = 0; i < N; i++) {
		char command[20];
		scanf("%s", &command);

		if (isPush(command)) {
			int integer;
			scanf("%d", &integer);
			queue.push(integer);
		}
		else if (isEmpty(command)) {
			printf("%d\n", queue.getIsEmpty());
		}
		else if (isFront(command)) {
			printf("%d\n", queue.getFront());
		}
		else if (isBack(command)) {
			printf("%d\n", queue.getBack());
		}
		else if (isPop(command)) {
			printf("%d\n", queue.pop());
		}
		else if (isSize(command)) {
			printf("%d\n", queue.getSize());
		}
		
	

	}

	return 0;
}
