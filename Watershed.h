#pragma once
#include <vector>
#include<opencv2/opencv.hpp>
#include "Voxel.h"
#include "Instance.h"

class Watershed
{
public:
	static std::vector<cv::Mat> segmentate(const Instance& instance);
};
