#pragma once
#include "CardBase.h"
class HeroCard :
	public CardBase
{
public:
	HeroCard();
	~HeroCard();
public:
	CREATE_FUNC(HeroCard);
	virtual bool init();
	
public:
};

