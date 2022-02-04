#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;

struct link_list{
	NODE *head;
	NODE *tail;
};
typedef struct link_list LINK_LIST;

void init_list(LINK_LIST &l){
	l.head = NULL;
	l.tail = NULL;
}

NODE *init_node(int x){
	NODE *p = new NODE;
	if(p == NULL){
		cout << "Error: Out of memory" << endl;
		return NULL;
	}
	else {
		p->data = x;
		p->next = NULL;
		return p;
	}
}
void insert_head(LINK_LIST &l, NODE *p){
	if(l.head == NULL){
		l.head = p;
		l.tail = p;
	}
	else{
		p->next = l.head;
		l.head = p;
	}
}
void insert_tail(LINK_LIST &l, NODE *p){
	if(l.head == NULL){
		l.head = p;
		l.tail = p;
	}
	else{
		l.tail->next = p;
		l.tail = p;
	}
}
void print_list(LINK_LIST l){
	for(NODE *k = l.head; k != NULL; k = k->next){
		cout << k->data << " ";
	}
	cout << endl;
}
void delete_head(LINK_LIST &l){
	if(l.head == NULL){
		cout << "Danh sach rong" << endl;
	}
	else{
		NODE *p = l.head;
		l.head = l.head->next;
		delete p;
	}
}
void delete_tail(LINK_LIST &l){
	if(l.head == NULL){
		cout << "Danh sach rong" << endl;
	}
	else{
		NODE *p = l.head;
		while(p->next != l.tail){
			p = p->next;
		}
		delete l.tail;
		l.tail = p;
		l.tail->next = NULL;
	}
}

//menu: 1. insert head, 2. insert tail, 3. delete head, 4. delete tail, 5. print list, 7. clear screen, 8. exit
int main(){
	LINK_LIST l;
	init_list(l);
	int x;
	int menu;
	do{
		cout << "1. insert head" << endl;
		cout << "2. insert tail" << endl;
		cout << "3. delete head" << endl;
		cout << "4. delete tail" << endl;
		cout << "5. print list" << endl;
		cout << "7. clear screen" << endl;
		cout << "8. exit" << endl;
		cout << "Enter your choice: ";
		cin >> menu;
		switch(menu){
			case 1:
				cout << "Enter data: ";
				cin >> x;
				insert_head(l, init_node(x));
				break;
			case 2:
				cout << "Enter data: ";
				cin >> x;
				insert_tail(l, init_node(x));
				break;
			case 3:
				delete_head(l);
				break;
			case 4:
				delete_tail(l);
				break;
			case 5:
				print_list(l);
				break;
			case 7:
				system("clear");
				break;
			case 8:
				break;
			default:
				cout << "Error: Invalid choice" << endl;
		}
	}while(menu != 8);
	return 0;
}
