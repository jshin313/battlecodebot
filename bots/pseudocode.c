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
	if (turn < someSmallNumber)
	{
		makePreachers();
		makeProphets();
	}

}

void church()
{
	if (turn < someSmallNumber)
	{
		makePreachers();
		makeProphets();
	}

}

void pilgrim()
{

	if (EnemyVisible)
	{
		signalEnemyLoc();
		moveTowardsCastleorChurch();
	}
	if ()
	if (rightByCastleorChurch) // If adjacent
		moveAway();	// In order to make more room for more troops


}

void crusader()
{
	if (enemyNearEnoughtoAttack)
		attack();
	if (rightByCastleorChurch)
		moveAway();
}

void prophet()
{
	if (enemyNearEnoughtoAttack)
		attack();
	if (rightByCastleorChurch)
		moveAway();
}

void preacher()
{
	if (enemyNearEnoughtoAttack)
		attack();
	if (rightByCastleorChurch)
		moveAway();
}