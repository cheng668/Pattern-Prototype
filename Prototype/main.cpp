#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
#include "PrototypeManager.h"

void main()
{
	{
		//原型管理类
		PrototypeManager mager;

		Prototype* c1 = new ConcretePrototype1();
		c1->Initialize(11);
		Prototype* c2 = new ConcretePrototype2();
		c2->Initialize(22);

		mager.add("ConcretePrototype1", c1);
		mager.add("ConcretePrototype2", c2);

		Prototype* c11 = mager.get("ConcretePrototype1")->Clone();
		Prototype* c22 = mager.get("ConcretePrototype2")->Clone();

		delete c1;
		delete c2;
		delete c11;
		delete c22;
	}

	_CrtDumpMemoryLeaks();
	system("pause");
	return;
}

/*
output:
ConcretePrototype1 Clone ,data :11
ConcretePrototype2 Clone ,data :22
*/