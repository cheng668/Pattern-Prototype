#include "ConcretePrototype1.h"


ConcretePrototype1::ConcretePrototype1()
{
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1& rhs)
{
	//��ȿ���
	_data = rhs._data;
}


ConcretePrototype1::~ConcretePrototype1()
{
}

Prototype* ConcretePrototype1::Clone() const
{
	cout << "ConcretePrototype1 Clone ,data :" << _data << endl;

	return new ConcretePrototype1(*this);
}

//��ʼ��
void ConcretePrototype1::Initialize(int data)
{
	_data = data;
}
