#pragma once
#include <string>

namespace NspMoneyClass
{
	class MoneyClass
	{
		public:
			MoneyClass(); //default constructor
			MoneyClass(int value, std::string type, int quantityOfUnits);

			std::string mType;
			int mValue;
			int mQuantityOfUnits;
			int mQuantityOfUnitsToGive;

			void DecreaseNumberUnits();
			void IncreaseQuantityOfUnitsToGive();
			int GetTotalMoneyWithThisValue();
			int GetValue();
			int GetQuantityOfUnitsToGive();
			std::string GetMoneyType();
			

	};
}

