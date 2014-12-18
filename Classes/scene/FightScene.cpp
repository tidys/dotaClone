#include "FightScene.h"
#include "CardManager.h"

FightScene::FightScene()
{
	_list_enemy.clear();
	_list_hero.clear();
}


FightScene::~FightScene()
{
}

Scene* FightScene::createScene()
{
	Scene* scene = Scene::create();
	auto layer = FightScene::create();
	scene->addChild(layer);
	return scene;
}

bool FightScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	CardManager::getInstance()->loadAllCard();
	initHero();
	initEnemy();

	return true;
}

void FightScene::initHero()
{
	// 5 crads
	HERO_BOX heroBox = CardManager::getInstance()->getHeroBox();
	HERO_BOX::iterator it = heroBox.begin();

	if (heroBox.size() > 5)
	{
		for (int i = 0; i < 5; i++, it++)
		{
			HeroCard* hero = it->second;
			this->addChild(hero->getRoleSprite());

		}
	}
	
}

void FightScene::initEnemy()
{
	// 5 crads
	for (int i = 0; i < 5; i++)
	{
		EnemyCard* enemy = EnemyCard::create();

	}
}
