# Cpp-Roy-Floyd
## Overview
This project represents an implementation of the Roy-Floyd algorithm, used to determine the minimum distance between two nodes in a weighted directed graph (each arch has an associated cost).
The algorithm reads the input data from an input file, computes the minimum distance between any two nodes, and writes the results to an output file in the form of a distance matrix.
## Structure of roy-floyd.in:
* n – number of nodes
* m – number of arches
* then m arches represented as touple (x, y, z) 
  * x – start node
  * y – end node
  * z – cost
## Mentions for roy-floyd.out:
Distance from a node to itself is considered 0;
If there is no path from one node to another, the corresponding value in the matrix is considered -1.

