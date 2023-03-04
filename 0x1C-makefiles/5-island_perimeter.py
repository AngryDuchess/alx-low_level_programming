#usr/bin/python3
"""Calculating the perimeter of an island"""

def num_water_neighbors(grid, i, j):
	"""Returns the number of water neighbors a cell has"""

	num = 0

	if i <=0 or not grid[i - 1][j]:
		num += 1
	if j <=0 or not grid[i][j - 1]:
		num += 1
	if j >= len(grid) -1 or not grid[i][j+1]:
		num += 1

	return num

def island_perimeter(grid):
	"""Returns the perimeter of the island"""

	perimeter = 0
	for i in range(len(grid)):
		for j in range(len(grid[i])):
			if grid[i][j]:
				perimeter += num_water_neighbors(grid, i, j)

	return perimeter
