#include <stdio.h>
#include <iostream>
#include <functional>
using namespace std;

// 이게 진짜 5일차입니다. 실수로 4일차를 5일차로 했었네요
// 오늘 배울 C++ 기능은요
	// 생성자와 소멸자를 배웠었는데요
		//조금더 편리하게 쓰는법을 배울겁니다.

// 클래스를 (객체)를 쓰다보면 내가 데이터를 더해야 할때가 생깁니다.
	// 예를 들어 객체를 다루다 보니 유체도 관리해가 되는데.
	
//class Object {
//public:
//	string name; // 문자열 이름
//	double weight; // 무게
//	Object(string name, double weight) : name(name), weight(weight) {} // 생성자
//};
//
//class Matter { // 물질이라는 뜻
//public:
//	Object obj;
//	Matter(string name, double weight) : obj(name, weight) {
//		obj.name;
//	} 
//};
//
//class Fluid { // 유체라는 뜻
//	Object obj;
//	Fluid(string name, double weight) : obj(name, weight) {}
//
//};


// 클래스의 확장인 -> 상속을 배워볼 것이다.

//class A {
//public:
//	int a;
//};
//
//class B : public A { // A라는 클래스의 모든 정보를 가져오겠다.
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
//	// 만약 생성자를 만들자
//	Animal() {
//		cout << " 애니멀 생성자 " << endl;
//	}
//	~Animal() {
//		cout << "소멸 1" << endl;
//	}
//};
//class Human : public Animal {
//public:
//	string location;
//	string phone;
//	Human(string loc, string phon) : location(loc), phone(phon) {
//		cout << " 휴먼 생성자 " << endl;
//	}
//	~Human() {
//		cout << "소멸 2" << endl;
//	}
//};
//// 슈퍼생성자 
//class Student : public Human {
//public:
//	int score;
//	Student(string location, string phone):Human(location,phone) { // 슈퍼 생성자
//		cout << " 학생 생성자 " << endl;
//	}
//	~Student() {
//		this->location;
//		cout << "소멸 3" << endl;
//	}
//};
//
//
//void main() {
//	Student A("주소","번호");
//}

// 연습을 해보도록 해봐요

	// 책 클래스 생성
	// 일므과 작가명 가짐
	// 책 출력 가능하게 함수
	// 책을 상속한 베스트 셀러 클래스
	// 책의 출력과 별개로 베스트 셀러 출력 기능 추가


//class Book {
//public:
//	string bname;
//	string wname;
//	
//	Book(string bookName, string writerName):bname(bookName),wname(writerName) {}
//	void Show(/*Book* this*/) {
//		cout <<"책이름 : " << bname << " ||| 저자 : " << wname << endl;
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
//		cout << "배스트 책이름 : " << Bestbookname << " ||| 저자 : " << Bestwritername << endl;
//		Book::Show();
//	}
//};
//
//
//void main() {
//	Book a("김재형의 일기", "김재형");
//	BestBook b("나니아 연대기", "루이스");
//
//	
//	a.Book::Show();
//	b.Show();
//}

// 리스트 클래스 

	// 클래스의 내부 정보를 이용하는 경로는 총 3가지이다.
// 클래스 변수를 이용한 외부 접근						- 3레벨	public
// 클래스 내부 함수에서의 내부 접근					- 2레벨	public  protected
// 클래스의 자식 클래스 내부 함수에서의 상속 접근		- 1레벨	public  protected  private

// private, protected, public

// private -> 1레벨만 접근할수 있다.
// protected -> 2레벨 이하만 접근 가능
// public -> 3레벨이하만 접근 가능


// public 상속 -> 상속한 모든 것의 최대 권한이 퍼블릭이다. -> 모든권한을 그대로 유지하라
// protected 상속 -> 상속한 모든 것의 ㅊ최대 권한이 protected -> 퍼블릭 -> protected로 변경
// private 상속 -> 상속한 모든 것의 최대 권한이 private다 -> 모든 권한을 private로 변경하라




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
//		//friend class List;// 내가 리스트를 친구로 추가한다. 접근할수 있게 해주겠다.
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
//// 만든 3개의 자료구조 클래스에 가지고 있는 모든 데이터를 순회하는 동작을 람다함수로 받아서 
//// 실행하는 함수를 추가하시오
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
//// 만든 3개의 자료구조 클래스에 가지고 있는 모든 데이터를 순회하는 동작을 람다함수로 받아서 
//// 실행하는 함수를 추가하시오
//// a. insert(3)4
//// a. Action([](int&test)-> void{cout <, test;});
//
//void main() {
//	List a;
//	Stack b;
//	Que c;
//	// 업케스팅
//	List* p = &b; // 이렇게 하면 자식클래스가 가려지게 된다. 즉 부모만 남게된다. 
//	//p->PopFront; 업캐스팅시 자식이 가지고 있던 데이터를 사용할수 없게 된다.
//
//	//다운 캐스팅 -> 부모 클래스를 자식 클래스로 형 변환
//	// dynamic_cast<Stack*>(p); 안전한 방법.
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

// 오버라이딩이 어떤거 때문에 가능하였다. 
	// 가능한 이유는 자동this 포인터 덕분이다.

// Java 문법에서는 매우 쓸모 있는 개념 -> 다중 상속.
// implements, extends

// 자식 한명에 부모 N명
//class A {
//public:
//	A() { cout << "A생성자" << endl; }
//};
//class B : public A {
//public:
//	B() { cout << "B생성자" << endl; }
//};
//class C : public A {
//public:
//	C() { cout << "C생성자" << endl; }
//};
//class D : public B, public C {
//public:
//	D() { cout << "D생성자" << endl; }
//};
//// 하지만 잘 안쓰게됨. 왤까 ? 
//	// 위에 자료를 보면 D는 A부모를 두개를 갖는다.
//void main() {
//	D a;
//}

// 기본적으로 적혀지는 __stdcall
// __cdecl
//void __cdecl main() {
//
//}
