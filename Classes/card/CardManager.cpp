#include "CardManager.h"
#include "comdefine.h"


CardManager::CardManager()
{
}


CardManager::~CardManager()
{
}

static CardManager* CardManager_Instance = nullptr;
CardManager* CardManager::getInstance()
{
	if (CardManager_Instance==nullptr)
	{
		CardManager_Instance = new CardManager;
	}
	return CardManager_Instance;
}

void CardManager::loadAllCard()
{
	loadEnemyCard();
	loadHeroCard();
}

void CardManager::loadHeroCard()
{
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_HERO1);
		hero->setTeamPos(HeroCard::TEAM_POS::FRONT);
		hero->compile();
		_list_hero[HERO_PNG_HERO1] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_HERO2);
		hero->setTeamPos(HeroCard::TEAM_POS::FRONT);
		hero->compile();
		_list_hero[HERO_PNG_HERO2] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_HERO3);
		hero->setTeamPos(HeroCard::TEAM_POS::MIDDLE);
		hero->compile();
		_list_hero[HERO_PNG_HERO3] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_HERO4);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_HERO4] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_HERO5);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_HERO5] = hero;
	}
	
}

void CardManager::loadEnemyCard()
{
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_ENEMY1);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_ENEMY1] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_ENEMY2);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_ENEMY2] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_ENEMY3);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_ENEMY3] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_ENEMY4);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_ENEMY4] = hero;
	}
	{
		auto hero = HeroCard::create();
		hero->build(HERO_PNG_ENEMY5);
		hero->setTeamPos(HeroCard::TEAM_POS::BEHIND);
		hero->compile();
		_list_hero[HERO_PNG_ENEMY5] = hero;
	}

}
