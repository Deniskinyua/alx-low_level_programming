#!/usr/bin/python3
"""Technical Interview Prep: Island Parameter"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in:
        -> grid is a list of list of integers:
            - 0 represents the water zone
            - 1 represents the land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically (not diagonally)
            - Grid is rectangular, width and height dont exceed 100
        -> grid completely surrounded by water
        -> There is one island(or nothing)
        -> The island does not have "lakes":
            (water inside that is not connected to the water around the island)
        -> Requirements:
            - First line contains: #!/usr/bin/python3
            - You are not allowed to import any module
            - Module and function must be documented
    """
    w = len(grid[0])
    h = len(grid)
    ed = 0
    sz = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                sz += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    ed += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    ed += 1
    return sz * 4 - ed * 2
