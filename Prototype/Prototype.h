#pragma once
#include <iostream>
using namespace std;
class Prototype
{
public:
	virtual Prototype* Clone() const = 0;
	virtual ~Prototype(){}
	virtual void Initialize(int) = 0;
};