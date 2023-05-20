#ifndef SECURITYACCOUNT_H
#define SECURITYACCOUNT_H

#include "account.h"

class SecurityAccount : public Account {

public:
	SecurityAccount();
	virtual bool CheckPasswordValidity(std::string password) override;

};

#endif