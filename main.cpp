#include "Graph.h"
using namespace std;


int main()
{
	int min = 3;
	int count(0);

	Graph g;
	g.addVertex("Oleg");
	g.addVertex("Nicita");
	g.addVertex("Nastya");
	g.addVertex("Vanya");
	g.addVertex("Zhenya");
	g.addVertex("Vasya");
	g.addEdge("Oleg", "Nicita");
	g.addEdge("Nicita", "Nastya");
	g.addEdge("Nastya", "Vanya");
	g.addEdge("Vanya", "Zhenya");
	g.addEdge("Zhenya", "Vasya");
	g.addEdge("Oleg", "Vasya");

	for (int i = 0; i < SIZE; i++)
	{
		int j = i + 1;
		for (; j < SIZE; j++)
		{
			int min_f = g.findMinWayDFS(i, j);
			if (min_f <= 3) {
				g.show_vertex(i);
				cout << "  ";
				g.show_vertex(j);
				std::cout << std::endl;

			}
		}
	}
	std::cout << endl;
	std::cout << "Done!";

}
