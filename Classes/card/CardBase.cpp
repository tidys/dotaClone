#include "CardBase.h"


CardBase::CardBase()
:_HP(0)
, _Magic(0)
, _team_pos(TEAM_POS::NONE)
, _skill(nullptr)
, _role_sprite(nullptr)
{
}


CardBase::~CardBase()
{
}

void CardBase::build(const char* png)
{
	if (_role_sprite == nullptr)
	{
		_role_sprite = Sprite::create(png);
		CCString* err = CCString::createWithFormat("cannot find png: %s", png);
		CCASSERT(_role_sprite != nullptr, err->getCString());
		this->addChild(_role_sprite);

	}
}

void CardBase::compile()
{
	CCASSERT(_role_sprite == nullptr, "card _role_sprite should not be nullptr");
	CCASSERT(_team_pos == TEAM_POS::NONE, "card _team_pos should not be NONE");
}
