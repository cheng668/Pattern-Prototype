#include "PrototypeManager.h"


PrototypeManager::PrototypeManager()
{
}


PrototypeManager::~PrototypeManager()
{
}

void PrototypeManager::add(const string& name, Prototype* pty)
{
	_ptyMap[name] = pty;
}

Prototype* PrototypeManager::get(const string& name)
{
	return _ptyMap.at(name);
}