#pragma  once

#include "cocos2d.h"
USING_NS_CC;
#include "CardSkill.h"
class CardBase:public Node
{
public:
	enum TEAM_POS
	{
		NONE,
		FRONT,
		MIDDLE,
		BEHIND,
	};
	enum CARD_TYPE
	{
		HERO,
		ENEMY,
	};
public:
	CardBase();
	~CardBase();

	void build(const char* png);
	void compile();
private:
	//  Ù–‘
	CC_SYNTHESIZE(unsigned int, _HP, HP);
	CC_SYNTHESIZE(unsigned int, _Magic, Magic);
	CC_SYNTHESIZE(TEAM_POS, _team_pos, TeamPos);
	CC_SYNTHESIZE(CARD_TYPE, _type, Type);



	CC_SYNTHESIZE(Sprite*, _role_sprite, RoleSprite);
	CC_SYNTHESIZE(CardSkill*, _skill, Skill);

};

