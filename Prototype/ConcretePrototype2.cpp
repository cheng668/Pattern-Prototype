#include "ConcretePrototype2.h"


ConcretePrototype2::ConcretePrototype2()
{
}


ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2& rhs)
{
	//��ȿ���
	_data = rhs._data;
}


ConcretePrototype2::~ConcretePrototype2()
{
}

Prototype* ConcretePrototype2::Clone() const
{
	cout << "ConcretePrototype2 Clone ,data :" << _data << endl;
	return new ConcretePrototype2(*this);
}

//��ʼ��
void ConcretePrototype2::Initialize(int data)
{
	_data = data;
}
