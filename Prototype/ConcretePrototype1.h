#pragma once
#include "Prototype.h"
class ConcretePrototype1 :
	public Prototype
{
public:
	ConcretePrototype1();
	ConcretePrototype1(const ConcretePrototype1&);
	virtual ~ConcretePrototype1();
	virtual Prototype* Clone() const override;
	virtual void Initialize(int) override;
private:
	int _data = 1;
};

