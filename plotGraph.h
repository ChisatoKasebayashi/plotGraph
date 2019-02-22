#pragma once

#include <iostream>
#include <stdio.h>
#include <vector>

class PlotGraph{
	private:
		std::vector<std::vector<double>> data;
		FILE *gp;
	public:
		int mat2vec(int index, int axis, std::vector<double> &vec);
		int plot(std::vector<double> &y,std::vector<double> &x);
		PlotGraph(std::vector<std::vector<double>> &mat);
		~PlotGraph();
};
