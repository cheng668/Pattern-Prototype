#pragma once
#include <map>
#include <string>
using namespace std;
class Prototype;
class PrototypeManager
{
public:
	PrototypeManager();
	~PrototypeManager();
	void add(const string&, Prototype*);
	Prototype* get(const string&);
private:
	map<string, Prototype*> _ptyMap;
};

