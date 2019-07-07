#include <iostream>
#include"user.h"

using namespace std;

namespace UserApp {
	User::User(const std::string& pName, const std::string& passportNo)
		:mpName(pName),mpassportNo(passportNo)
	{}
	void User::setpName(const std::string& pName) {
		mpName = pName;
	}
	const std::string& User::getpName const{
		return mpName;
	}
	void User::setpassportNo(const std::string& passportNo) {
		mpassportNo = passportNo;
	}
	const std::string& User::getpassportNo const{
		return mpassportNo;
	}
		void User::setFlightNo(int flightNo) {
		mflightNo = flightNo;
	}
	string User::getflightNo() const {
		return mflightNo;
	}
	void User::display()const {
		cout << "User:" << getpassportNo() << "," << getpName << endl;

	}
}
