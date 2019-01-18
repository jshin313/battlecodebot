// Pseudocode:

void turn()
{
	if (castle)
		castle();
	else if (church)
		church();
	else if (pilgrim)
		pilgrim();
	else if (crusader)
		crusader();
	else if (prophet)
		prophet();
	else
		preacher();
}

void castle()
{
	if (turn < someSmallNumber || unprotected())
	{
		makePreachers();
		makeProphets();
	}
	doNothing();
}

void church()
{
	if (turn < someSmallNumber || unprotected())
	{
		makePreachers();
		makeProphets();
	}
	doNothing();
}

void pilgrim()
{

	if (EnemyVisible)
	{
		signalEnemyLoc();
		moveTowardsCastleorChurch();
	}
	if (rightByCastleorChurch) // If adjacent
		moveAway();	// In order to make more room for more troops
	if (locatedOnKarboniteDeposit && karbonite<fuel)
mineKarbonite();
if (locatedOnFuelDeposit && fuel<karbonite)
mineFuel();
if (karbonite<fuel)
seekKarbonite();
if (fuel>karbonite())
seekFuel();
}
doNothing();
}

void crusader()
{
	if (enemyNearEnoughtoAttack)
		attack();
	if (rightByCastleorChurch)
		moveAway();
if (receivedEnemyLoc)
moveTowardsEnemy();
}

void prophet()
{
	if (enemyNearEnoughtoAttack)
		attack();
	if (rightByCastleorChurch)
		moveAway();
if (receivedEnemyLoc)
moveTowardsEnemy();
doNothing();
}

void preacher()
{
	if (enemyNearEnoughtoAttack)
		attack();
	if (rightByCastleorChurch)
		moveAway();
if (receivedEnemyLoc)
moveTowardsEnemy(); // Implement so that the enemy troops wait until there are enough troops to attack
	doNothing();
}

