#ifndef NUMBERACCOUNT_H
#define NUMBERACCOUNT_H

#include "account.h"

class NumberAccount : public Account {

public:
	NumberAccount();
	virtual bool CheckPasswordValidity(std::string password) override;


};






#endif