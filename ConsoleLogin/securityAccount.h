#ifndef SECURITYACCOUNT_H
#define SECURITYACCOUNT_H

#include "account.h"

class SecurityAccount : public Account {

public:
	SecurityAccount();
	virtual void CreateAccount() override;

};






#endif