#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



class ListNode {
	public:
		ListNode* next;
		ListNode* prev;
		char data;
};

void traverseHead2Tail(ListNode* head) {
	ListNode* current = head;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}


void traverseTail2Head(ListNode* tail) {
	ListNode* current = tail;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->prev;
	}
	cout << endl;
}

void printList(ListNode* head) {
	traverseHead2Tail(head);
}


int main() {
	ListNode* head = new ListNode();
	ListNode* second = new ListNode();
	ListNode* third = new ListNode();
	ListNode* fourth = new ListNode();
	ListNode* fifth = new ListNode();
	ListNode* sixth = new ListNode();
	ListNode* seven = new ListNode();


	head->data = 'G';
	head->prev = nullptr;
	head->next = second;

	second->data = 'O';
	second->prev = head;
	second->next = third;

	third->data = 'B';
	third->prev = second;
	third->next = fourth;

	fourth->data = 'L';
	fourth->prev = third;
	fourth->next = fifth;

	fifth->data = 'U';
	fifth->prev = fourth;
	fifth->next = sixth;

	sixth->data = 'E';
	sixth->prev = fifth;
	sixth->next = seven;

	seven->data = '!';
	seven->prev = sixth;
	seven->next = nullptr;


	printList(head);

	cout << "Traverse from head to tail" << endl;
	traverseTail2Head(sixth);

	return 0;

}