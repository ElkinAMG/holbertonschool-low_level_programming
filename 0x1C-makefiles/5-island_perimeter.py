#!/usr/bin/python3
"""
Island Perimeter:
    Returns the perimeter of the island described in a grid.
"""


def look_up(cur_i, prev_i, per):
    """
    Looks for match upside.
    """

    if cur_i == prev_i:
        per[0] -= 1


def look_down(cur_i, next_i, per):
    """
    Looks for match downside.
    """

    if cur_i == next_i:
        per[0] -= 1


def look_around(cur, prev, grid, grid_pos, peri):
    """
    Looks for matches around the sub grid.
    """

    p_index = cur - 1
    n_index = cur + 1
    s_grid = grid[grid_pos]
    large = len(s_grid)
    peri[0] += 4

    if (grid_pos + 1) < len(grid):
        n_grid = grid[grid_pos + 1]

    try:
        look_up(s_grid[cur], grid[grid_pos - 1][cur], peri)
    except:
        pass

    try:
        look_down(s_grid[cur], n_grid[cur], peri)
    except:
        pass

    if p_index >= -1 and n_index < large:
        if s_grid[p_index] == 1:
            peri[0] -= 1
        if s_grid[n_index] == 1:
            peri[0] -= 1


def island_perimeter(grid):
    """
    This function calculates the perimeter of an island.

    → `grid` - It's the grid of the island to research.
    """

    perimeter = [0]
    prev_in = 0

    for grid_pos, col in enumerate(grid):
        for current_in, c in enumerate(col):
            if c == 1:
                look_around(current_in, prev_in, grid, grid_pos, perimeter)
                prev_in = current_in

    return (perimeter[0])
