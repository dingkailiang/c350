#pragma once

#include "Common.h"

namespace UAlbertaBot
{

	//NEW
namespace SquadOrderTypes
{
	// the only relevant ones seem to be Attack and Defend. Idle does nothing, Regroup isn't used, and Drop is Situational
    enum { None, Idle, Attack, Defend, Regroup, Drop, Confuse, Harass, Hydra, SquadOrderTypes };
}

class SquadOrder
{
    size_t              _type;
    int                 _radius;
    BWAPI::Position     _position;
    std::string         _status;

public:

	SquadOrder() 
		: _type(SquadOrderTypes::None)
        , _radius(0)
	{
	}

	SquadOrder(int type, BWAPI::Position position, int radius, std::string status = "Default") 
		: _type(type)
		, _position(position)
		, _radius(radius) 
		, _status(status)
	{
	}

	const std::string & getStatus() const 
	{
		return _status;
	}

    const BWAPI::Position & getPosition() const
    {
        return _position;
    }

    const int & getRadius() const
    {
        return _radius;
    }

    const size_t & getType() const
    {
        return _type;
    }
};
}