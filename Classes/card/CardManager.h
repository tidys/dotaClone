#pragma once
#include "cocos2d.h"
USING_NS_CC;
#include <iostream>
using namespace std;
#include "HeroCard.h"
#include "EnemyCard.h"
typedef map<string, HeroCard*> HERO_BOX;
typedef map<string, EnemyCard*> ENEMY_BOX;
class CardManager
{
public:
	CardManager();
	~CardManager();

	static CardManager* getInstance();

public:
	void loadAllCard();
	void loadHeroCard();
	void loadEnemyCard();

	HERO_BOX  getHeroBox(){ return _list_hero; }
	ENEMY_BOX getEnemyBox(){ return _list_enemy; }

private:
	HERO_BOX	_list_hero;
	ENEMY_BOX	_list_enemy;
};

