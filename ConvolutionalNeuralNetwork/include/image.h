#ifndef IMAGE_H
#define IMAGE_H

#include <vector>

using namespace std;

struct Pixel
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

class Image
{
private:
    int width;
    int height;
    int channels;

    vector<Pixel> pixels;

public:
    Image();

    int getWidth() const;
    int getHeight() const;
    int getChannels() const;

    void setWidth(int w);
    void setHeight(int h);
    void setChannels(int c);

    vector<Pixel>& getPixels();
};

#endif