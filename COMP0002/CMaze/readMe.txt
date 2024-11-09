
Sanchi Sharma - 8/11/11

What the code does: 

- Sets up a 14 x 12 array which denotes what cell is a boundary, obstacle, or home

- Creates a closed 14 x 12 Grid with a randomized boundary
	- Denoted as 1 in the GRID array
	- Checks if boundary cells are adjacent to other boundary cells

- Creates obstacles with randomized positions
	- Denoted as 2 (for drawing purposes), and then 1 in the GRID array

-  Finds a valid position for the arrow to spawn
	- Preforms BFS to locate valid cells
	- Places robot in a location with at least enough space for robot, home, and markers

- Creates 5 markers with randomized positions
	- Denoted as 2 in the GRID array

- Ensures said markers are accessible by robot
	- Randomly selects valid squares found through BFS previously

- Updates the robot's position and direction as it moves

- Uses DFS to move the robot to collect all markers
	- Robot returns home at the end of DFS 
	- DFS programmed recursively


Known Issues:
- I wasn't able to find out how to seperate the files without causing lots of secondary errors! My sincerest apologies. 


Code to compile and run mazegame.c:

gcc graphics.c mazegame.c
./a.out | java -jar drawapp-4.0.jar


