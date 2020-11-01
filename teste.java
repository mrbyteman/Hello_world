public int[][] zigzag(int n) {
        int matrix[][];
        matrix = new int[n][n];
        
        int i, j, limit = 1, val = 1, dir = 1;
        int x = 0, y = 0;
        
        for(i = 0; i < n; i++) {
            for(j = 0; j < limit; j++) {
                matrix[x][y] = val;
                val++;
                
                x = x - dir;
                y = y + dir;
            }
            
            if(dir == 1) {
                x++;
            }
            else {
                y++;
            }
            dir *= -1;
            
            limit++;
        }
        
        if(dir == 1) {
            x = n -1;
            y = 1;
        }
        else {
            y = n - 1;
            x = 1;
        }
        limit -= 2;
        
        for(i = 0; i < n-1; i++) {
            for(j = 0; j < limit; j ++) {
                matrix[x][y] = val;
                val++;
                
                x = x - dir;
                y = y + dir;
            }
            
            if(dir == 1) {
                x += 2;
                y--;
            }
            else {
                y += 2;
                x--;
            }
            dir *= -1;
            
            limit--;
        }
        
        return matrix;
    } 
