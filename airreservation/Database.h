#pragma once
#include <iostream>
#include <vector>
#include "user.h"

namespace UserApp {
	const int kPassengerflightNo = 100;
	class Database {
	public:
		User& reserveUser(const std::string& pName, const std::string& passportNo);
		User& getUser(int flightNo);
		User& getUser(const std::string pName,
			const std::string& passportNo);
		void displayAll() const;

	private:
		std::vector<User> mUser;
		int mnextFlightNo = kpassengerflightNo;

	};
}