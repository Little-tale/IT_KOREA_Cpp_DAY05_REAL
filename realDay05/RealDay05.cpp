#include <stdio.h>
#include <iostream>
#include <functional>
using namespace std;

// �̰� ��¥ 5�����Դϴ�. �Ǽ��� 4������ 5������ �߾��׿�
// ���� ��� C++ �������
	// �����ڿ� �Ҹ��ڸ� ������µ���
		//���ݴ� ���ϰ� ���¹��� ���̴ϴ�.

// Ŭ������ (��ü)�� ���ٺ��� ���� �����͸� ���ؾ� �Ҷ��� ����ϴ�.
	// ���� ��� ��ü�� �ٷ�� ���� ��ü�� �����ذ� �Ǵµ�.
	
//class Object {
//public:
//	string name; // ���ڿ� �̸�
//	double weight; // ����
//	Object(string name, double weight) : name(name), weight(weight) {} // ������
//};
//
//class Matter { // �����̶�� ��
//public:
//	Object obj;
//	Matter(string name, double weight) : obj(name, weight) {
//		obj.name;
//	} 
//};
//
//class Fluid { // ��ü��� ��
//	Object obj;
//	Fluid(string name, double weight) : obj(name, weight) {}
//
//};


// Ŭ������ Ȯ���� -> ����� ����� ���̴�.

//class A {
//public:
//	int a;
//};
//
//class B : public A { // A��� Ŭ������ ��� ������ �������ڴ�.
//public:
//	int b;
//	void E() {
//		a = 5;
//	}
//};
//
//void main() {
//	B a;
//	a.a;
//	a.E();
//}

//class Animal {
//public:
//	string name;
//	double weight;
//	// ���� �����ڸ� ������
//	Animal() {
//		cout << " �ִϸ� ������ " << endl;
//	}
//	~Animal() {
//		cout << "�Ҹ� 1" << endl;
//	}
//};
//class Human : public Animal {
//public:
//	string location;
//	string phone;
//	Human(string loc, string phon) : location(loc), phone(phon) {
//		cout << " �޸� ������ " << endl;
//	}
//	~Human() {
//		cout << "�Ҹ� 2" << endl;
//	}
//};
//// ���ۻ����� 
//class Student : public Human {
//public:
//	int score;
//	Student(string location, string phone):Human(location,phone) { // ���� ������
//		cout << " �л� ������ " << endl;
//	}
//	~Student() {
//		this->location;
//		cout << "�Ҹ� 3" << endl;
//	}
//};
//
//
//void main() {
//	Student A("�ּ�","��ȣ");
//}

// ������ �غ����� �غ���

	// å Ŭ���� ����
	// �Ϲǰ� �۰��� ����
	// å ��� �����ϰ� �Լ�
	// å�� ����� ����Ʈ ���� Ŭ����
	// å�� ��°� ������ ����Ʈ ���� ��� ��� �߰�


//class Book {
//public:
//	string bname;
//	string wname;
//	
//	Book(string bookName, string writerName):bname(bookName),wname(writerName) {}
//	void Show(/*Book* this*/) {
//		cout <<"å�̸� : " << bname << " ||| ���� : " << wname << endl;
//	}
//
//};
//class BestBook :public Book{
//public:
//	string Bestbookname;
//	string Bestwritername;
//
//
//	BestBook(string bookName, string writerName) : Book(bookName, writerName){
//		this->Bestbookname = bookName; this->Bestwritername = writerName;
//	}
//	void Show() {
//		cout << "�轺Ʈ å�̸� : " << Bestbookname << " ||| ���� : " << Bestwritername << endl;
//		Book::Show();
//	}
//};
//
//
//void main() {
//	Book a("�������� �ϱ�", "������");
//	BestBook b("���Ͼ� �����", "���̽�");
//
//	
//	a.Book::Show();
//	b.Show();
//}

// ����Ʈ Ŭ���� 

	// Ŭ������ ���� ������ �̿��ϴ� ��δ� �� 3�����̴�.
// Ŭ���� ������ �̿��� �ܺ� ����						- 3����	public
// Ŭ���� ���� �Լ������� ���� ����					- 2����	public  protected
// Ŭ������ �ڽ� Ŭ���� ���� �Լ������� ��� ����		- 1����	public  protected  private

// private, protected, public

// private -> 1������ �����Ҽ� �ִ�.
// protected -> 2���� ���ϸ� ���� ����
// public -> 3�������ϸ� ���� ����


// public ��� -> ����� ��� ���� �ִ� ������ �ۺ��̴�. -> �������� �״�� �����϶�
// protected ��� -> ����� ��� ���� ���ִ� ������ protected -> �ۺ� -> protected�� ����
// private ��� -> ����� ��� ���� �ִ� ������ private�� -> ��� ������ private�� �����϶�




//class List {
//public:
//	class Node {
//	public:
//		int data;
//		Node* next;
//		Node* prev;
//		Node(int data) : data(data), next(nullptr), prev(nullptr) {};
//	};
//public:
//	void Insert(int data) {
//		Node* node = new Node(data);
//		if (end) end->next = node;
//		else root = node;
//		node->prev = end;
//		end = node;
//	}
//
//	int Pop() {
//		if (root == 0) return 0;
//		Node* node = root;
//		root = root->next;
//		if (root) root->prev = 0;
//		int result = node->data;
//		delete node;
//		return result;
//	}
//
//public:
//	Node* root;
//	Node* end;
//	List() :root(nullptr), end(nullptr) {}
//	~List() {
//		Node* now = root;
//		Node* rem;
//		while (now != 0) {
//			rem = now;
//			now = now->next;
//			delete rem;
//		}
//	}
//
//	
//};
//
//class Stack : public List {
//public:
//	void Insert(int data) {
//		Node* node = new Node(data);
//		if (root) root->prev = node;
//		else end = node;
//		node->next = root;
//		root = node;
//	}
//};
//
//class Que : public List {
//public:
//
//};



