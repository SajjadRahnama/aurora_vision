#ifndef STAR_H
#define STAR_H

#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "../filter.h"

using namespace std;
using namespace cv;

class Star {
    int row, col;
    unsigned int i;
    vector <vector <Point> > contours;
    vector <Point> approx;
    std::vector<std::vector<cv::Point> > star;
    void detect();
    void drawing(Mat &org_img, vector <vector <Point> > &contours, int i);

public:
    Star();
    void recognize(Mat &org_img, Mat thr_img);
};

#endif // STAR_H