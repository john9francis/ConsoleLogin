#ifndef SECURITYACCOUNT_H
#define SECURITYACCOUNT_H

#include "account.h"

class SecurityAccount : public Account {

public:
	SecurityAccount();
	virtual void CreateAccount() override;
	virtual bool CheckUsernameValidity(std::string username) override;
	virtual bool CheckPasswordValidity(std::string password) override;

};






#endif