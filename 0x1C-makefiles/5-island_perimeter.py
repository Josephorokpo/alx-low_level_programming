#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island."""

def island_perimeter(grid):
    """Calculate the perimeter of an island.

    The function takes a 2D grid as input, where 0 represents water and 1 represents land.
    It traverses the grid to count the perimeter of the island based on the specified rules.

    Args:
        grid (list of lists): A 2D list of integers representing an island.

    Returns:
        int: The perimeter of the island defined in the input grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1

    return size * 4 - edges * 2
