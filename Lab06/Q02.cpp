/* Programmer:Muhammad Ali 23K-0052
* Date: 21/03/24
* Descrption: image
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Image {
private:
    int width, height;
    int *data;
public:
    Image(int width, int height, int *data) : width(width), height(height) {
        this->data = new int[width*height];

        for (int i = 0; i < width*height; i++)
            this->data[i] = data[i];
    }

    Image(const Image& im) : width(im.width), height(im.height) {
        this->data = new int[width*height];

        for (int i = 0; i < width*height; i++)
            this->data[i] = im.data[i];
    }

    ~Image() {
        delete[] data;
    }

    void display() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++)
                cout << *(data + i*width + j) << " ";
            cout << endl;
        }
    }

    void updateData() {
        for (int i = 0; i < width*height; i++) {
            if (data[i] > 0) continue;
            data[i] = rand()%255 + 1;
        }
    }
};

int main() {
    srand(time(0));

    int sample[2*3] = {-1, -2, 0, -3, 4, 128};
    Image image1(2, 3, sample);

    Image copy(image1);

    image1.display();
    cout << endl;
    copy.display();

    image1.updateData();
    copy.updateData();
    cout << endl;
    cout << endl;

    image1.display();
    cout << endl;
    copy.display();

    return 0;
}