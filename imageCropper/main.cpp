#include <opencv2/opencv.hpp>
#include <QFileInfo>
#include <QDir>
#include <QTextStream>
#include <QFile>

#define IMAGESPATH "./images"
#define CROPEDPATH "./croped/"

using namespace std;
using namespace cv;

int xend , yend , xbegin , ybegin , numberOfClicked;
cv::Mat mat;

void on_mouse(int event, int x, int y, int flags, void* param){
    if (event == CV_EVENT_LBUTTONDOWN){
        numberOfClicked++;
        if(numberOfClicked % 2 == 1){
            std::cout << " clicked on the left side!\n";
        }
        else{
            std::cout << " clicked on the right side!\n";
        }
        if(numberOfClicked%2 == 1){
            xbegin = x;
            ybegin = y;
        }
        else{
            xend = x;
            yend = y;
        }
    }
}

int main(){
    QDir imagesDir(IMAGESPATH);
    QDir positivesDir(CROPEDPATH);
    if(!imagesDir.exists()){
        std::cout << "image path does not exists!" << std::endl;
    }
    std::string cmd = "mkdir croped";
    if(!positivesDir.exists()){
        system(cmd.c_str());
    }
    QFileInfoList files = imagesDir.entryInfoList();
    QFileInfoList positiveFiles = positivesDir.entryInfoList();

    int counter = -1;
    int croped_counter = positiveFiles.size() - 2;
    bool trueClick = false;
    numberOfClicked = 0;

    foreach(const QFileInfo &fi, files){
        counter++;
        trueClick = false;
        if(counter < croped_counter + 2){
            continue;
        }
        mat = cv::imread(fi.absoluteFilePath().toStdString());
        std::string fileName = CROPEDPATH + QString::number(croped_counter).toStdString()+".jpg";
        while(trueClick == false){
            numberOfClicked = 0;
            cv::namedWindow("result", CV_WINDOW_AUTOSIZE);
            cv::setMouseCallback("result",&on_mouse, 0);
            cv::imshow("result",mat);
            int c = cv::waitKey(NULL);
            if(c == 'c'){
                trueClick = true;
                cv::Mat cropedImage = mat(Rect(xbegin, ybegin, abs(xend - xbegin), abs(yend-ybegin)));
                cv::imwrite(fileName,cropedImage);
                croped_counter++;
                std::cout << "croped image saved!\n";
            }
            else
                if(c == 'q'){
                    exit(0);
                }
        }
    }
    return 0;
}
