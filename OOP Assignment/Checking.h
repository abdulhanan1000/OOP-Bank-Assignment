#pragma once
#include"bankaccount.h"
#include"saving.h"
class checking: public saving {

public:
	void withdraw(double);
	void montly_proc();
};