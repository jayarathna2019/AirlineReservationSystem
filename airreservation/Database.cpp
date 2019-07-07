#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace UserApp {
	User& Database::reserveUser(const std::string& pName, const std::string& passportNo) {
		User theUser(pName, passportNo);
		theUser.setflightNo(mnextFlightNo++);
		mUser.push_back(theUser);
		return mUser[mUser.size() - 1];
	}
	User& Database::getUser(int flightNo) {
		for (auto& User : mUser) {
			if (User.getflightNo() == flightNo) {
				return User;
			}
		}
		throw logic_error("No User found");
	}
	void Database::displayAll const{
		for (const auto& User : mUser) {
			User.display()
		}
	}
}