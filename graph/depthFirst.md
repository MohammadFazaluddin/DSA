
# Graph:
## Depth First Search
Depth first search of an undirected graph proceeds as follows. We start at any vertex *v*. The start vertex *v* is visited. 
Next an unvisited vertex *w* adjecent to *v* is selected and a depth first search from *w* is initiated. 
When a vertex *u* is reached such that all adjecent vertices have been visited, we back up to the last vertex visited which has an unvisited vertex *w* 
adjecent to it and initiate a depth first search from *w*. The search terminates when no unvisited vertex can be reached from any of the visited ones.
