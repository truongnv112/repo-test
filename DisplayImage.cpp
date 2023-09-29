#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    Mat image = imread(argv[1], 1);

if(image.empty()){
    cout<<"Khong the mo anh"<<endl;
    cin.get();
    return -1;
}

String windowName = "Anh goc";

namedWindow(windowName);

imshow(windowName, image);

waitKey(0);

destroyWindow(windowName);

return 0;

}