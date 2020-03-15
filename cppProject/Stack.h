//#ifndef STACK_H_
//#define STACK_H_
//
//typedef unsigned long Item;
//
//#pragma once
//class Stack
//{
//	enum {MAX=10};    //������ö��
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


/*��ջ����
1��top()������һ��ջ��Ԫ�ص����ã�����Ϊ T& �����ջΪ�գ�����ֵδ���塣
2��push(const T& obj)�����Խ����󸱱�ѹ��ջ��������ͨ�����õײ������� push_back() ������ɵġ�
3��push(T&& obj)�����ƶ�����ķ�ʽ������ѹ��ջ��������ͨ�����õײ�����������ֵ���ò����� push_back() ������ɵġ�
4��pop()������ջ��Ԫ�ء�
5��size()������ջ��Ԫ�صĸ�����
6��empty()����ջ��û��Ԫ�ص�����·��� true��
7��emplace()���ô���Ĳ������ù��캯������ջ�����ɶ���
8��swap(stack<T>& other_stack)������ǰջ�е�Ԫ�غͲ����е�Ԫ�ؽ�����
����������Ԫ�ص����ͱ���͵�ǰջ����ͬ������ stack ������һ����������ȫ�ֺ��� swap() ����ʹ�á�
*/