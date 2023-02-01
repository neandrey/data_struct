#include <iostream>

class Node{
	public:
		unsigned int count;
		short data;
		Node *next;

	public:
		Node(short data = 0, unsigned int count = 0){
			this->count = count;
			this->data = data;
			this->next = NULL;
		}
};

class OneLinkedList{
	public:
		Node *head, *tail;

	public:
		OneLinkedList(){
			Node *node = new Node();
			this->head = this->tail = node;
		}

		~OneLinkedList(){
			while(head != NULL) pop_front();
		}

		void pop_front(){
			if(head == NULL) return;
			if(head == tail){
				delete tail;
				head = tail = NULL;
				return;
			}
			Node *node = head;
			node = node->next;
			delete node;
			head->count--;
		}

		void push_back(short data){
			Node *node = new Node(data);
			if(head == NULL) head = node;
			if(tail != NULL) tail->next = node;
			tail = node;
			head->count++;
		}

		void push_front(short data){
			/*
			Node *node = new Node(data);
			node->next = head;
			head = node;
			if (tail == NULL) tail = node;
			*/
			push_back(data);
		}

		void pop_back(){
			if (tail == NULL) return;
			if (head == tail){
				delete tail;
				head = tail = NULL;
				return;
			}

			Node *node = head;
			for (;node->next != tail; node = node->next);
			node->next = NULL;
			delete tail;
			tail = node;
		}

		Node* getAt(int k){
			if (k < 0) return NULL;

			Node *node = head;
			int  n = 0;
			while(node && n != k && node->next){
				node = node->next;
				n++;
			}

			return (n == k) ? node : NULL;
		}

		void insert(int k, short data){
			Node *left = getAt(k);
			if (left == NULL) return;

			Node *right = left->next;
			Node* node = new Node(data);

			left->next = node;
			node->next = right;
			if (right == NULL) tail = node;
			head->count++;
		}

		void erase(int k){
			if (k < 0) return;
			if (k == 0){
				pop_front();
				return;
			}

			Node *left = getAt(k-1);
			Node *node = left->next;
			if (node == NULL) return;
			Node *right = node->next;

			left->next = right;
			if (node == tail) tail = left;
			delete node;
		}
};

using namespace std;

int main(){
	OneLinkedList lst;

	lst.push_front(1);
	lst.push_back(2);
	lst.push_back(3);

	lst.pop_back();

	for(Node *node = lst.head; node != NULL; node = node->next)
		cout << "count :" << node->count << " data: " << node->data << endl;

	cout << endl;
	return 0;
}
