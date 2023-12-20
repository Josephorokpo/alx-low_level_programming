#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Parameters:
    - grid (list of list of integers): Represents the island, where 0 is water and 1 is land.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid is a list of list of integers.
    - 0 represents a water zone, and 1 represents a land zone.
    - One cell is a square with side length 1.
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, and width and height don’t exceed 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check adjacent cells and subtract 1 for each neighboring land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
