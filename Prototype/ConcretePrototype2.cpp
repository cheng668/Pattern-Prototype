#include "ConcretePrototype2.h"


ConcretePrototype2::ConcretePrototype2()
{
}


ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2& rhs)
{
	//深度拷贝
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

//初始化
void ConcretePrototype2::Initialize(int data)
{
	_data = data;
}
