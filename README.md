# Algorithms Repository

Welcome to the **Algorithms Repository**, a collection of essential algorithms and data structures implemented in C++.

This repository is designed to serve as a learning resource for students, developers, and enthusiasts who want to understand and implement algorithms effectively.

## Topics Covered:
1. [0/1 Knapsack Problem](01_0_1_Knapsack/README.md)
2. [Bellman-Ford & Floyd-Warshall Algorithms](02_Bellman_Ford_Floyd_Warshall/README.md)
3. [Dijkstra's Algorithm on 2D Grid](03_Dijkstra_2D_Grid/README.md)
4. [Disjoint Set Data Structure (Union-Find)](04_Disjoint_Set/README.md)
5. [Divide and Conquer Sorting Algorithms](05_Divide_Conquer_Sorting/README.md)
6. [Graph Traversals (BFS & DFS)](06_Graph_Traversal/README.md)
7. [Introduction to Dynamic Programming](07_Dynamic_Programming/README.md)
8. [Minimum Spanning Trees (Prim's and Kruskal's Algorithms)](08_MST_Prims_Kruskal/README.md)

Each directory includes the source code and a brief explanation of the algorithm.

---

## Topics:

1. **[0/1 Knapsack Problem](01_0_1_Knapsack/README.md)**
   - **Description:** A classic **Dynamic Programming** problem that determines the maximum value that can be achieved without exceeding the weight capacity of a knapsack.
   - **Applications:** Resource allocation, finance, and decision-making problems.

2. **[Bellman-Ford & Floyd-Warshall Algorithms](02_Bellman_Ford_Floyd_Warshall/README.md)**
   - **Description:**
     - **Bellman-Ford:** Computes shortest paths from a single source in a weighted graph, handling negative weights.
     - **Floyd-Warshall:** Finds shortest paths between all pairs of vertices in a weighted graph.
   - **Applications:** Network routing, traffic flow optimization, and graph analysis.

3. **[Dijkstra's Algorithm on 2D Grid](03_Dijkstra_2D_Grid/README.md)**
   - **Description:** An efficient algorithm for finding the shortest path from a source node to other nodes in a weighted 2D grid or graph.
   - **Applications:** GPS systems, game development (pathfinding), and network design.

4. **[Disjoint Set Data Structure (Union-Find)](04_Disjoint_Set/README.md)**
   - **Description:** A DS used to represent a collection of non-overlapping sets, supporting two key operations: **Union** and **Find**.
   - **Applications:** Detecting cycles in graphs, Minimum Spanning Tree (Kruskal's Algorithm), and network connectivity.

5. **[Divide and Conquer Sorting Algorithms](05_Divide_Conquer_Sorting/README.md)**
   - **Description:** Implementation of sorting algorithms based on the divide-and-conquer paradigm:
     - **Merge Sort:** Recursively divides and merges sorted arrays.
     - **Quick Sort:** Uses partitioning to sort elements efficiently.
   - **Applications:** Data organization, searching, and database systems.

6. **[Graph Traversals (BFS & DFS)](06_Graph_Traversal/README.md)**
   - **Description:**
     - **Breadth-First Search (BFS):** Explores nodes layer by layer.
     - **Depth-First Search (DFS):** Explores nodes as deep as possible before backtracking.
   - **Applications:** Web crawlers, shortest path in unweighted graphs, and solving puzzles/mazes.

7. **[Introduction to Dynamic Programming](07_Dynamic_Programming/README.md)**
   - **Description:** Focuses on breaking problems into smaller overlapping subproblems and solving them using memoization or tabulation.
   - **Examples:**
     - Fibonacci sequence
     - Longest Common Subsequence
     - Matrix Chain Multiplication
   - **Applications:** Optimization problems in robotics, bioinformatics, and machine learning.

8. **[Minimum Spanning Trees (Prim's and Kruskal's Algorithms)](08_MST_Prims_Kruskal/README.md)**
   - **Description:**
     - **Prim's Algorithm:** Constructs an MST by growing the tree one edge at a time.
     - **Kruskal's Algorithm:** Constructs an MST by sorting and adding edges based on weight.
   - **Applications:** Network design, clustering, and image segmentation.

---

## Getting Started

### Prerequisites
- **C++ Compiler** (e.g., GCC, Clang)
- Basic understanding of programming concepts.

### Usage
1. Clone the repository:
   ```bash
   git clone https://github.com/Rakibul-Hassan-1/Algorithms.git
2. Navigate to the desired directory:
```bash
    cd Algorithms
```
3. Compile and run the C++ code:
```bash
g++ -o output_file_name file_name.cpp
./output_file_name
