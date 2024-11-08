#include <stdio.h> 
#include <stdlib.h> 
#include "graphics.h" 
#include <time.h> 
#include <stdbool.h> 

#define WIDTH 14
#define HEIGHT 12
#define MARKERNUM 5

int GRID[WIDTH][HEIGHT] = {0};
int HOME[2] = {1, 1};
bool visited[WIDTH][HEIGHT] = {false};
int storedMarks = 0;
int MEMORY[WIDTH][HEIGHT] = {0};
int PATH[3][14*14] = {0};
int pathCounter = 0;

enum direction {N, E, S, W};

struct Robot{
    int x;
    int y;
    enum direction dir;
};

struct Robot robot = {1, 1, E};

void setMemory(){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            MEMORY[j][i] = -1;
        }
    }
}

void Square(int x, int y){
    fillRect(x, y, 40, 40);
}

void drawArrow(enum colour colour) {
    setColour(colour);
    int x = robot.x; 
    int y = robot.y;
    x *= 40; y *= 40;
    switch (robot.dir) {
        case N: fillPolygon(3, (int[]){x + 20, x, x + 40}, (int[]){y+1, y + 39, y + 39}); break;
        case E: fillPolygon(3, (int[]){x+1, x+1, x + 40}, (int[]){y+1, y + 39, y + 20}); break;
        case S: fillPolygon(3, (int[]){x+1, x + 39, x + 20}, (int[]){y+1, y+1, y + 39}); break;
        case W: fillPolygon(3, (int[]){x, x + 39, x + 39}, (int[]){y + 20, y, y + 40}); break;
    }
}

bool checkAdjacency(int x, int y){
    if ((x + 1 < WIDTH && GRID[x + 1][y] == 1) || 
        (x - 1 >= 0 && GRID[x - 1][y] == 1) || 
        (y + 1 < HEIGHT && GRID[x][y + 1] == 1) || 
        (y - 1 >= 0 && GRID[x][y - 1] == 1)){
        return true;
    }else{
        return false;
    }
}

void setWalls(){
    for(int row = 0; row < HEIGHT; row++){
        for(int col = 0; col < WIDTH; col++){
            if (row == 0 || row == HEIGHT - 1 || col == 0 || col == WIDTH - 1){
                GRID[col][row] = 1;
            }
        }
    }

    int x, y;

    for(int i = 0; i < 30; i++){ // Sets up irregular walls
        do {
        x = rand() % (WIDTH - 2) + 1;
        y = rand() % (HEIGHT - 2) + 1;
        } while (!checkAdjacency(x,y)); // Place walls adjacent to other walls

        GRID[x][y] = 1;
    }
}

void setObstacles(){
    int x, y;

    for(int i = 0; i < 8; i++){
        do {
        x = rand() % (WIDTH - 2) + 1;
        y = rand() % (HEIGHT - 2) + 1;
        } while (GRID[x][y] != 0); 

        GRID[x][y] = 3;
    }
}

int markAccessibleCells(int x, int y, bool visited[WIDTH][HEIGHT]) {
    int queue[WIDTH * HEIGHT][2];
    int front = 0, rear = 0; 
    int tiles = 0;

    queue[rear][0] = x;
    queue[rear++][1] = y;
    visited[x][y] = true;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 1};

    while (front < rear) {
        int cx = queue[front][0];
        int cy = queue[front++][1];
        tiles++;

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 0 && nx < WIDTH && ny >= 0 && ny < HEIGHT && !visited[nx][ny] && GRID[nx][ny] == 0) {
                visited[nx][ny] = true;
                queue[rear][0] = nx;
                queue[rear++][1] = ny;
            }
        }
    }
    return tiles; // Returns number of accessible cells
}

