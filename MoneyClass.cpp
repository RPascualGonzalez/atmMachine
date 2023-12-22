#include "MoneyClass.h"
#include <iostream>
#include <string>

using namespace std;

namespace NspMoneyClass
{
	MoneyClass::MoneyClass(){};
	MoneyClass::MoneyClass(int value, string type, int quantityOfUnits) :
		mValue(value),
		mType(type),
		mQuantityOfUnits(quantityOfUnits),
		mQuantityOfUnitsToGive(0)
	{};

	int MoneyClass::GetTotalMoneyWithThisValue()
	{
		return mValue * mQuantityOfUnits;
	}

	void MoneyClass::DecreaseNumberUnits()
	{
		mQuantityOfUnits--;
	}

	void MoneyClass::IncreaseQuantityOfUnitsToGive()
	{
		mQuantityOfUnitsToGive++;
	}

	int MoneyClass::GetValue()
	{
		return mValue;
	}

	int MoneyClass::GetQuantityOfUnitsToGive()
	{
		return mQuantityOfUnitsToGive;
	}

	string MoneyClass::GetMoneyType()
	{
		return mType;
	}

}
