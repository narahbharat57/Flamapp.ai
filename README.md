# N-Queens Problem Solver

![Chess Board Illustration](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1f/Eight-queens-animation.gif/220px-Eight-queens-animation.gif)

A C++ implementation of the classic N-Queens puzzle solver using backtracking algorithm.

## Table of Contents
- [Problem Description](#problem-description)
- [Solution Approach](#solution-approach)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Output Format](#output-format)
- [Examples](#examples)
- [Complexity Analysis](#complexity-analysis)
- [Limitations](#limitations)
- [Contributing](#contributing)
- [License](#license)

## Problem Description
The N-Queens puzzle requires placing N chess queens on an N×N chessboard so that no two queens threaten each other. This means no two queens can share the same row, column, or diagonal.

## Solution Approach
This implementation uses a recursive backtracking algorithm:
1. Places queens one row at a time
2. For each position, checks if it's safe (no conflicts with existing queens)
3. Recursively explores valid positions
4. Backtracks when no valid position is found in a row
5. Records complete solutions when all N queens are placed

## Features
- Finds all possible solutions for any N > 0
- Clean, formatted output showing each valid configuration
- Efficient pruning of invalid branches
- Clear safety checking mechanism
- Handles edge cases (N=1, N=2,3)

## Requirements
- C++11 or later
- GNU g++ or compatible compiler
- Standard Template Library

## Installation
```bash
git clone https://github.com/your-repo/n-queens-solver.git
cd n-queens-solver
make





# Circular Dependency Detector

![Dependency Graph Visualization](https://miro.medium.com/v2/resize:fit:720/format:webp/1*2okQF8QaF_B1j_5v9YJ4FQ.png)

A C++ implementation to detect circular dependencies in directed graphs using Depth-First Search (DFS).

## Table of Contents
- [Problem Description](#problem-description)
- [Algorithm](#algorithm)
- [Features](#features)
- [Requirements](#requirements)
- [Build & Run](#build--run)
- [Input Format](#input-format)
- [Output](#output)
- [Complexity Analysis](#complexity-analysis)
- [Examples](#examples)
- [Applications](#applications)
- [Limitations](#limitations)
- [Contributing](#contributing)
- [License](#license)

## Problem Description
This program detects whether a directed graph contains any circular dependencies (cycles). This is a common problem in:
- Software package dependencies
- Task scheduling systems
- Build systems
- Resource allocation systems

## Algorithm
The solution uses a modified DFS approach with:
- *Visited array*: Tracks permanently visited nodes
- *Recursion stack array*: Tracks nodes in the current DFS path
- Cycle detection when a node is encountered that's already in the recursion stack

## Features
- Efficient O(V+E) time complexity
- Handles disconnected graphs
- Clear true/false output
- Standard adjacency list representation
- Memory efficient implementation

## Requirements
- C++11 or later
- GNU g++ or compatible compiler
- Standard Template Library

## Build & Run
```bash
g++ -std=c++11 circular_dependency.cpp -o detector
./detector
