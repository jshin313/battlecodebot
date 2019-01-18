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
	if (rightByCastle)
		moveAway();	
}

void pilgrim()
{
	if (rightByCastle)
		moveAway();

}

void crusader()
{
	if (rightByCastle)
		moveAway();
}

void prophet()
{
	if (rightByCastle)
		moveAway();
}

void preacher()
{
	if (rightByCastle)
		moveAway();
}