#include "image.h"

Image::Image()
{
    width = 0;
    height = 0;
    channels = 0;
}

int Image::getWidth() const
{
    return width;
}

int Image::getHeight() const
{
    return height;
}

int Image::getChannels() const
{
    return channels;
}

void Image::setWidth(int w)
{
    width = w;
}

void Image::setHeight(int h)
{
    height = h;
}

void Image::setChannels(int c)
{
    channels = c;
}

vector<Pixel>& Image::getPixels()
{
    return pixels;
}