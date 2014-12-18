#include "HeroCard.h"


HeroCard::HeroCard()
{
}


HeroCard::~HeroCard()
{
}

bool HeroCard::init()
{
	if (!CardBase::init())
	{
		return false;
	}



	return true;
}
