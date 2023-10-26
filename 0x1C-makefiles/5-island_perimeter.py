#!/usr/bin/python3

def island_perimeter(grid):
    if not grid:
        return 0

    perimeter = 0

    # Iterate through the rows and columns of the grid
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                # For each land cell, check its adjacent cells
                neighbors = 0

                # Check the cell to the left
                if col > 0 and grid[row][col - 1] == 1:
                    neighbors += 1

                # Check the cell to the right
                if col < len(grid[0]) - 1 and grid[row][col + 1] == 1:
                    neighbors += 1

                # Check the cell above
                if row > 0 and grid[row - 1][col] == 1:
                    neighbors += 1

                # Check the cell below
                if row < len(grid) - 1 and grid[row + 1][col] == 1:
                    neighbors += 1

                # The perimeter for the current land cell is 4 (total sides) minus the number of adjacent land cells
                perimeter += (4 - neighbors)

    return perimeter
