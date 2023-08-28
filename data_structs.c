#include <unistd.h>
#include <stdio.h>

typedef struct
{
            int length;
            int width;
} rectangle;

typedef struct 
{
            int x;
            int y;
} position;

typedef struct
{
            char owner[20];
            rectangle rectangle;
            position position;
} buildingPlan;

int main()
{
            rectangle myRectangle = {5, 10};
            printf("Length: %d, Width: %d\n", myRectangle.length, myRectangle.width);
            buildingPlan myHouse = {"Helen Sirenko", {5, 10}, {32, 48}};
            printf("House owned by: %s,\n at location %d, %d,\n the apartment cordinates %d, %d\n",
                   myHouse.owner,
                   myHouse.rectangle.length,
                   myHouse.rectangle.width,
                   myHouse.position.x,
                   myHouse.position.y
                   );
            position path[] = {{1, 2}, {1, 3}, {2, 4}, {10, 18}};
            int i;
            int size = 4;

            i = 0;
            while (i < size)
            {
                        printf("%d, %d\n", path[i].x, path[i].y);
                        i++;
            }

            buildingPlan *structPointer = &myHouse;
            printf("Owner: %s,\nlocation 1: %d,\nlocation 2: %d\n", structPointer->owner, structPointer->rectangle.length, structPointer->rectangle.width);
            return (0);
}
