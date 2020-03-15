//#ifndef STACK_H_
//#define STACK_H_
//
//typedef unsigned long Item;
//
//#pragma once
//class Stack
//{
//	enum {MAX=10};    //作用域枚举
//	Item items[MAX];
//	int top;
//public:
//	Stack();
//	bool isempty() const;
//	bool isfull() const;
//	bool push(const Item & item);
//	bool pop(Item& item);
//
//};
//
//Stack::Stack() {
//	top = 0;
//}
//bool Stack::isempty() const {
//	return top == 0;
//}
//bool Stack::isfull() const {
//	return top == MAX;
//}
//bool Stack::push(const Item& item) {
//	if (top < MAX) {
//		items[top++] = item;
//		return true;
//	}else
//		return false;
//}
//bool Stack::pop(Item& item) {
//	if (top > 0) {
//		item = items[--top];
//		return true;
//	}else
//		return false;
//}
//
//
//#endif


/*堆栈操作
1、top()：返回一个栈顶元素的引用，类型为 T& 。如果栈为空，返回值未定义。
2、push(const T& obj)：可以将对象副本压入栈顶。这是通过调用底层容器的 push_back() 函数完成的。
3、push(T&& obj)：以移动对象的方式将对象压入栈顶。这是通过调用底层容器的有右值引用参数的 push_back() 函数完成的。
4、pop()：弹出栈顶元素。
5、size()：返回栈中元素的个数。
6、empty()：在栈中没有元素的情况下返回 true。
7、emplace()：用传入的参数调用构造函数，在栈顶生成对象。
8、swap(stack<T>& other_stack)：将当前栈中的元素和参数中的元素交换。
参数所包含元素的类型必须和当前栈的相同。对于 stack 对象有一个特例化的全局函数 swap() 可以使用。
*/