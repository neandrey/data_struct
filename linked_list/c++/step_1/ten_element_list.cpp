#include <iostream>
using namespace std;

class Node{
	public:
		double data;
		Node *next;

	public:
		Node(double data){
			this->data = data;
			this->next = NULL;
		}
};

class OneLinkedList{
	public:
		Node *head, *tail;
		int col_element = 10;

	public:
		OneLinkedList(){
			this->head = this->tail = NULL;
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
			head = node->next;
			delete node;
			col_element++;
		}

		void push_back(double data){
			if (col_element){
				Node *node = new Node(data);
				if(head == NULL) head = node;
				if(tail != NULL) tail->next = node;
				tail = node;
				col_element--;
				cout << "количество элементов: " << col_element << endl;
			}
		}

		void push_front(double data){
			if(col_element){
				Node *node = new Node(data);
				node->next = head;
				head = node;
				if (tail == NULL) tail = node;
				col_element--;
				cout << "количество элементов: " << col_element << endl;
			}
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
			col_element++;
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

		void insert(int k, double data){
			if (col_element){
				Node *left = getAt(k);
				if (left == NULL) return;

				Node *right = left->next;
				Node* node = new Node(data);

				left->next = node;
				node->next = right;
				if (right == NULL) tail = node;
				col_element++;
			}
		}

		void earse(int k){
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
			col_element++;
		}

};

int main(){
	OneLinkedList lst;

	for (int i = 0; i < 40; ++i)
		lst.push_front(1);

	for(Node *node = lst.head; node != NULL; node = node->next)
	cout << node->data << " ";

	cout << endl;
	return 0;
}
