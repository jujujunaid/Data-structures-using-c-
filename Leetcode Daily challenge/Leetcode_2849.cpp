class Solution {
public:
   bool isReachableAtTime(int startX, int startY, int targetX, int targetY, int time) {
        if (startX == targetX && startY == targetY) 
            if (time == 1) 
                return 0;
        int xDifference = startX - targetX;
        int yDifference = startY - targetY;
        if (xDifference < 0) 
            xDifference = -xDifference;
        if (yDifference < 0) 
            yDifference = -yDifference;
      int maxDifference =max(xDifference, yDifference);
        if (maxDifference <= time) 
            return 1;
        return 0; 
    }
};