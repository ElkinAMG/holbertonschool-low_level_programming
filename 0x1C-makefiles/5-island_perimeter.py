#!/usr/bin/python3
"""
Island Perimeter:
    Returns the perimeter of the island described in a grid.
"""


def island_perimeter(grid):
    """
    This function calculates the perimeter of an island.

    → `grid` - It's the grid of the island to research.
    """

    perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x]:
                perimeter += 4
                if y > 0 and grid[y - 1][x] == 1:
                    perimeter -= 2

                if x > 0 and grid[y][x - 1] == 1:
                    perimeter -= 2

    return (perimeter)
