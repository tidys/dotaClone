#pragma once
#include "CardBase.h"
class EnemyCard :
	public CardBase
{
public:
	EnemyCard();
	~EnemyCard();
public:
	CREATE_FUNC(EnemyCard);
	virtual bool init();
};

