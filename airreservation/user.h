#pragma once
#include <string>

namespace UserApp {
	class User {
	public:
		User() = default;
		User(const std::string& pName, const std::string& passportNo);

		void reserve();
		void flightschedule();
		void displaypassengerinfo();
		void flightdetails();
		void userticketinfo();
		void display();
		void exit();
	private:
		std::string pName;
		std::string passportNo;
		std::string airlineName;
		std::string flightNo;
		int seatNo;
	};
}