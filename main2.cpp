#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


//Create class ListNode that holds the strucutre of the linked list with appropriate variable values
class ListNode {
public:	
	ListNode* next;
	char data;
};

//Create printList function that will print the linked list
//Traverse with while loop until you reach nullptr node
void printList(ListNode* head) {
	ListNode* current = head;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
}




int main() {


	//Create nodes that will hold our char values	
	ListNode* head = new ListNode();
	ListNode* second = new ListNode();
	ListNode* third = new ListNode();
	ListNode* fourth = new ListNode();
	ListNode* fifth = new ListNode();
	ListNode* sixth = new ListNode();
	ListNode* seventh = new ListNode();


	//Assign value to head node then have that node point to the next node(second) and continue doing this for the rest of the nodes
	head->data = 'G';
	head->next = second;

	second->data = 'O';
	second->next = third;

	third->data = 'B';
	third->next = fourth;

	fourth->data = 'L';
	fourth->next = fifth;

	fifth->data = 'U';
	fifth->next = sixth;

	sixth->data = 'E';
	sixth->next = seventh;

	seventh->data = '!';
	seventh->next = nullptr;

	//Call the printList function and pass the head node as a parameter
	printList(head);

}
