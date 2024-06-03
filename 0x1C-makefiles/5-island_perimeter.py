#!/usr/bin/python3
"""Technical Interview Prep: Island Parameter"""

def island_perimeter(grid):
    w = len(grid[0])
    h = le(grid)
    ed = 0
    sz = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                sz += 1
                if(j > 0 and grid[i][j - 1] == 1):
                    ed += 1
                if(i > 0 and grid [i][i - 1] == 1):
                    ed += 1
    return sz * 4 - ed * 2
