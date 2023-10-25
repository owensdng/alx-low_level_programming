#!/usr/bin/python3

# Define a function to calculate the perimeter of an island.
def island_perimeter(grid):
    """
    Calculate the perimeter of an island.

    Args:
        grid (list of list of int): Represents an island where 0 is water and 1 is land.

    Returns:
        int: The perimeter of the island.
    """

    # Get the width and height of the island grid.
    width = len(grid[0])
    height = len(grid)

    # Initialize variables to keep track of edges and the size of the island.
    edges = 0
    size = 0

    # Iterate through each cell in the grid to count the size and edges.
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # If the cell is land, increase the size count.
                size += 1
                # Check adjacent cells to count shared edges.
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    # Calculate the perimeter using the collected data.
    return size * 4 - edges * 2

if __name__ == "__main":
    # Example usage of the function with a sample island grid.
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print("Perimeter of the island:", island_perimeter(grid))