void findValidArrowPosition() {
    bool posFound = false;
    bool visited[WIDTH][HEIGHT];
    int tiles;

    while (!posFound) {
        // Reset visited array
        for (int i = 0; i < WIDTH; i++) {
            for (int j = 0; j < HEIGHT; j++) {
                visited[i][j] = false;
            }
        }

        // Randomly choose an initial position within the grid bounds
        robot.x = rand() % (WIDTH - 2) + 1;
        robot.y = rand() % (HEIGHT - 2) + 1;

        if (GRID[robot.x][robot.y] != 0) {
            continue; // Skip positions that aren't empty, skips to next iteration of while loop
        }

        // Run BFS to count reachable cells
        tiles = markAccessibleCells(robot.x, robot.y, visited);

        // Check if enough space for markers, robot, and an empty tile
        if (tiles >= MARKERNUM + 2) {
            posFound = true;
            HOME[0] = robot.x;
            HOME[1] = robot.y;
        }
    }
}

void setMarkers() {
    bool visited[WIDTH][HEIGHT] = {false};

    int x, y;

    for(int i = 0; i < MARKERNUM; i++){
        do {
        x = rand() % (WIDTH - 2) + 1;
        y = rand() % (HEIGHT - 2) + 1;
        } while (GRID[x][y] != 0 || (x == HOME[0] && y == HOME[1])); // Place only in empty cells

        GRID[x][y] = 2; // Marker
    }
}

void setGrid(){

    int x = 0;
    int y = 0;
    setWindowSize(560, 480);

    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            switch(GRID[j][i]){
                case 0:
                    setColour(white);
                    break;
                case 1:
                    setColour(red);
                    break;
                case 2:
                    setColour(lightgray);
                    break;
                case 3:
                    setColour(darkgray);
                    GRID[j][i] = 1;
                    break;
            }

            Square(x, y);
            setColour(black);
            drawLine(x, y, x + 40, y);
            drawLine(x, y, x, y + 40);

            x += 40;
        }
        y += 40;
        x = 0;
    }
}

void setHome(){
    int x = 0;
    int y = 0;

    setColour(orange);
    fillRect(HOME[0] * 40 + 1, HOME[1] * 40 + 1, 39, 39);
}

void drawBackground(){
    background();
    setWalls();
    setObstacles();
    findValidArrowPosition();
    setMarkers();
    setGrid();
}


//control functions below//


void tryCollectMarker(){
    int x = robot.x;
    int y = robot.y;

    if(GRID[x][y] == 2){
        GRID[x][y] = 0;
        setColour(white);
        fillRect(x * 40 + 1, y * 40 + 1, 39, 39);
        storedMarks++;
    }
}

void move(int x1, int y1){
    tryCollectMarker();
    drawArrow(white);
    setHome();
    robot.x = x1;
    robot.y = y1;
    drawArrow(green);
    sleep(100); 
}

void DFS(int x, int y) {

    visited[x][y] = true;
    
    PATH[0][pathCounter] = x;
    PATH[1][pathCounter] = y;

    tryCollectMarker();

    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};

    // Explore all four directions
    for (int i = 0; i < 4; i++) {
        int x1 = x + dx[i];
        int y1 = y + dy[i];

        drawArrow(white);
        robot.dir = i;

        if (x1 >= 0 && x1 < WIDTH && y1 >= 0 && y1 < HEIGHT &&
            !visited[x1][y1] && GRID[x1][y1] != 1) { 
            // Check if the cell within bounds and not wall
            
            move(x1, y1); // move to next open cell in that direction
            DFS(x1, y1); // looks for markers around that cell recursively

            drawArrow(white);
            robot.dir = (i + 2) % 4; // Opposite direction

            move(x, y); // backtracks if no spots free around cell
        }
    }
    // once looped 4 times function returns to previous recursive iteration
}


//main game below//


int main(){
    bool start = true;

    srand(time(0)); //using current time as seed for random number generator

    drawBackground();   
    setMemory();

    DFS(robot.x, robot.y);

    setColour(black);
    drawString("Markers (hopefully) Collected!", 195, 225);
    setHome();

    return 0;
}
