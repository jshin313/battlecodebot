package bc19;

public class MyRobot extends BCAbstractRobot
{
    
    private static final int CASTLE = 0;
    private static final int CHURCH = 1;
    private static final int PILGRIM = 2;
    private static final int CRUSADER = 3;
    private static final int PROPHET = 4;
    private static final int PREACHER = 5;

    public Action turn() 
    {
        switch (me.unit)
        {
            case CASTLE:
            	return castle();
            case CHURCH:
                return church();
            case PILGRIM:
                return pilgrim();
            case CRUSADER:
                return crusader();
            case PROPHET:
                return prophet();
            case PREACHER:
                return preacher();
            default:
                log("ERROR!!!");
                return null;
                
        }
    }

    public Action castle()
	{
		if (me.turn < 100)
		{
			log("Building a pilgrim.");
	 		return buildUnit(SPECS.PILGRIM, 1, 0);
		}
		return null;
	}

	public Action church()
	{
		if (me.turn < 100)
		{
			log("Building a pilgrim.");
	 		return buildUnit(SPECS.PILGRIM, 1, 0);
		}
		return null;
	}

	public Action crusader()
	{
		if (me.turn < 100)
		{
			log("Moving.");
	 		return move(1,0);
		}
		return null;
	}

	public Action pilgrim()
	{
		if (me.turn < 100)
		{
			log("Moving.");
	 		return move(1,0);
		}
		return null;
	}

	public Action prophet()
	{
		if (me.turn < 100)
		{
			log("Moving.");
	 		return move(1,0);
		}
		return null;
	}

	public Action preacher()
	{
		if (me.turn < 100)
		{
			log("Moving.");
	 		return move(1,0);
		}
		return null;
	}


}
// package bc19;
// import java.awt.Point;

// public class MyRobot extends BCAbstractRobot {
// 	public int turn;
// 	public Point destination;

//     public Action turn() {
//     	turn++;

//     	if (me.unit == SPECS.CASTLE) {
//     		if (turn == 1) {
//     			log("Building a pilgrim.");
//     			return buildUnit(SPECS.PILGRIM,1,0);
//     		}

// 			Robot[] visibleRobots = getVisibleRobots();
// 			for(Robot r: visibleRobots) {
// 				if (r.team != me.team) {
// 					int diffX = r.x - me.x;
// 					int diffY = r.y - me.y;
// 					return attack(diffX, diffY);
// 				}
// 			}

// 			Point myLocation = new Point(me.x, me.y);

// 			if (destination == null) {
// 				destination = Navigation.reflect(myLocation, getPassableMap(), me.id % 2 == 0);
// 			}

// 			Point movementDirection = Navigation.goTo(myLocation, destination, getPassableMap(), getVisibleRobotMap());
// 			return move(movementDirection.x, movementDirection.y);
//     	}

//     	if (me.unit == SPECS.PILGRIM) {
//     		if (turn == 1) {
//     			log("I am a pilgrim.");
                 
//                 //log(Integer.toString([0][getVisibleRobots()[0].castle_talk]));
//     		}
//     	}

//     	return null;

// 	}
// }