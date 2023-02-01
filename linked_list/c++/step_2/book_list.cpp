#include <iostream>
#include <cstring>

typedef struct{
	char author[50]; //автор
	char title[100]; //заголовок
	short year;			//год
} BOOK;
								

class Node{
	public:
		BOOK data;
		Node *next;

	public:
		Node(char *author, char *title, short year){
			strcpy(this->data.author, author);
			strcpy(this->data.title, title);
			this->data.year = year;
			this->next = NULL;
		}
};

class OneLinkedList{
	public:
		Node *head, *tail;

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
		}

		void push_back(BOOK b1){
			Node *node = new Node(b1.author, b1.title, b1.year);
			if(head == NULL) head = node;
			if(tail != NULL) tail->next = node;
			tail = node;
		}

		void push_front(BOOK b1){
			Node *node = new Node(b1.author, b1.title, b1.year);
			node->next = head;
			head = node;
			if (tail == NULL) tail = node;
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

		void insert(int k, BOOK b1){
			Node *left = getAt(k);
			if (left == NULL) return;

			Node *right = left->next;
			Node* node = new Node(b1.author, b1.title, b1.year);

			left->next = node;
			node->next = right;
			if (right == NULL) tail = node;
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
		}
};

using namespace std;

int main(){
	OneLinkedList lst;
	//BOOK b1 = {"Пушкин А.С.", "Пиковая дама", 2007};

	lst.push_back({"Пушкин А.С.", "Пиковая дама", 2007});
	lst.push_back({"Тургенев И.С.", "Муму", 2011});
	lst.push_back({"Толстой А.Н.", "Аэлита", 1995});
	lst.push_back({"Балакирев С.М.", "Моя жизнь, мои достижения", 2045});

	for (Node *node = lst.head; node != NULL; node = node->next)
		cout << node->data.author << " " << node->data.title << " " << node->data.year << endl;
	cout << endl;

	return 0;
}
