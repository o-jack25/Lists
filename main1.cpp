#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



/*************************************************************************************************************

	Question 1D: If we wanted the linked list to become circular we would have to make the last node point to the first node.
	This in short means making the next pointer of the last node point to the first node.
	We would probably have to also update our functions to avoid an infinite loop.


**************************************************************************************************************/


//Class ListNode that holds the "structure" of the linked list
//One part will hold the data and another part will point to the next node
class ListNode {
public:
	ListNode* next;
	int data;

};

//ListSize function that takes in the head of the list as a parameter
//Introduce counter variable to increment each time a node is found
//Set the current node to the head of the list(starting value)
//Traverse with while loop until you reach nullptr node
//Return the count total
int listSize(ListNode* head) {
	int count = 0;
	ListNode* current = head;
	while (current != nullptr) {
		count++;
		current = current->next;
	}

	return count;
}


//ListSum function that takes in the head of the list as a parameter
//Set the current node to the head of the list(starting value)
//Create total variable to hold the sum
//Traverse with while loop until you reach nullptr node
//Add the value of the current node to the total
int listSum(ListNode* head) {
	ListNode* current = head;
	int total = 0;
	while (current != nullptr) {
		total += current->data;
		current = current->next;
	}
	return total;
}


int main() {

	//Create linked list by assigning pointers to the nodes
	ListNode* head = new ListNode();
	ListNode* second = new ListNode();
	ListNode* third = new ListNode();
	ListNode* fourth = new ListNode();

	//Assign leading value to the head node
	//Have that node then point to the next node
	head->data = 33;
	head->next = second;

	second->data = 45;
	second->next = third;


	third->data = 58;
	third->next = fourth;

	fourth->data = 81;
	fourth->next = nullptr;

	//Create totalNodes variable that will hold the number of nodes given from the listSize function
	int totalNodes = listSize(head);
	int totalSum = listSum(head);

	//Print total number of nodes
	cout << "Numbmer of nodes: " << totalNodes << endl;
	cout << "Total sum: " << totalSum << endl;

	return 0;



}
