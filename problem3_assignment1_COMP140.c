#include<stdio.h>

int main()
{
														//declaring variables for room and tile length, width, area and also the
														//number of tiles and cost for each tile used and total cost of all tiles used
int lengthRoom, widthRoom, areaRoom, lengthTile, widthTile, areaTile;
int numOfTiles;
float costPerTile, totalCostTile;

														//instructions for inputting the length and width of both room and tiles.
														//and inputting the cost per tile
printf("Enter room length: ");
scanf("%d", &lengthRoom);
printf("Enter room width: ");
scanf("%d", &widthRoom);
printf("Enter tile length: ");
scanf("%d", &lengthTile);
printf("Enter tile width: ");
scanf("%d", &widthTile);
printf("Enter cost for each Tile: ");
scanf("%f", &costPerTile);
printf("\n");

areaRoom = lengthRoom * widthRoom;										//function for area of the room and outputting it
printf("Area of Room: %d", areaRoom);
printf("\n");
areaTile = lengthTile * widthTile;										//function for area of tile and outputting it
printf("Area of Tile: %d", areaTile); 										
printf("\n");

if(areaRoom>=areaTile)												//As long as the total area of each tile used is less than of equal to the area of the room
{														//the we calculate the number of tiles used by dividing the area of the room 	
numOfTiles = areaRoom / areaTile;                                                                               //by area of the tile. After that we multiple the number of tiles with cost per tile
totalCostTile = numOfTiles * costPerTile;                                                                       //to find the total cost of all tiles. If the total area of each tile entered is greater 
printf("The total cost of number of tiles need for the room of area %d is %.2f", areaRoom, totalCostTile);      //than the total area of the room, we return an error statement and exit
printf("\n");
}
else
{
printf("Error: Tile area greater than room area.");
printf("\n");
}

return 0;
}
