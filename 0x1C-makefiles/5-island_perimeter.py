#!/usr/bin/python3
"""
module to calculate grid perimeter
"""
def island_perimeter(grid):
    """takes grid parameter and returns perimeter"""
    perimeter = 0
    size = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]  == 1:
                size += 1
            if grid[i][j] == 1 and grid[i][j+1] == 1 and grid[i][j-1] == 0:
                size += 1
        perimeter= size * 2
    return perimeter 