//class List {
//protected:
//	class Node {
//	/*private:*/
//	public:
//		int data;
//		Node* next;
//		Node* prev;
//		Node(const int& data) :data(data), next(nullptr), prev(nullptr) {}
//		//friend class List;// ���� ����Ʈ�� ģ���� �߰��Ѵ�. �����Ҽ� �ְ� ���ְڴ�.
//	};
//private:
//	Node* CreateNode(const int& data) {
//		return new Node(data);
//	}
//private:
//	Node* root;
//	Node* end;
//public:
//	void InsertFront(const int& data) {
//		Node* node = CreateNode(data);
//		if (root) root->prev = node;
//		else end = node;
//		node->next = root;
//		root = node;
//	}
//	void InsertBack(int data) {
//		Node* node = CreateNode(data);
//		if (root) end->next = node;
//		else root = node;
//		node->prev = root;
//		end = node;
//	}
//	int PopFront() {
//		if (!root) return int();
//		Node* remover = root;
//		root = root->next;
//		if (root) root->prev = nullptr;
//		else end = nullptr;
//		int result = remover->data;
//		delete remover;
//		return result;
//	}
//	int PopBack() {
//		if (!end) return int();
//		Node* remover = end;
//		end = end->prev;
//		if (end) end->next = nullptr;
//		else root = nullptr;
//		int result = remover->data;
//		delete remover;
//		return result;
//	}
//// ���� 3���� �ڷᱸ�� Ŭ������ ������ �ִ� ��� �����͸� ��ȸ�ϴ� ������ �����Լ��� �޾Ƽ� 
//// �����ϴ� �Լ��� �߰��Ͻÿ�
//// a. insert(3)4
//// a. Action([](int&test)-> void{cout <, test;});
//// 34
//public:
//	void Action(function<void(int&)>act){
//		Node* now = root;
//		while (now != 0) {
//			act(now->data);
//			now = now->next;
//		}
//	}
//
//
//public:
//	List():root(nullptr),end(nullptr){}
//	~List() {
//		Node* now = root;
//		Node* remover;
//		while (now != 0) {
//			remover = now;
//			now = now->next;
//			delete remover;
//		}
//	}
//
//
//};
//
//class Stack : public List {
//public:
//	void Push(const int& data) {
//		InsertFront(data);
//	}
//	int Pop() {
//		return PopFront();
//	}
//	void Action(function<void(int&)>act) {
//		List::Action(act);
//	}
//
//};
//class Que : public List {
//public:
//	void Push(const int& data) {
//		InsertFront(data);
//	}
//	int Pop() {
//		return PopBack();
//	}
//	void Action(function<void(int&)>act) {
//		List::Action(act);
//	}
//};
//
//// ���� 3���� �ڷᱸ�� Ŭ������ ������ �ִ� ��� �����͸� ��ȸ�ϴ� ������ �����Լ��� �޾Ƽ� 
//// �����ϴ� �Լ��� �߰��Ͻÿ�
//// a. insert(3)4
//// a. Action([](int&test)-> void{cout <, test;});
//
//void main() {
//	List a;
//	Stack b;
//	Que c;
//	// ���ɽ���
//	List* p = &b; // �̷��� �ϸ� �ڽ�Ŭ������ �������� �ȴ�. �� �θ� ���Եȴ�. 
//	//p->PopFront; ��ĳ���ý� �ڽ��� ������ �ִ� �����͸� ����Ҽ� ���� �ȴ�.
//
//	//�ٿ� ĳ���� -> �θ� Ŭ������ �ڽ� Ŭ������ �� ��ȯ
//	// dynamic_cast<Stack*>(p); ������ ���.
//
//
//
//	for (int i = 0; i <= 100; ++i) {
//		a.InsertBack(i);
//		b.Push(i);
//		c.Push(i);
//	}
//
//	a.Action([](int& data)-> void {
//		cout << data << " > ";
//	});
//	cout << " \n";
//	cout << " \n";
//	b.Action([](int& data)-> void {
//		cout << data << " > ";
//		});
//	cout << " \n";
//	cout << " \n";
//	c.Action([](int& data)-> void {
//		cout << data << " > ";
//		});
//}

// �������̵��� ��� ������ �����Ͽ���. 
	// ������ ������ �ڵ�this ������ �����̴�.

// Java ���������� �ſ� ���� �ִ� ���� -> ���� ���.
// implements, extends

// �ڽ� �Ѹ� �θ� N��
//class A {
//public:
//	A() { cout << "A������" << endl; }
//};
//class B : public A {
//public:
//	B() { cout << "B������" << endl; }
//};
//class C : public A {
//public:
//	C() { cout << "C������" << endl; }
//};
//class D : public B, public C {
//public:
//	D() { cout << "D������" << endl; }
//};
//// ������ �� �Ⱦ��Ե�. �ͱ� ? 
//	// ���� �ڷḦ ���� D�� A�θ� �ΰ��� ���´�.
//void main() {
//	D a;
//}

// �⺻������ �������� __stdcall
// __cdecl
//void __cdecl main() {
//
//}
