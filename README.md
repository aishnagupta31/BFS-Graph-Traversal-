# 🔍 Breadth-First Search (BFS) in C++

This is a simple implementation of the **Breadth-First Search (BFS)** algorithm in C++ using an adjacency list for representing an undirected graph.

---

## 📌 Features

- Accepts user input for the number of vertices and edges.
- Builds an undirected graph using an adjacency list.
- Performs BFS traversal from a user-specified starting node.
- Prints the BFS traversal order.
- Prints the adjacency list of the graph.

---

## 🧠 Algorithm Used

This project uses **Breadth-First Search (BFS)**, a graph traversal algorithm that explores all neighbors of a node before moving on to the next level.

---

## 📂 Input Format

The program takes the following input from standard input (`cin`):

```
vertices edges
u1 v1
u2 v2
...
start_node
```

Where:
- `vertices` = number of vertices in the graph
- `edges` = number of edges in the graph
- Each `u v` pair defines an undirected edge between vertices `u` and `v`
- `start_node` = the node from which BFS traversal begins

---

## ✅ Sample Input

```
5 4
1 2
1 3
2 4
3 5
1
```

---

## 🔁 Sample Output

```
1 2 3 4 5
1: 2 3 
2: 1 4 
3: 1 5 
4: 2 
5: 3 
```

---

## 💻 How to Run

1. Copy the code to a file named `bfs.cpp`.
2. Compile using a C++ compiler:
   ```
   g++ bfs.cpp -o bfs
   ```
3. Run the program:
   ```
   ./bfs
   ```
