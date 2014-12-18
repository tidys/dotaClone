#include "EnemyCard.h"


EnemyCard::EnemyCard()
{
}


EnemyCard::~EnemyCard()
{
}

bool EnemyCard::init()
{
	if (!CardBase::init())
	{
		return false;
	}

	return true;
}
