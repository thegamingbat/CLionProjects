#include <iostream>
#include <limits>

const int MAX_NODES = 10; // Maximum number of nodes in the graph

// Function to perform Dijkstra's algorithm
void Dijkstra(int graph[MAX_NODES][MAX_NODES], int numNodes, int startNode, int distances[MAX_NODES]) {
    // Array to keep track of visited nodes
    bool visited[MAX_NODES] = {false};

    // Initialize distances array with maximum values
    for (int i = 0; i < numNodes; ++i) {
        distances[i] = std::numeric_limits<int>::max();
    }

    // Set distance to the starting node as 0
    distances[startNode] = 0;

    // Main loop for Dijkstra's algorithm
    for (int count = 0; count < numNodes - 1; ++count) {
        // Find the minimum distance vertex from the set of vertices not yet processed
        int minDistance = std::numeric_limits<int>::max();
        int minIndex = -1;

        for (int v = 0; v < numNodes; ++v) {
            if (!visited[v] && distances[v] <= minDistance) {
                minDistance = distances[v];
                minIndex = v;
            }
        }

        // Mark the selected vertex as visited
        visited[minIndex] = true;

        // Update distances of the adjacent vertices
        for (int v = 0; v < numNodes; ++v) {
            if (!visited[v] && graph[minIndex][v] && distances[minIndex] != std::numeric_limits<int>::max() &&
                distances[minIndex] + graph[minIndex][v] < distances[v]) {
                distances[v] = distances[minIndex] + graph[minIndex][v];
            }
        }
    }
}

// Function to print the visited distances
void printDistances(int distances[MAX_NODES], int numNodes, int startNode) {
    std::cout << "Shortest distances from node " << startNode << ":\n";
    for (int i = 0; i < numNodes; ++i) {
        std::cout << "Node " << i << ": " << distances[i] << "\n";
    }
}

int main() {
    int graph[MAX_NODES][MAX_NODES] = {{0}};
    int numNodes, startNode;

    // User interaction to set up the graph
    std::cout << "Enter the number of nodes (maximum " << MAX_NODES << "): ";
    std::cin >> numNodes;

    if (numNodes <= 0 || numNodes > MAX_NODES) {
        std::cerr << "Invalid number of nodes.\n";
        return 1;
    }

    std::cout << "Enter the adjacency matrix for the graph:\n";
    for (int i = 0; i < numNodes; ++i) {
        for (int j = 0; j < numNodes; ++j) {
            std::cout << "Edge between node " << i << " and node " << j << ": ";
            std::cin >> graph[i][j];
        }
    }

    std::cout << "Enter the starting node: ";
    std::cin >> startNode;

    if (startNode < 0 || startNode >= numNodes) {
        std::cerr << "Invalid starting node.\n";
        return 1;
    }

    // Array to store visited distances
    int distances[MAX_NODES];

    // Perform Dijkstra's algorithm
    Dijkstra(graph, numNodes, startNode, distances);

    // Print the visited distances
    printDistances(distances, numNodes, startNode);

    return 0;
}
