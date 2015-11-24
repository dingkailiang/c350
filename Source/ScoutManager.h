#pragma once

#include "Common.h"
#include "MicroManager.h"
#include "InformationManager.h"

namespace UAlbertaBot
{
class ScoutManager // does not use overlords!
{
/*
	BWAPI::Unit	        _workerScout;
    std::string                     _scoutStatus;
    std::string                     _gasStealStatus;
	int				                _numWorkerScouts;
	bool			                _scoutUnderAttack;
    bool                            _didGasSteal;
    bool                            _gasStealFinished;
    int                             _currentRegionVertexIndex;  // the current fleeing position in the enemy region vertices
    int                             _previousScoutHP;
	std::vector<BWAPI::Position>    _enemyRegionVertices; // contains edge of enemy base region

	bool                            enemyWorkerInRadius(); // is enemy worker close to scout?
    bool			                immediateThreat(); // is scout under attack?
    void                            gasSteal();
    int                             getClosestVertexIndex(BWAPI::Unit unit); // gets the edge of the enemy region that is closest
																			 // to the unit
    BWAPI::Position                 getFleePosition(); // makes the scout flee. if it is the first time fleeing, it gets the vertex
													   // closest to it. otherwise, it uses _currentRegionVertexIndex to figure out
													   // the next position to flee to
	BWAPI::Unit	        getEnemyGeyser();
	BWAPI::Unit	        closestEnemyWorker();
    void                            followPerimeter(); // run around the region of their base
	void                            moveScouts(); // main method for looping scout activity
    void                            drawScoutInformation(int x, int y);
    void                            calculateEnemyRegionVertices(); // calculates the edge of the enemy region. could be useful
*/
BWAPI::Unit						_scouter1;
	BWAPI::Unit						_scouter2;
	BWAPI::Unit						_overlordScout;
  
	void                            moveScouts();
	ScoutManager();

public:

    static ScoutManager & Instance();

	void update(); // moveScouts(). called by gameCommander

    void setWorkerScout(BWAPI::Unit unit); // frees the old worker scout and sets a new one. called by gameCommander
bool setScout(BWAPI::Unit unit);
	void onSendText(std::string text);
	void onUnitShow(BWAPI::Unit unit);
	void onUnitHide(BWAPI::Unit unit);
	void onUnitCreate(BWAPI::Unit unit);
	void onUnitRenegade(BWAPI::Unit unit);
	void onUnitDestroy(BWAPI::Unit unit);
	void onUnitMorph(BWAPI::Unit unit);
};
}