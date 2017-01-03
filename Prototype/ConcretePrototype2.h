#pragma once
#include "Prototype.h"
class ConcretePrototype2 :
	public Prototype
{
public:
	ConcretePrototype2();
	ConcretePrototype2(const ConcretePrototype2&);
	virtual ~ConcretePrototype2();
	virtual Prototype* Clone() const override;
	virtual void Initialize(int) override;
private:
	int _data = 2;
};

